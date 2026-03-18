/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140213440 (MiVadMapsLargeImage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402AD6E0 (MiVadSupportsPrivateCommit.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiIsRangeFullyCommitted @ 0x14062EEB0 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x14062F008 (MiCheckSecuredVad.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406EAC5C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

unsigned __int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r15d
  int v5; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  volatile signed __int32 *v9; // rax
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
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v17);
  v9 = MiObtainReferencedVadEx(v3, 0, &v16);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32))
      && MiVadSupportsPrivateCommit((__int64)v9)
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
          v7 = (unsigned __int64)MiAddSecureEntry(v10, v3, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((PVOID)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  if ( v7 )
    v7 ^= a1 ^ qword_140C4DC50;
  return v7;
}
