/*
 * XREFs of MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8
 * Callers:
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 */

char __fastcall MiInitializeAllResidentPageBasePfns(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7)
{
  __int64 v7; // rcx
  unsigned __int64 v9; // xmm1_8
  __int64 v10; // r11
  __int128 v11; // xmm6
  unsigned __int64 v12; // r8
  _OWORD *updated; // rax
  char v14; // r10
  char v15; // r9
  unsigned __int64 v16; // rcx
  __m128i v17; // xmm1
  __int64 v18; // r9
  _OWORD *v19; // rdx
  __m128i v20; // xmm0
  __int128 v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF

  v7 = *a1;
  v23 = xmmword_140C4E610;
  v9 = _mm_srli_si128((__m128i)xmmword_140C4E610, 8).m128i_u64[0];
  v10 = MiLargePageSizes[a4];
  v11 = xmmword_140C4E5F0;
  *((_QWORD *)&v23 + 1) = (v9 ^ (v7 << 39)) & 0x1FF8000000000LL ^ v9;
  BYTE7(v23) = (BYTE7(xmmword_140C4E610) ^ ~(_BYTE)a4) & 3 ^ BYTE7(xmmword_140C4E610);
  v22 = xmmword_140C4E600;
  v12 = 48 * a2 - 0x58000000000LL;
  if ( a7 )
    *((_QWORD *)&v22 + 1) |= 0x8000000000000000uLL;
  LOBYTE(updated) = a5 << 6;
  v14 = (a5 << 6) | BYTE2(v23) & 0x3F;
  v15 = (a5 << 6) | BYTE2(v23) & 0x38 | 5;
  if ( !a6 )
  {
    updated = (_OWORD *)MiUpdatePageFileHighInPte(v22, 4294967293LL);
    *(_QWORD *)&v22 = updated;
  }
  v16 = v12 + 48 * a3;
  BYTE2(v23) = v15 ^ (v15 ^ v14) & 7;
  if ( v12 < v16 )
  {
    v17 = _mm_loadu_si128((const __m128i *)&v23);
    v18 = 48 * v10;
    v19 = (_OWORD *)(v12 + 48);
    do
    {
      for ( updated = (_OWORD *)v12; updated != v19; updated += 3 )
      {
        v20 = _mm_loadu_si128((const __m128i *)&v22);
        *updated = v11;
        updated[1] = v20;
        updated[2] = v17;
      }
      v12 += v18;
      v19 = (_OWORD *)((char *)v19 + v18);
    }
    while ( v12 < v16 );
  }
  return (char)updated;
}
