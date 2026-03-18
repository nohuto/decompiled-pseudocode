/*
 * XREFs of FindAdjacentMonitor @ 0x1C00C7598
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x1C00C749C (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C002F69C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 */

__int64 __fastcall FindAdjacentMonitor(int *a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // r15d
  __int64 v6; // rsi
  int v7; // r14d
  int v8; // ebp
  __m128i *v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // xmm0_8
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax
  int v19; // ecx
  __m128i v20; // [rsp+20h] [rbp-38h]
  struct tagRECT v21; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 0;
  v6 = *(_QWORD *)(gpDispInfo + 104);
  if ( v6 )
  {
    v7 = *a1;
    v8 = a1[1];
    do
    {
      v9 = (__m128i *)ExpandedMonitorRect(&v21, (struct tagMONITOR *)v6, a2);
      v10 = 0;
      v20 = *v9;
      v11 = v9->m128i_i64[0];
      v12 = _mm_srli_si128(*v9, 8).m128i_u64[0];
      if ( v7 < (int)v12 && (v13 = a1[2], v13 > v20.m128i_i32[0]) && (v8 == HIDWORD(v12) || a1[3] == v20.m128i_i32[1]) )
      {
        v19 = v12;
        if ( v13 < (int)v12 )
          v19 = a1[2];
        if ( v7 > v20.m128i_i32[0] )
          LODWORD(v11) = v7;
        v10 = v19 - v11;
      }
      else if ( v8 < SHIDWORD(v12) )
      {
        v14 = a1[3];
        if ( v14 > v20.m128i_i32[1] && (v7 == (_DWORD)v12 || a1[2] == v20.m128i_i32[0]) )
        {
          v15 = a1[3];
          if ( v14 >= SHIDWORD(v12) )
            v15 = HIDWORD(v12);
          v16 = v8;
          if ( v8 <= v20.m128i_i32[1] )
            v16 = v20.m128i_i32[1];
          v10 = v15 - v16;
        }
      }
      v17 = v6;
      v6 = *(_QWORD *)(v6 + 56);
      if ( v10 <= v3 )
      {
        v17 = v2;
        v10 = v3;
      }
      v2 = v17;
      v3 = v10;
    }
    while ( v6 );
  }
  return v2;
}
