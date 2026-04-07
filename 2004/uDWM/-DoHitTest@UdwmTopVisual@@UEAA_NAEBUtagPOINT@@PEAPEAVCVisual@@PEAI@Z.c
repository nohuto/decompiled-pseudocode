/*
 * XREFs of ?DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18003C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180002BD8 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005B54 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800BF6C0 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall UdwmTopVisual::DoHitTest(
        UdwmTopVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  struct CVisual *v5; // rax
  unsigned int v6; // ecx
  __int64 v10; // r10
  float *v12; // rdx
  LONG y; // edx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-31h] BYREF
  float v16; // [rsp+40h] [rbp-29h] BYREF
  float v17; // [rsp+44h] [rbp-25h]
  struct CVisual *v18; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-19h] BYREF

  v5 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v15 = 0;
  v10 = *((_QWORD *)this + 30);
  if ( v10 )
  {
    v14 = (__int64)*a2;
    LODWORD(v14) = v14 - *(_DWORD *)(v10 + 112);
    HIDWORD(v14) -= *(_DWORD *)(v10 + 116);
    if ( (*(_BYTE *)(v10 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v10, (struct D2DMatrix *)v19);
      if ( !D2DMatrixInverse((struct D2DMatrix *)v19, v12, (const struct D2DMatrix *)v19) )
      {
LABEL_4:
        v5 = v18;
        v6 = v15;
        if ( v18 )
          goto LABEL_5;
        goto LABEL_8;
      }
      v16 = (float)(int)v14;
      v17 = (float)SHIDWORD(v14);
      D3DXVec2TransformCoord((struct D2DVector2 *)&v16, (const struct D2DVector2 *)&v16, (const struct D2DMatrix *)v19);
      v10 = *((_QWORD *)this + 30);
      HIDWORD(v14) = (int)v17;
      LODWORD(v14) = (int)v16;
    }
    (*(void (__fastcall **)(__int64, __int64 *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 136LL))(
      v10,
      &v14,
      &v18,
      &v15);
    goto LABEL_4;
  }
LABEL_8:
  if ( a2->x >= 0 && a2->x < *((_DWORD *)this + 30) )
  {
    y = a2->y;
    if ( y >= 0 && y < *((_DWORD *)this + 31) )
    {
      v6 = *((_DWORD *)this + 48);
      v5 = this;
    }
  }
LABEL_5:
  *a3 = v5;
  *a4 = v6;
  return v5 != 0LL;
}
