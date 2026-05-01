/*
 * XREFs of _lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator() @ 0x1800CF884
 * Callers:
 *     _lambda_78c4d568eef31da123ac7a5ea8376aa4_::_lambda_invoker_cdecl_ @ 0x1800CEFF0 (_lambda_78c4d568eef31da123ac7a5ea8376aa4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801E7118 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EAB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180212CB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator()(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  v3 = RoInitialize(0LL);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release();
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(a2 + 48);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        51LL,
        (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    wil::details::SetEvent(*(wil::details **)(a2 + 32), v6);
    v10 = *(_QWORD *)(a2 + 40);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v10, &v9);
  }
  if ( v3 >= 0 )
    RoUninitialize();
  if ( a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v11);
  return 0LL;
}
