/*
 * XREFs of ??_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x1800B8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

COnDeviceStateChangedWorkItem *__fastcall COnDeviceStateChangedWorkItem::`vector deleting destructor'(
        COnDeviceStateChangedWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
