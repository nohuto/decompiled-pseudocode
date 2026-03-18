/*
 * XREFs of ?Partition_TelemetryAnimationScenarioReference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE@@@Z @ 0x1800CE970
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioReference(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE *a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 63) + 48LL))(
    *((_QWORD *)this + 63),
    *((unsigned int *)a2 + 4),
    *((_QWORD *)a4 + 3),
    (char *)a4 + 4);
  return 0LL;
}
