/*
 * XREFs of ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800AE170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CAppSwitch *__fastcall CAppSwitch::`scalar deleting destructor'(CAppSwitch *this, char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppSwitch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
