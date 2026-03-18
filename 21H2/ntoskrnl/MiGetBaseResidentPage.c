/*
 * XREFs of MiGetBaseResidentPage @ 0x140235E40
 * Callers:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140235D34 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  int v3; // r14d
  ULONG_PTR v4; // rdi
  int i; // ebp
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  v1 = a1;
  v11 = 0LL;
  v12 = 0LL;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = 0;
  v4 = v2;
  for ( i = 2; ; --i )
  {
    v6 = MiLargePageSizes[i] - 1;
    if ( (v6 & v4) != 0 )
    {
      v4 &= ~v6;
      v1 = 48 * v4 - 0x220000000000LL;
      if ( (unsigned int)++v3 > 3 )
        KeBugCheckEx(0x1Au, 0x9700uLL, v2, v4, 0LL);
      *((_QWORD *)&v11 + (unsigned int)(v3 - 1)) = v1;
      MiLockNestedPageAtDpcInline(48 * v4 - 0x220000000000LL);
    }
    if ( (*(_BYTE *)(v1 + 36) & 3) != 0 )
      break;
    if ( !i )
      KeBugCheckEx(0x1Au, 0x9701uLL, v2, v4, 0LL);
  }
  v7 = 0;
  v8 = (__int64 *)&v11;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( v9 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v7;
    ++v8;
  }
  while ( v7 < 3 );
  return v1;
}
