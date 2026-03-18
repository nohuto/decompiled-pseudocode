/*
 * XREFs of ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18020C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800D6444 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionDistantLight::GetSceneLightRealization(
        CCompositionDistantLight *this,
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
  int v15; // ebx
  __int64 v16; // rdx
  struct D2D_VECTOR_3F v17; // [rsp+20h] [rbp-39h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-29h] BYREF
  int v19; // [rsp+70h] [rbp+17h]
  struct D2D_VECTOR_3F v20; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 255LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 256LL;
      goto LABEL_4;
    }
    v11 = *(_OWORD *)((char *)this + 184);
    v12 = *(_OWORD *)((char *)this + 200);
    v19 = *((_DWORD *)this + 62);
    v18[0] = v11;
    v13 = *(_OWORD *)((char *)this + 216);
    v18[1] = v12;
    v14 = *(_OWORD *)((char *)this + 232);
    v18[2] = v13;
    v18[3] = v14;
    CMILMatrix::Multiply((CMILMatrix *)v18, a2, v9, v10);
    LODWORD(v14) = *((_DWORD *)this + 71);
    v17.x = *((FLOAT *)this + 70);
    v17.z = *((FLOAT *)this + 72);
    LODWORD(v17.y) = v14;
    CMILMatrix::Transform3DVector((CMILMatrix *)v18, &v20, &v17);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            0LL,
            &v20);
    if ( v15 >= 0 )
      return 0LL;
    v16 = 261LL;
  }
  else
  {
    v15 = -2147467259;
    v16 = 265LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
