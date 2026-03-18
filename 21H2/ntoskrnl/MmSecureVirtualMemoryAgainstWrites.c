/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14032E910 (MiVadSupportsPrivateCommit.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406F608C (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiCheckSecuredVad @ 0x1407A4C90 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiIsRangeFullyCommitted @ 0x1407BBF50 (MiIsRangeFullyCommitted.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  int v6; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v16; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a3;
  v6 = a2;
  memset(v17, 0, sizeof(v17));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v17, a4);
  v10 = MiObtainReferencedVadEx(v4, 0, &v16);
  v11 = v10;
  if ( v10 )
  {
    if ( v9 >> 12 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
      && MiVadSupportsPrivateCommit(v10)
      && ((*(_DWORD *)(v11 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v11, v6, v5, 1, 0) >= 0)
      && (*(_DWORD *)(v11 + 48) & 0x200000) == 0
      && (*(_DWORD *)(v11 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v12 = *(_DWORD *)(**(_QWORD **)(v11 + 72) + 56LL), (v12 & 0x80u) != 0) && (v12 & 0x20) == 0
        || !MiVadMapsLargeImage(v11) && (unsigned int)MiIsRangeFullyCommitted(v13, v4, v9) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v11, v4, v9) >= 0 )
        {
          v8 = MiAddSecureEntry(v11, v4, v9, -1073741823, 0);
          if ( !v8 )
            MiUnsecureVirtualMemoryAgainstWrites(v11, v4, v9);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v11);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  if ( v8 )
    return a1 ^ qword_140C50680 ^ v8;
  return v8;
}
