/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilRectD@@UtagMILCMD_RECTDRESOURCE@@$0IL@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTDRESOURCE@@@Z @ 0x1801744DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilRectD,tagMILCMD_RECTDRESOURCE,139>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64 *, _QWORD, _QWORD); // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 7) = *(_OWORD *)(a3 + 8);
  v4 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 72);
  *(_OWORD *)(a1 + 9) = *(_OWORD *)(a3 + 24);
  v4(a1, 0LL, 0LL);
  return 0LL;
}
