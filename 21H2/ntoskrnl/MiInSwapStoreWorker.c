/*
 * XREFs of MiInSwapStoreWorker @ 0x1406BEB20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406BE978 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiInSwapStoreContextDereference @ 0x1406BEBC8 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x1406BEBEC (SmSwapStore.c)
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
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32), v3);
  KiUnstackDetachProcess((__int64)v5, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
