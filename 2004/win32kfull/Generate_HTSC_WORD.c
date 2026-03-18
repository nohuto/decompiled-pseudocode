/*
 * XREFs of Generate_HTSC_WORD @ 0x1C011FAF8
 * Callers:
 *     CachedHalftonePattern @ 0x1C00D5BBC (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1C0002574 (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C011FD78 (ExpandHTPatX.c)
 *     RotateHTPatXY @ 0x1C014EA38 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C0150494 (RotateHTPat45.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __m128i v4; // xmm1
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  unsigned __int16 epi16; // di
  int v8; // r8d
  ULONG v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  void *v14; // r13
  __int64 v15; // r8
  unsigned int v17; // r14d
  int v18; // esi
  int v19; // edi
  __int64 v20; // [rsp+90h] [rbp+8h]

  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(qword_1C033AF58);
    v2 = 0;
    v3 = ppwHTPat[a1->m128i_u8[1]];
    a1[1].m128i_i64[0] = v3;
    if ( v3 )
    {
LABEL_14:
      EngReleaseSemaphore(qword_1C033AF58);
      LOBYTE(v2) = a1[1].m128i_i64[0] != 0;
      return v2;
    }
    v4 = *a1;
    v5 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v6 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(*a1, 4);
    v8 = v5 + 7;
    if ( (unsigned int)v5 <= 9 )
      v8 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v20 = 16 * (v5 >> 1);
    v9 = (v8 << 24) + 808539208;
    v10 = *(__int64 *)((char *)&off_1C02E0028 + v20);
    v11 = v10;
    v12 = 6 * epi16 * (unsigned __int64)WORD1(v6);
    if ( v12 <= 0xFFFFFFFF && HIDWORD(v6) >= (unsigned int)v12 )
    {
      v13 = EngAllocMem(1u, HIDWORD(v6), v9);
      v14 = v13;
      if ( v13 )
      {
        if ( v4.m128i_i8[1] <= 0xFu )
        {
          v17 = v4.m128i_u16[2];
          v18 = epi16;
          v19 = (_DWORD)v13 + 2;
          RotateHTPat45(
            v11,
            (_DWORD)v13 + 2,
            v4.m128i_u16[2],
            v4.m128i_u16[5],
            *(unsigned __int16 *)&DefStdHTPat[v20 + 2],
            v18);
          RotateHTPatXY(v19, (_DWORD)v14 + 4, v17, v4.m128i_u16[5], v18, (v4.m128i_i8[1] & 1) != 0 ? v17 >> 1 : 0, 0);
          RotateHTPatXY(
            v19,
            (_DWORD)v14,
            v17,
            v4.m128i_u16[5],
            v18,
            (v4.m128i_i8[1] & 1) != 0 ? v17 >> 2 : 0,
            (v4.m128i_i8[1] & 1) != 0 ? v4.m128i_u16[5] >> 2 : 0);
          ExpandHTPatX(v14);
        }
        else
        {
          if ( v4.m128i_i8[1] == 16 )
          {
            v15 = v10;
          }
          else
          {
            v15 = v10 + 512;
            v11 = v10 + 256;
          }
          if ( !(unsigned int)GenerateWORDPat(v11, v10, v15, v13, v4.m128i_u16[2], epi16, v4.m128i_u16[5]) )
          {
            EngFreeMem(v14);
            v14 = 0LL;
          }
        }
      }
      a1[1].m128i_i64[0] = (__int64)v14;
      ppwHTPat[v4.m128i_u8[1]] = (__int64)v14;
      goto LABEL_14;
    }
  }
  return 0LL;
}
