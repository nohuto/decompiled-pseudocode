/*
 * XREFs of sub_18001CFF0 @ 0x18001CFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BB10 @ 0x18001BB10 (sub_18001BB10.c)
 *     sub_18001BBB0 @ 0x18001BBB0 (sub_18001BBB0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18001CFF0(__int64 a1)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  int v4; // eax
  __int16 v5; // ax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(v22) = 1;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    o__aligned_free();
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    o__aligned_free();
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v2 = *(void **)(a1 + 504);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  *(_QWORD *)(a1 + 504) = 0LL;
  v4 = sub_18001BB10(a1, &v22);
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_8;
    LODWORD(v24) = 277;
    goto LABEL_23;
  }
  v4 = sub_18001BBB0(a1);
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_8;
    LODWORD(v24) = 281;
    goto LABEL_23;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 24LL))(*(_QWORD *)(a1 + 416));
  if ( v4 < 0 && (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v24) = 284;
LABEL_23:
    LODWORD(v23) = v4;
    v25 = (__int64)"SpatialAudioDevicePropertyReader::ReloadProperties";
    sub_180109778((int)&dword_18019C480, (__int64)&v25, (__int64)&v24, (__int64)&v23);
  }
LABEL_8:
  if ( (_DWORD)v22 )
  {
    *(_OWORD *)(a1 + 108) = xmmword_180160208;
    *(_QWORD *)(a1 + 124) = 262142LL;
    *(_OWORD *)(a1 + 134) = xmmword_180160220;
    *(_WORD *)(a1 + 132) = 0;
    *(_OWORD *)(a1 + 150) = xmmword_180160230;
    *(_OWORD *)(a1 + 166) = xmmword_180160240;
    *(_OWORD *)(a1 + 182) = xmmword_180160250;
    *(_OWORD *)(a1 + 198) = xmmword_180160260;
    *(_OWORD *)(a1 + 214) = xmmword_180160270;
    *(_OWORD *)(a1 + 230) = xmmword_180160280;
    *(_DWORD *)(a1 + 246) = 0;
    v5 = *(_WORD *)(a1 + 248);
    v6 = *(_OWORD *)(a1 + 120);
    *(_OWORD *)(a1 + 250) = *(_OWORD *)(a1 + 104);
    v7 = *(_OWORD *)(a1 + 136);
    *(_OWORD *)(a1 + 266) = v6;
    v8 = *(_OWORD *)(a1 + 152);
    *(_OWORD *)(a1 + 282) = v7;
    v9 = *(_OWORD *)(a1 + 168);
    *(_OWORD *)(a1 + 298) = v8;
    v10 = *(_OWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 314) = v9;
    v11 = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(a1 + 330) = v10;
    v12 = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(a1 + 346) = v11;
    v13 = *(_OWORD *)(a1 + 232);
    *(_OWORD *)(a1 + 362) = v12;
    *(_OWORD *)(a1 + 378) = v13;
    *(_WORD *)(a1 + 394) = v5;
  }
  v14 = -2147024882;
  v15 = o__aligned_malloc(272LL, 16LL);
  *(_QWORD *)(a1 + 48) = v15;
  if ( v15 )
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 400) + 24LL))(
            *(_QWORD *)(a1 + 400),
            a1 + 134,
            v15,
            272LL);
  v16 = o__aligned_malloc(272LL, 16LL);
  *(_QWORD *)(a1 + 56) = v16;
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 400) + 24LL))(
            *(_QWORD *)(a1 + 400),
            a1 + 280,
            v16,
            272LL);
    v14 = v17;
    if ( v17 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v22) = v17;
        LODWORD(v23) = 425;
        v24 = (__int64)"SpatialAudioDevicePropertyReader::AllocatePositionTable";
        sub_180109778((int)&dword_18019C480, (__int64)&v24, (__int64)&v23, (__int64)&v22);
      }
    }
    else
    {
      v18 = (__m128)*(unsigned int *)(a1 + 284);
      v19 = (__m128)*(unsigned int *)(a1 + 288);
      v18.m128_f32[0] = v18.m128_f32[0] * 0.5;
      v19.m128_f32[0] = v19.m128_f32[0] * 0.5;
      v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v19), (__m128)0LL);
      *(__m128 *)*(_QWORD *)(a1 + 56) = _mm_add_ps(*(__m128 *)*(_QWORD *)(a1 + 56), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 16LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 16LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 32LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 32LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 48LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 48LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 64LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 64LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 80LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 80LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 96LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 96LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 112LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 112LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 128LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 128LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 144LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 144LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 160LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 160LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 176LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 176LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 192LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 192LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 208LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 208LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 224LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 224LL));
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 240LL) = _mm_add_ps(*(__m128 *)(*(_QWORD *)(a1 + 56) + 240LL), v20);
      *(__m128 *)(*(_QWORD *)(a1 + 56) + 256LL) = _mm_add_ps(v20, *(__m128 *)(*(_QWORD *)(a1 + 56) + 256LL));
    }
  }
  if ( v14 < 0 && (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v22) = v14;
    LODWORD(v23) = 302;
    v24 = (__int64)"SpatialAudioDevicePropertyReader::ReloadProperties";
    sub_180109778((int)&dword_18019C480, (__int64)&v24, (__int64)&v23, (__int64)&v22);
  }
  return (unsigned int)v14;
}
