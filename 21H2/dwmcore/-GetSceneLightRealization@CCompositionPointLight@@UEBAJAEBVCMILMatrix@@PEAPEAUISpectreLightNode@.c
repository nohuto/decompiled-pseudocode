/*
 * XREFs of ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18020DC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CCompositionPointLight::GetSceneLightRealization(
        CCompositionPointLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  struct D2D_VECTOR_4F v18; // [rsp+28h] [rbp-59h] BYREF
  struct D2D_VECTOR_4F v19; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v20[4]; // [rsp+48h] [rbp-39h] BYREF
  int v21; // [rsp+88h] [rbp+7h]
  float v22[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 361LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 362LL;
      goto LABEL_4;
    }
    v11 = *(_OWORD *)((char *)this + 184);
    v12 = *(_OWORD *)((char *)this + 200);
    v21 = *((_DWORD *)this + 62);
    v20[0] = v11;
    v13 = *(_OWORD *)((char *)this + 216);
    v20[1] = v12;
    v14 = *(_OWORD *)((char *)this + 232);
    v20[2] = v13;
    v20[3] = v14;
    CMILMatrix::Multiply((CMILMatrix *)v20, a2, v9, v10);
    LODWORD(v14) = *((_DWORD *)this + 74);
    v18.x = *((FLOAT *)this + 73);
    v18.z = *((FLOAT *)this + 75);
    LODWORD(v18.y) = v14;
    v18.w = 1.0;
    v19 = v18;
    CMILMatrix::Transform4DVector((CMILMatrix *)v20, &v18, &v19);
    v15 = *((_QWORD *)this + 22);
    v22[0] = (float)(1.0 / v18.w) * v18.x;
    v22[1] = (float)(1.0 / v18.w) * v18.y;
    v22[2] = (float)(1.0 / v18.w) * v18.z;
    v16 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, v22, 0LL);
    if ( v16 >= 0 )
      return 0LL;
    v17 = 368LL;
  }
  else
  {
    v16 = -2147467259;
    v17 = 372LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
