/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x14076DE5C
 * Callers:
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x14027CB50 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeleteVirtualAddresses @ 0x1403092D0 (MiDeleteVirtualAddresses.c)
 *     MiLocateOldestSecure @ 0x14037DE18 (MiLocateOldestSecure.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _KPROCESS *Process; // rbp
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 *OldestSecure; // rax
  int v10; // edx
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = MiObtainReferencedVadEx(BugCheckParameter2, 1, &v12);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 + 24);
    v8 = (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12;
    if ( (*(_DWORD *)(v5 + 48) & 0x70) != 0x10
      || (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v8
      || a2 != (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
             - (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
             + 1 )
    {
      goto LABEL_9;
    }
    OldestSecure = MiLocateOldestSecure(v5);
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
      MiUnlockAndDereferenceVad((char *)v6);
      return;
    }
    MiDeleteVad((_DWORD *)v6, 0LL, 0);
  }
}
