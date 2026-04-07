/*
 * XREFs of ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x180085984
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180085670 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::`scalar deleting destructor'(
        CAnimationClockCoordinator *this)
{
  __int64 v1; // rdi
  CBaseObject *v3; // rcx

  v1 = 0LL;
  for ( *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 7) + 8 * v1);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationClockCoordinator *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
