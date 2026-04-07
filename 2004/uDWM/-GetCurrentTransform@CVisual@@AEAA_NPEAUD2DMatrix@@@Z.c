/*
 * XREFs of ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005B54
 * Callers:
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180002A94 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18000DF30 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18003AA20 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18003C4C0 (-DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18003C6E0 (-DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180095AAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180023210 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800BFE10 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

char __fastcall CVisual::GetCurrentTransform(CVisual *this, struct D2DMatrix *a2)
{
  char v4; // al
  char v5; // r14
  char v6; // r15
  char v7; // r12
  float v8; // xmm0_4
  bool v9; // r9
  double v11; // xmm3_8
  double *v12; // rsi
  double v13; // xmm1_8
  float v14; // xmm0_4
  float v15; // xmm0_4
  char v16; // r10
  double v17; // xmm0_8
  double v18; // xmm1_8
  double v19; // xmm0_8
  double v20; // xmm1_8
  float v21; // [rsp+20h] [rbp-40h] BYREF
  int v22; // [rsp+24h] [rbp-3Ch]
  int v23; // [rsp+28h] [rbp-38h]
  int v24; // [rsp+2Ch] [rbp-34h]
  int v25; // [rsp+30h] [rbp-30h]
  float v26; // [rsp+34h] [rbp-2Ch]
  int v27; // [rsp+38h] [rbp-28h]
  int v28; // [rsp+3Ch] [rbp-24h]
  int v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+44h] [rbp-1Ch]
  int v31; // [rsp+48h] [rbp-18h]
  int v32; // [rsp+4Ch] [rbp-14h]
  float v33; // [rsp+50h] [rbp-10h]
  float v34; // [rsp+54h] [rbp-Ch]
  int v35; // [rsp+58h] [rbp-8h]
  int v36; // [rsp+5Ch] [rbp-4h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
  {
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 168LL))(this);
    v4 = 1;
  }
  else
  {
    *(_QWORD *)((char *)a2 + 52) = 0LL;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_DWORD *)a2 + 10) = 1065353216;
    *((_DWORD *)a2 + 5) = 1065353216;
    *(_DWORD *)a2 = 1065353216;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 21) - 1.0) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 22) - 1.0) & _xmm) > 0.0000011920929 )
  {
    v5 = 1;
    v4 = 1;
  }
  v7 = v4;
  LODWORD(v8) = COERCE_UNSIGNED_INT((float)*((double *)this + 20) - 0.0) & _xmm;
  if ( v8 > 0.0000011920929 )
    v7 = 1;
  v9 = v8 > 0.0000011920929;
  if ( v5 || v8 > 0.0000011920929 )
  {
    v11 = *((double *)this + 18);
    v12 = (double *)((char *)this + 152);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v11 - 0.0) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v12 - 0.0) & _xmm) > 0.0000011920929 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)v12 ^ _xmm;
      v32 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      v14 = COERCE_DOUBLE(*(_QWORD *)&v11 ^ _xmm);
      v36 = 1065353216;
      v31 = 1065353216;
      v26 = 1.0;
      v21 = 1.0;
      v35 = 1065353216;
      v33 = v14;
      v15 = v13;
      v34 = v15;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v21);
      v6 = v16;
    }
    if ( v5 )
    {
      v17 = *((double *)this + 21);
      v18 = *((double *)this + 22);
      v35 = 0;
      v34 = 0.0;
      v33 = 0.0;
      v32 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      v31 = 1065353216;
      v36 = 1065353216;
      v21 = v17;
      v26 = v18;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v21);
    }
    if ( v9 )
    {
      D2DMatrixRotationZ((struct D2DMatrix *)&v21, *((double *)this + 20) * 0.01745329238474369);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v21);
    }
    if ( v6 )
    {
      v19 = *((double *)this + 18);
      v20 = *v12;
      v32 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      v36 = 1065353216;
      v31 = 1065353216;
      v26 = 1.0;
      v21 = 1.0;
      v35 = 1065353216;
      v33 = v19;
      v34 = v20;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v21);
    }
  }
  return v7;
}
