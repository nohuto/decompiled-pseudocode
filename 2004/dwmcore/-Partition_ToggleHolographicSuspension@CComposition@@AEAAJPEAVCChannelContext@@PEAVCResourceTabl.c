/*
 * XREFs of ?Partition_ToggleHolographicSuspension@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z @ 0x1800D9DC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_ToggleHolographicSuspension(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION *a4)
{
  LOBYTE(a2) = *((_BYTE *)a4 + 4) != 0;
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *, struct CResourceTable *))(**((_QWORD **)this + 17) + 24LL))(
    *((_QWORD *)this + 17),
    a2,
    a3);
  return 0LL;
}
