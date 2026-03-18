/*
 * XREFs of ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18020F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800D6444 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::GetSceneLightRealization(
        CCompositionSpotLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // xmm1_4
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float v17; // xmm6_4
  int v18; // ebx
  __int64 v19; // rdx
  struct D2D_VECTOR_4F v20; // [rsp+28h] [rbp-79h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-69h] BYREF
  struct D2D_VECTOR_4F v22; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v23[4]; // [rsp+58h] [rbp-49h] BYREF
  int v24; // [rsp+98h] [rbp-9h]
  float v25[4]; // [rsp+A8h] [rbp+7h] BYREF
  struct D2D_VECTOR_3F v26; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 312);
    if ( v6 < 0 )
    {
      v7 = 701LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 702LL;
      goto LABEL_4;
    }
    v9 = *((_QWORD *)this + 22);
    v10 = *((_DWORD *)this + 96);
    v21[0] = *((_DWORD *)this + 95);
    v21[1] = v10;
    v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 104LL))(v9, v21);
    if ( v6 < 0 )
    {
      v7 = 705LL;
      goto LABEL_4;
    }
    v13 = *(_OWORD *)((char *)this + 184);
    v14 = *(_OWORD *)((char *)this + 200);
    v24 = *((_DWORD *)this + 62);
    v23[0] = v13;
    v15 = *(_OWORD *)((char *)this + 216);
    v23[1] = v14;
    v16 = *(_OWORD *)((char *)this + 232);
    v23[2] = v15;
    v23[3] = v16;
    CMILMatrix::Multiply((CMILMatrix *)v23, a2, v11, v12);
    LODWORD(v16) = *((_DWORD *)this + 90);
    v20.x = *((FLOAT *)this + 89);
    v20.z = *((FLOAT *)this + 91);
    LODWORD(v20.y) = v16;
    v20.w = 1.0;
    v22 = v20;
    CMILMatrix::Transform4DVector((CMILMatrix *)v23, &v20, &v22);
    v17 = (float)(1.0 / v20.w) * v20.z;
    v25[0] = (float)(1.0 / v20.w) * v20.x;
    v20.x = *((FLOAT *)this + 92);
    LODWORD(v15) = *((_DWORD *)this + 94);
    v25[1] = (float)(1.0 / v20.w) * v20.y;
    LODWORD(v16) = *((_DWORD *)this + 93);
    LODWORD(v20.z) = v15;
    v25[2] = v17;
    LODWORD(v20.y) = v16;
    CMILMatrix::Transform3DVector((CMILMatrix *)v23, &v26, (const struct D2D_VECTOR_3F *)&v20);
    v18 = (*(__int64 (__fastcall **)(_QWORD, float *, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            v25,
            &v26);
    if ( v18 >= 0 )
      return 0LL;
    v19 = 713LL;
  }
  else
  {
    v18 = -2147467259;
    v19 = 717LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
    (const char *)(unsigned int)v18);
  return (unsigned int)v18;
}
