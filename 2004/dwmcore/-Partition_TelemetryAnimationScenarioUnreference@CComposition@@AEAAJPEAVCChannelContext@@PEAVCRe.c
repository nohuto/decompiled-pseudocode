/*
 * XREFs of ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x1800D6B64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioUnreference(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE *a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 63) + 56LL))(
    *((_QWORD *)this + 63),
    *((unsigned int *)a2 + 4),
    *((_QWORD *)a4 + 3),
    (char *)a4 + 4);
  return 0LL;
}
