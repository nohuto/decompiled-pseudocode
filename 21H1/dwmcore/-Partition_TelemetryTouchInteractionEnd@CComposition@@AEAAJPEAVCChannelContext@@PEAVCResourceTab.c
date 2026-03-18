/*
 * XREFs of ?Partition_TelemetryTouchInteractionEnd@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONEND@@@Z @ 0x180021A04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionEnd(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONEND *a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, struct CResourceTable *))(**((_QWORD **)this + 63) + 24LL))(
    *((_QWORD *)this + 63),
    *((_QWORD *)a4 + 1),
    a3);
  return 0LL;
}
