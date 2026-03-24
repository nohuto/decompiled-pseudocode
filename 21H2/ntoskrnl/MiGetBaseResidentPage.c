/*
 * XREFs of MiGetBaseResidentPage @ 0x1403F6734
 * Callers:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140302700 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG_PTR v7; // rbp
  int v8; // r14d
  ULONG_PTR v9; // rdi
  int i; // esi
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]

  v4 = a1;
  v16 = 0LL;
  v17 = 0LL;
  v5 = a1 + 0x58000000000LL;
  v6 = (unsigned __int128)(v5 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = v5 / 48;
  v8 = 0;
  v9 = v5 / 48;
  for ( i = 2; ; --i )
  {
    v11 = MiLargePageSizes[i] - 1;
    if ( (v11 & v9) != 0 )
    {
      v9 &= ~v11;
      v4 = 48 * v9 - 0x58000000000LL;
      if ( (unsigned int)++v8 > 3 )
        KeBugCheckEx(0x1Au, 0x9700uLL, v7, v9, 0LL);
      *((_QWORD *)&v16 + (unsigned int)(v8 - 1)) = v4;
      MiLockNestedPageAtDpcInline(48 * v9 - 0x58000000000LL, v6, a3, a4);
    }
    if ( (*(_BYTE *)(v4 + 39) & 3) != 0 )
      break;
    if ( !i )
      KeBugCheckEx(0x1Au, 0x9701uLL, v7, v9, 0LL);
  }
  v12 = 0;
  v13 = (__int64 *)&v16;
  do
  {
    v14 = *v13;
    if ( !*v13 )
      break;
    if ( v14 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v12;
    ++v13;
  }
  while ( v12 < 3 );
  return v4;
}
