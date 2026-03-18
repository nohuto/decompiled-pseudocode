/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140769C5C
 * Callers:
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x14022EB00 (MiRemoveSecureEntry.c)
 *     MiDeleteVirtualAddresses @ 0x1402508A0 (MiDeleteVirtualAddresses.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiLocateOldestSecure @ 0x14037DF38 (MiLocateOldestSecure.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiCheckSecuredVad @ 0x14068337C (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _KPROCESS *Process; // rbp
  volatile signed __int32 *v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 *OldestSecure; // rax
  int v10; // edx
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = MiObtainReferencedVadEx(BugCheckParameter2, 1, &v12);
  v6 = (ULONG_PTR)v5;
  if ( v5 )
  {
    v7 = *((unsigned int *)v5 + 6);
    v8 = (v7 | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12;
    if ( (v5[12] & 0x70) != 0x10
      || (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v8
      || a2 != (*((unsigned int *)v5 + 7) | ((unsigned __int64)*((unsigned __int8 *)v5 + 33) << 32))
             - (v7 | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32))
             + 1 )
    {
      goto LABEL_9;
    }
    OldestSecure = MiLocateOldestSecure((__int64)v5);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1402uLL, BugCheckParameter2, v6, 0LL);
    MiRemoveSecureEntry(v6, OldestSecure);
    if ( (*(_DWORD *)(v6 + 48) & 8) != 0
      && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0
      && (int)MiCheckSecuredVad(
                v6,
                v8,
                ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))
               - (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
               + 1) << 12,
                0x55u,
                0) < 0 )
    {
      v10 = (*(_DWORD *)(v6 + 28) << 12) | 0xFFF;
      memset(v11, 0, sizeof(v11));
      MiDeleteVirtualAddresses(v8, v10, 64, (__int64)v11);
LABEL_9:
      MiUnlockAndDereferenceVad((PVOID)v6);
      return;
    }
    MiDeleteVad((_DWORD *)v6, 0LL, 0);
  }
}
