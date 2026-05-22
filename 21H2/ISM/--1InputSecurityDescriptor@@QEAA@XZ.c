/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029D84
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180021E48 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180022278 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x18002C0B8 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18002C694 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037900 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18004EFA3 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x180050B28 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x180050B3A (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x180050B4C (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1800514F9 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x18008E610 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x18008E819 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801738C4 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x180173B4D (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1801755E4 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x18017583C (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180186FF0 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x180187217 (_CursorManager--Initialize_--_1_--dtor$2.c)
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
