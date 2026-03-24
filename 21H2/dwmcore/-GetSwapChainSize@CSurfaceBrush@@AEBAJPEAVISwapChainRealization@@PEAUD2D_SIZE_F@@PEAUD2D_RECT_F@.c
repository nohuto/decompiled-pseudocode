/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAVISwapChainRealization@@PEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801EE74C
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180086E90 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        struct ISwapChainRealization *a2,
        struct D2D_SIZE_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  __int64 v5; // rax
  unsigned int v7; // ebx
  char *v8; // rcx
  __int64 v10; // rcx
  char v11; // r15
  float bottom; // xmm0_4
  float right; // xmm1_4
  unsigned int v14; // xmm2_4
  unsigned int v15; // xmm3_4
  unsigned int v16; // xmm4_4
  unsigned int v17; // xmm5_4
  float top; // xmm7_4
  float left; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // xmm1_8
  _QWORD v24[8]; // [rsp+38h] [rbp-71h] BYREF
  int v25; // [rsp+78h] [rbp-31h]
  struct D2D_RECT_F v26; // [rsp+88h] [rbp-21h] BYREF
  __int64 v27; // [rsp+98h] [rbp-11h]
  __int128 v28; // [rsp+A0h] [rbp-9h] BYREF

  v5 = *((_QWORD *)a2 + 1);
  v28 = 0LL;
  v7 = 0;
  v25 = 0;
  v8 = (char *)a2 + *(int *)(v5 + 16) + 8;
  v26 = 0LL;
  v11 = (*(__int64 (__fastcall **)(char *, _QWORD *, __int128 *))(*(_QWORD *)v8 + 8LL))(v8, v24, &v28);
  if ( v11 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v24, (__int64)&v28, &v26.left);
    bottom = v26.bottom;
    right = v26.right;
    v14 = HIDWORD(v28);
    v15 = DWORD2(v28);
    v16 = DWORD1(v28);
    v17 = v28;
    top = v26.top;
    left = v26.left;
  }
  else
  {
    v17 = v28;
    v16 = DWORD1(v28);
    left = *(float *)&v28;
    v15 = DWORD2(v28);
    top = *((float *)&v28 + 1);
    v14 = HIDWORD(v28);
    right = *((float *)&v28 + 2);
    bottom = *((float *)&v28 + 3);
  }
  v20 = right - left;
  if ( v20 == 0.0 || (v21 = bottom - top, v21 == 0.0) )
  {
    v7 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180304F70, 2u, -2003304441, 0x375u, 0LL);
  }
  else
  {
    a3->width = v20;
    a3->height = v21;
    if ( a4 )
    {
      *(_QWORD *)&v26.left = __PAIR64__(v16, v17);
      *(_QWORD *)&v26.right = __PAIR64__(v14, v15);
      *a4 = v26;
    }
    if ( a5 )
    {
      if ( v11 )
      {
        *(_QWORD *)&v26.left = v24[0];
        *(_QWORD *)&v26.right = v24[2];
        v27 = v24[6];
      }
      else
      {
        v27 = 0LL;
        v26 = (struct D2D_RECT_F)_xmm;
      }
      v22 = v27;
      *(struct D2D_RECT_F *)&a5->m11 = v26;
      *(_QWORD *)&a5->m[2][0] = v22;
    }
  }
  return v7;
}
