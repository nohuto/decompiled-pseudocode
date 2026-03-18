/*
 * XREFs of ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801BA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18000D418 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionPointLight::GetSceneLightRealization(
        CCompositionPointLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  struct D2D_VECTOR_4F v16; // [rsp+28h] [rbp-59h] BYREF
  struct D2D_VECTOR_4F v17; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v18[4]; // [rsp+48h] [rbp-39h] BYREF
  int v19; // [rsp+88h] [rbp+7h]
  float v20[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 21);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 256);
    if ( v6 < 0 )
    {
      v7 = 377LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 88LL))(*((_QWORD *)this + 21));
    if ( v6 < 0 )
    {
      v7 = 378LL;
      goto LABEL_4;
    }
    v9 = *((_OWORD *)this + 11);
    v10 = *((_OWORD *)this + 12);
    v19 = *((_DWORD *)this + 60);
    v18[0] = v9;
    v11 = *((_OWORD *)this + 13);
    v18[1] = v10;
    v12 = *((_OWORD *)this + 14);
    v18[2] = v11;
    v18[3] = v12;
    CMILMatrix::Multiply((CMILMatrix *)v18, a2);
    LODWORD(v12) = *((_DWORD *)this + 72);
    v16.x = *((FLOAT *)this + 71);
    v16.z = *((FLOAT *)this + 73);
    LODWORD(v16.y) = v12;
    v16.w = 1.0;
    v17 = v16;
    CMILMatrix::Transform4DVector((CMILMatrix *)v18, &v16, &v17);
    v13 = *((_QWORD *)this + 21);
    v20[0] = (float)(1.0 / v16.w) * v16.x;
    v20[1] = (float)(1.0 / v16.w) * v16.y;
    v20[2] = (float)(1.0 / v16.w) * v16.z;
    v14 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v13 + 96LL))(v13, v20, 0LL);
    if ( v14 >= 0 )
      return 0LL;
    v15 = 384LL;
  }
  else
  {
    v14 = -2147467259;
    v15 = 388LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
