/*
 * XREFs of ??1TapProcessor@@EEAA@XZ @ 0x1801815B8
 * Callers:
 *     ??_ETapProcessor@@EEAAPEAXI@Z @ 0x180181650 (--_ETapProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TapProcessor::~TapProcessor(TapProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &TapProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
  *((_QWORD *)this + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
  if ( *((_QWORD *)this + 7) )
    DestroyInteractionContext();
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
