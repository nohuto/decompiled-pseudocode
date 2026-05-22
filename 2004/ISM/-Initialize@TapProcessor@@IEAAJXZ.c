/*
 * XREFs of ?Initialize@TapProcessor@@IEAAJXZ @ 0x180181840
 * Callers:
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x180181730 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     CreateInputServiceProxy @ 0x18002D918 (CreateInputServiceProxy.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x180181B5C (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::Initialize(TapProcessor *this)
{
  int v2; // eax
  int InteractionContext; // eax
  int v4; // eax
  int InputServiceProxy; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  v2 = CoreUICreate((char *)this + 40);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      59LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  InteractionContext = CreateInteractionContext((char *)this + 56);
  if ( InteractionContext < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      62LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InteractionContext);
    __debugbreak();
  }
  v4 = TapProcessor::ResetAndInitializeInteractionContext(this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      63LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  InputServiceProxy = CreateInputServiceProxy(
                        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                        (_QWORD *)this + 6);
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      65LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    __debugbreak();
  }
  return 0LL;
}
