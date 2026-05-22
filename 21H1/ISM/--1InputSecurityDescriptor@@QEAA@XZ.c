/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029DD4
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180022068 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180022498 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027474 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x18002C100 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18002C6D4 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037BAC (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18004E9B3 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x180050538 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18005054A (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18005055C (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x180050EF7 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x18008E710 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x18008E919 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x180173964 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x180173BED (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x180175684 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x1801758DC (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180187090 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x1801872B7 (_CursorManager--Initialize_--_1_--dtor$2.c)
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
