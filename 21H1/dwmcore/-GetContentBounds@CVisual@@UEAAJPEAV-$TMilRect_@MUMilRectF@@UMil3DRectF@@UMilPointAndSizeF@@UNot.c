/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095920
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(char *a1, _QWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128 v7; // xmm0
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  __int64 (__fastcall ***v12)(_QWORD, char *, _QWORD *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  int *v16; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF

  a2[1] = 0LL;
  *a2 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 31);
  if ( v5 )
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, char *, _QWORD *))(v5 + 56 + *(int *)(*(_QWORD *)(v5 + 56) + 8LL));
    v13 = (**v12)(v12, a1 + 132, a2);
    v4 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE8Fu, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)a1 + 288LL))(a1) )
  {
    v6 = *((_QWORD *)a1 + 27);
    if ( (*(_DWORD *)(v6 + 4) & 0x100000) != 0 )
    {
      v15 = *(_DWORD *)(v6 + 12);
      v16 = (int *)(v6 + 12);
      if ( (v15 & 0x7F000000) != 0xC000000 )
      {
        do
        {
          v16 = (int *)((char *)v16 + (v15 & 0xFFFFFF) + 4);
          v15 = *v16;
        }
        while ( (*v16 & 0x7F000000) != 0xC000000 );
      }
      v7 = *(__m128 *)(v16 + 1);
      LODWORD(v8) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
      LODWORD(v9) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
      LODWORD(v10) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    }
    else
    {
      v7.m128_i32[0] = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v8 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v9 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v10 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    *(float *)&v17[3] = v10;
    *(float *)&v17[2] = v9;
    *(float *)&v17[1] = v8;
    v17[0] = v7.m128_i32[0];
    if ( v9 > v7.m128_f32[0] && v10 > v8 )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, v17);
  }
  return v4;
}
