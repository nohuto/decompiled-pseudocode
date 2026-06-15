/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x1800E3EAC
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x18007C3A0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x1800E4738 (--_GCResourcePriorityTracker@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(
        CResourcePriorityTracker **a1,
        unsigned int a2)
{
  CResourcePriorityTracker *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CResourcePriorityTracker::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
