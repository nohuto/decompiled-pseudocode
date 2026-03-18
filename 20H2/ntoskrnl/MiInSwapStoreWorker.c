/*
 * XREFs of MiInSwapStoreWorker @ 0x1406F0DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x1406F0E58 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x1406F0E7C (SmSwapStore.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406F0F00 (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  _KPROCESS *v2; // rcx
  int v3; // edi
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess(v2, 0, (__int64)v5);
  v3 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((__int64)v5, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
