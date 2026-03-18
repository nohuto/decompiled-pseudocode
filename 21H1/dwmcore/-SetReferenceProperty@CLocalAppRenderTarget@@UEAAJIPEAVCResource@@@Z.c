/*
 * XREFs of ?SetReferenceProperty@CLocalAppRenderTarget@@UEAAJIPEAVCResource@@@Z @ 0x18018F020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z @ 0x1800D7B28 (-SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::SetReferenceProperty(
        CLocalAppRenderTarget *this,
        int a2,
        struct CResource *a3)
{
  __int64 v5; // rdx
  struct CVisualTree *v6; // rdx
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = 53LL;
LABEL_6:
    v7 = -2147024809;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\localapprendertarget.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v6 = 0LL;
  if ( a3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 51LL) )
    {
      v5 = 44LL;
      goto LABEL_6;
    }
    v6 = a3;
  }
  v7 = CRenderTarget::SetVisualTree(this, v6);
  if ( v7 < 0 )
  {
    v5 = 48LL;
    goto LABEL_7;
  }
  return 0LL;
}
