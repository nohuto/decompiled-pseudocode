/*
 * XREFs of ?GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180207CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetTextureBounds(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rbp
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    v5 = *(_DWORD *)(a1 + 160);
    if ( (v5 & 1) != 0 )
    {
      v6 = 0LL;
      v11 = 0uLL;
      if ( *(_DWORD *)(a1 + 104) )
      {
        do
        {
          v7 = *(__int64 **)(*(_QWORD *)(a1 + 112) + 8 * v6);
          if ( v7 )
          {
            v8 = *v7;
            v12 = 0LL;
            (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 208))(v7, &v12);
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v11, (float *)&v12);
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(a1 + 104) );
        v5 = *(_DWORD *)(a1 + 160);
      }
      v9 = v11;
      *(_DWORD *)(a1 + 160) = v5 & 0xFFFFFFFE;
      *(_OWORD *)(a1 + 144) = v9;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 144);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  *(_DWORD *)(a1 + 32) ^= result;
  return result;
}
