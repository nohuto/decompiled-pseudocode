/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029E64
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800220F8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180022528 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027504 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x18002C190 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18002C764 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037C80 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18004E373 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x18004FEF8 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18004FF0A (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18004FF1C (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1800508B7 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x18008E1B0 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x18008E3B9 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x180173414 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x18017369D (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x180175134 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x18017538C (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180186B40 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x180186D67 (_CursorManager--Initialize_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
