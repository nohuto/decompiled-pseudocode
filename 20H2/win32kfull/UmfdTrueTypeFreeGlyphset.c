/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1C00657CC
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0064200 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0065850 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00F3834 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest(v6, 15LL);
  v6[5] = a1;
  v6[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v7 = a2;
  UmfdClientSendAndWaitForCompletion(0, (__int64)v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}
