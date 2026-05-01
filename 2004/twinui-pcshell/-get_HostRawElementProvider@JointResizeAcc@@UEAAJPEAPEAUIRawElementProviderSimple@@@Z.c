/*
 * XREFs of ?get_HostRawElementProvider@JointResizeAcc@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x18041FC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall JointResizeAcc::get_HostRawElementProvider(HWND *this, struct IRawElementProviderSimple **a2)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = UiaHostProviderFromHwnd(this[5], a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
