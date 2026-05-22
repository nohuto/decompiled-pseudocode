/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x18009B750
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x1800419D0 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$0 @ 0x180041A9A (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x180050324 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x18009BABE (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x18009BDF2 (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x1800B648D (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverInput_::_1_::dtor$0 @ 0x1800B67CD (_DWMInputTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180103529 (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x18013A4DB (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x18017F717 (_InputRedirectionTarget--DeliverInput_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall GetInputReportResult::~GetInputReportResult(
        GetInputReportResult *this,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    operator delete(v2, a2);
}
