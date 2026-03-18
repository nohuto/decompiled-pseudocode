/*
 * XREFs of VmpPrefetchWorker @ 0x14092B180
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059E9C4 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (_KPROCESS *)*((_QWORD *)P + 4);
  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(v5, 0LL, (__int64)v8, a4);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 2288LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v8, 0LL, v6, v7);
  HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 4));
  ExFreePoolWithTag(P, 0);
}
