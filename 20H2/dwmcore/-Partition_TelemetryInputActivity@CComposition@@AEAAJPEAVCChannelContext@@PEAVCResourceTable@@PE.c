/*
 * XREFs of ?Partition_TelemetryInputActivity@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYINPUTACTIVITY@@@Z @ 0x18001D2AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryInputActivity(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYINPUTACTIVITY *a4)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 63) + 32LL))(
    *((_QWORD *)this + 63),
    *((unsigned int *)a4 + 1),
    *((_QWORD *)a4 + 1));
  return 0LL;
}
