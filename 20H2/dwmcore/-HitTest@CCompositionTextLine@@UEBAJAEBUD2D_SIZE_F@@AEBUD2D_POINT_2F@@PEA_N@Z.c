/*
 * XREFs of ?HitTest@CCompositionTextLine@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801BC4C4
 * Callers:
 *     ?HitTest@CCompositionTextLine@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800EF310 (-HitTest@CCompositionTextLine@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800CF920 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionTextLine::HitTest(
        CCompositionTextLine *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v6; // rax
  char *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D_RECT_F v11; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_RECT_F v12; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_QWORD *)this - 7) )
  {
    v6 = *((_QWORD *)this - 10);
    v12 = 0LL;
    v7 = (char *)this + *(int *)(v6 + 8) - 80;
    v8 = (**(__int64 (__fastcall ***)(char *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))v7)(v7, a2, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    v11 = v12;
    *a4 = Contains(&v11, a3);
  }
  else
  {
    *a4 = 0;
  }
  return 0LL;
}
