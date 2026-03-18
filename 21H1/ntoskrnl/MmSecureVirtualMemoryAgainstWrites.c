/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14061606C
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x140616270 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406C9AAC (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  int v6; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  volatile signed __int32 *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v19; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v20[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a3;
  v6 = a2;
  memset(v20, 0, sizeof(v20));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v20, a4);
  v10 = MiObtainReferencedVadEx(v4, 0, &v19);
  v13 = (__int64)v10;
  if ( v10 )
  {
    if ( v9 >> 12 <= (*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
      && MiVadSupportsPrivateCommit((__int64)v10)
      && ((*(_DWORD *)(v13 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v14, v6, v5, 1, 0) >= 0)
      && (*(_DWORD *)(v13 + 48) & 0x100000) == 0
      && (*(_DWORD *)(v13 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v15 = *(_DWORD *)(**(_QWORD **)(v13 + 72) + 56LL), (v15 & 0x80u) != 0) && (v15 & 0x20) == 0
        || !MiVadMapsLargeImage(v13) && (unsigned int)MiIsRangeFullyCommitted(v16, v4, v9) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v13, v4, v9) >= 0 )
        {
          v8 = MiAddSecureEntry(v13, v4, v9, -1073741823, 0);
          if ( !v8 )
            MiUnsecureVirtualMemoryAgainstWrites(v13, v4, v9);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v13);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v20, 0LL, v11, v12);
  if ( v8 )
    return a1 ^ qword_140C4DD90 ^ v8;
  return v8;
}
