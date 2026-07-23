/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x140657018
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140689564 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiIsRangeFullyCommitted @ 0x1407076A0 (MiIsRangeFullyCommitted.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r15d
  int v5; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v16; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = a3;
  v5 = a2;
  memset(v17, 0, sizeof(v17));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v17);
  v9 = MiObtainReferencedVadEx(v3, 0, &v16);
  v10 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && MiVadSupportsPrivateCommit(v9)
      && ((*(_DWORD *)(v10 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v11, v5, v4, 1, 0) >= 0)
      && (*(_DWORD *)(v10 + 48) & 0x100000) == 0
      && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v12 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL), (v12 & 0x80u) != 0) && (v12 & 0x20) == 0
        || !MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v13, v3, v8) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v10, v3, v8) >= 0 )
        {
          v7 = MiAddSecureEntry(v10, v3, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  if ( v7 )
    return a1 ^ qword_140C4DE90 ^ v7;
  return v7;
}
