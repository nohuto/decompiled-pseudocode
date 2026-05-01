/*
 * XREFs of ?GetView@CAppLayoutAnimationData@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1804619E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutAnimationData::GetView(CAppLayoutAnimationData *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
    *a2 = *v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
}
