/*
 * XREFs of ?GetDigitalVideoInputParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C006BFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetDigitalVideoInputParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorDigitalVideoInputParams *))(**((_QWORD **)this + 2) + 152LL))(
           *((_QWORD *)this + 2),
           a2);
}
