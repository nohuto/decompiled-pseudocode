/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1406621F8
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140661B50 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140661FB8 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B240 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiAddSecureEntry @ 0x14061F7C0 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14061F8F4 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiCheckSecuredVad @ 0x1406623F8 (MiCheckSecuredVad.c)
 *     MiIsRangeFullyCommitted @ 0x1406F02C0 (MiIsRangeFullyCommitted.c)
 */

unsigned __int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  int v6; // r14d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  volatile signed __int32 *v10; // rax
  ULONG_PTR v11; // rbx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v17; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a3;
  v6 = a2;
  memset(v18, 0, sizeof(v18));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v18, a4);
  v10 = MiObtainReferencedVadEx(v4, 0, &v17);
  v11 = (ULONG_PTR)v10;
  if ( v10 )
  {
    if ( v9 >> 12 <= (*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
      && MiVadSupportsPrivateCommit((__int64)v10)
      && ((*(_DWORD *)(v11 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v12, v6, v5, 1, 0) >= 0)
      && (*(_DWORD *)(v11 + 48) & 0x100000) == 0
      && (*(_DWORD *)(v11 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v13 = *(_DWORD *)(**(_QWORD **)(v11 + 72) + 56LL), (v13 & 0x80u) != 0) && (v13 & 0x20) == 0
        || !MiVadMapsLargeImage(v11) && (unsigned int)MiIsRangeFullyCommitted(v14, v4, v9) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v11, v4, v9) >= 0 )
        {
          v8 = (unsigned __int64)MiAddSecureEntry(v11, v4, v9, -1073741823, 0);
          if ( !v8 )
            MiUnsecureVirtualMemoryAgainstWrites(v11, v4, v9);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v11);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)v18, 0);
  if ( v8 )
    v8 ^= a1 ^ qword_140C4DE50;
  return v8;
}
