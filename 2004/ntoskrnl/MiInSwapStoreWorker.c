/*
 * XREFs of MiInSwapStoreWorker @ 0x1406D0750
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x1406D07F8 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x1406D081C (SmSwapStore.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D08A0 (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  _KPROCESS *v2; // rcx
  int v3; // edi
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess(v2, 0LL, (__int64)v5);
  v3 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((__int64)v5, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
