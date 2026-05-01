/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180322180
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ @ 0x1800FCBF0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ @ 0x1800FCC00 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ @ 0x1800FCC10 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ @ 0x1800FCC20 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ @ 0x1800FCC30 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ @ 0x1800FCC40 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WJA@E$AAAKXZ @ 0x1800FCC50 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WJA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WJI@E$AAAKXZ @ 0x1800FCC60 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WJI@E$AAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802ED178 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1802EE200 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x180317B68 (--1XamlBaseViewController@@IE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  Platform::Details::ControlBlock *v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 160);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    XamlBaseViewController::~XamlBaseViewController((__int64 *)(a1 + 8));
    v4 = *(Platform::Details::ControlBlock **)(a1 + 120);
    Platform::Details::ControlBlock::ReleaseTarget(v4);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v2;
}
