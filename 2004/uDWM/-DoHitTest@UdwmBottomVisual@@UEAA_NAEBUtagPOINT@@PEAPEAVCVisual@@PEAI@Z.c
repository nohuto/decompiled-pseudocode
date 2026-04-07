/*
 * XREFs of ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18003C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180002BD8 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005B54 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800BF6C0 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall UdwmBottomVisual::DoHitTest(
        UdwmBottomVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  __int64 v4; // rdi
  char v5; // r12
  __int64 v8; // r14
  UdwmBottomVisual *v9; // rax
  unsigned int v10; // ecx
  unsigned int *v11; // rdx
  bool result; // al
  float *v13; // rdx
  LONG y; // ecx
  __int64 v15; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-51h] BYREF
  float v17; // [rsp+40h] [rbp-49h] BYREF
  float v18; // [rsp+44h] [rbp-45h]
  UdwmBottomVisual *v19; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual **v20; // [rsp+50h] [rbp-39h]
  unsigned int *v21; // [rsp+58h] [rbp-31h]
  _BYTE v22[64]; // [rsp+60h] [rbp-29h] BYREF

  v19 = 0LL;
  LODWORD(v4) = -1;
  v16 = 0;
  v5 = 0;
  v21 = a4;
  v20 = a3;
  while ( 1 )
  {
    if ( v5 )
    {
      v4 = (unsigned int)(v4 - 1);
    }
    else
    {
      v5 = 1;
      v4 = (unsigned int)(*((_DWORD *)this + 18) - 1);
    }
    if ( (_DWORD)v4 == -1 )
      break;
    v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
    v15 = (__int64)*a2;
    LODWORD(v15) = v15 - *(_DWORD *)(v8 + 112);
    HIDWORD(v15) -= *(_DWORD *)(v8 + 116);
    if ( (*(_BYTE *)(v8 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v8, (struct D2DMatrix *)v22);
      if ( D2DMatrixInverse((struct D2DMatrix *)v22, v13, (const struct D2DMatrix *)v22) )
      {
        v17 = (float)(int)v15;
        v18 = (float)SHIDWORD(v15);
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v17,
          (const struct D2DVector2 *)&v17,
          (const struct D2DMatrix *)v22);
        HIDWORD(v15) = (int)v18;
        LODWORD(v15) = (int)v17;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, UdwmBottomVisual **, unsigned int *))(*(_QWORD *)v8 + 136LL))(
             v8,
             &v15,
             &v19,
             &v16) )
      {
        break;
      }
    }
  }
  v9 = v19;
  if ( v19 || a2->x < 0 || a2->x >= *((_DWORD *)this + 30) || (y = a2->y, y < 0) || y >= *((_DWORD *)this + 31) )
  {
    v10 = v16;
  }
  else
  {
    v10 = *((_DWORD *)this + 48);
    v9 = this;
  }
  v11 = v21;
  *v20 = v9;
  result = v9 != 0LL;
  *v11 = v10;
  return result;
}
