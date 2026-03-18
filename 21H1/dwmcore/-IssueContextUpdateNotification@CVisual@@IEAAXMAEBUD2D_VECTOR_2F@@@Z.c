/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801B20E8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800BCDA8 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800EBD3B (sqrtf_0.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1801B1454 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1801B1950 (-GetNotifiedEffectiveLayoutSize@CVisual@@QEBA-AUVector2@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldOffset@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801B19A8 (-GetNotifiedWorldOffset@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1801B1A08 (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1801B1A60 (-GetNotifiedWorldUpVector@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801B2C70 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B2CB8 (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801B2D0C (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B2D54 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(FLOAT *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  unsigned int v3; // edi
  char v4; // r14
  const struct CMILMatrix *v5; // r12
  FLOAT v9; // xmm1_4
  FLOAT v10; // xmm0_4
  unsigned int v11; // xmm2_4
  unsigned __int64 v12; // rcx
  FLOAT v13; // xmm1_4
  struct D2D_POINT_2F v14; // xmm10_8
  float v15; // xmm9_4
  float v16; // xmm0_4
  float y; // xmm7_4
  float x; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  struct D2D_POINT_2F v22; // xmm8_8
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+28h] [rbp-99h]
  struct D2D_POINT_2F v26; // [rsp+58h] [rbp-69h] BYREF
  int v27; // [rsp+60h] [rbp-61h]
  _QWORD v28[2]; // [rsp+68h] [rbp-59h] BYREF
  struct D2D_POINT_2F v29; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+80h] [rbp-41h]
  unsigned __int64 v31; // [rsp+88h] [rbp-39h]
  unsigned int v32; // [rsp+90h] [rbp-31h]

  v3 = 0;
  v4 = 0;
  v5 = (const struct CMILMatrix *)(this + 90);
  CVisual::GetNotifiedWorldOffset((__int64)this, (__int64)&v29);
  v9 = this[102];
  v10 = this[103];
  v11 = *((_DWORD *)this + 104);
  v31 = __PAIR64__(LODWORD(v10), LODWORD(v9));
  v32 = v11;
  v12 = *(_QWORD *)&v29 - __PAIR64__(LODWORD(v10), LODWORD(v9));
  if ( v29 == __PAIR64__(LODWORD(v10), LODWORD(v9)) )
    v12 = v30 - (unsigned __int64)v11;
  if ( v12 )
  {
    v29.x = v9;
    v29.y = v10;
    v30 = v11;
    CVisual::SetNotifiedWorldOffset(this, &v29);
    v4 = 1;
  }
  CVisual::GetNotifiedEffectiveLayoutSize((__int64)this, &v29);
  v13 = this[34];
  v26.x = this[33];
  v26.y = v13;
  v14 = v26;
  if ( v29 != v26 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))CVisual::SetNotifiedEffectiveLayoutSize)(this, v26);
    v4 = 1;
  }
  v15 = CVisual::CalculateWorldRenderingScale((CVisual *)this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale((CVisual *)this) != v15 )
  {
    CVisual::SetNotifiedWorldRenderingScale((CVisual *)this, v15);
    v4 = 1;
  }
  v16 = this[91] * 0.0;
  v26.x = (float)((float)((float)(this[94] * 0.0) + (float)(*(float *)v5 * 0.0)) + this[102]) + a3->x;
  v26.y = (float)((float)((float)(this[95] * 0.0) + v16) + this[103]) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(&v26, v5, &v29)
    && (y = v29.y, x = v29.x, v19 = sqrtf_0((float)(y * y) + (float)(x * x)), v19 > 0.00000011920929) )
  {
    v30 = 0;
    v20 = x / v19;
    v21 = y / v19;
    v29.x = v20;
    v29.y = v21;
  }
  else
  {
    v21 = 0.0;
    v29 = 0LL;
    v20 = 0.0;
  }
  CVisual::GetNotifiedWorldUpVector((__int64)this, (__int64)&v26);
  v22 = v29;
  if ( v26.x != v20 || v26.y != v21 )
  {
    v30 = 0;
    CVisual::SetNotifiedWorldUpVector(this, &v29);
    v4 = 1;
  }
  if ( v4 )
  {
    v23 = *((_QWORD *)this + 6);
    if ( v23 )
      v3 = *(_DWORD *)(v23 + 68);
    v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
    v28[0] = v3;
    v28[1] = *((unsigned int *)this + 14);
    v27 = 0;
    v32 = v11;
    v26 = v22;
    LOWORD(v25) = 9;
    v29 = v14;
    CoreUICallSend(v24, v28, 2LL, 15LL, v25, &unk_1802CFB69, COERCE_UNSIGNED_INT64(v15), &v29);
  }
}
