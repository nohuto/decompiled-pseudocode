/*
 * XREFs of VmpPrefetchWorker @ 0x14092C430
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059F0B4 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  _KPROCESS *v2; // rcx
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_KPROCESS *)*((_QWORD *)P + 4);
  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess(v2, 0LL, (__int64)v3);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 2288LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v3, 0LL);
  HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 4));
  ExFreePoolWithTag(P, 0);
}
