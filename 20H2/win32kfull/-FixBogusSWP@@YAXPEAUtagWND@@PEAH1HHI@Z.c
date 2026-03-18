/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C004B0D8 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CFCCC (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, __int64 a4, int a5, char a6)
{
  int v9; // esi
  struct tagMONITOR *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rdx
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i v19; // xmm0
  struct tagWND *v20; // rax
  __m128i *MonitorWorkRect; // rax
  int v22; // ecx
  __m128i v23; // xmm0
  unsigned __int64 v24; // xmm0_8
  int v25; // edx
  int v26; // r8d
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rcx
  __int128 v30; // [rsp+20h] [rbp-20h] BYREF
  __m128i v31; // [rsp+30h] [rbp-10h] BYREF

  v9 = a4;
  v10 = _MonitorFromWindowInternal(a1[15], 2LL, 0LL, a4);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11, v13, v14) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v15 = a1[5];
      v9 = *((_DWORD *)v15 + 24) - *((_DWORD *)v15 + 22);
      v16 = *((_DWORD *)v15 + 25) - *((_DWORD *)v15 + 23);
    }
    else
    {
      v16 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, v9, v16) )
    {
      v30 = 0LL;
      v19 = *(__m128i *)GetMonitorRect(&v31, (__int64)v10, v17, v18);
      v20 = a1[15];
      v31 = v19;
      IntersectRect(&v30, v31.m128i_i32, (int *)(*((_QWORD *)v20 + 5) + 88LL));
      MonitorWorkRect = (__m128i *)GetMonitorWorkRect(&v31, (__int64)v10);
      v22 = DWORD1(v30);
      v31 = *MonitorWorkRect;
      v23 = v31;
      *a2 = v30 + (DWORD2(v30) - (int)v30 - v9) / 2;
      v24 = _mm_srli_si128(v23, 8).m128i_u64[0];
      v25 = (HIDWORD(v30) - v22 - v16) / 2 + v22;
      *a3 = v25;
      v26 = *a2;
      if ( *a2 + v9 > (int)v24 )
      {
        v26 = v24 - v9;
        *a2 = v24 - v9;
        v25 = *a3;
      }
      if ( v25 + v16 > SHIDWORD(v24) )
      {
        v25 = HIDWORD(v24) - v16;
        *a3 = HIDWORD(v24) - v16;
        v26 = *a2;
      }
      v27 = v31.m128i_i64[0];
      if ( v26 < v31.m128i_i32[0] )
      {
        *a2 = v31.m128i_i32[0];
        v25 = *a3;
      }
      v28 = *a3;
      v29 = HIDWORD(v27);
      if ( v25 < (int)v29 )
        v28 = v29;
      *a3 = v28;
    }
  }
}
