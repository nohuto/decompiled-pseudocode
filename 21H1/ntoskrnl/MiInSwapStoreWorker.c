/*
 * XREFs of MiInSwapStoreWorker @ 0x1406560F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x140656198 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x1406561BC (SmSwapStore.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140656240 (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v5; // rcx
  int v6; // edi
  __int64 v7; // r8
  _DWORD *v8; // r9
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_KPROCESS **)(a1 + 32);
  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess(v5, 0LL, (__int64)v10, a4);
  v6 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v6 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((__int64)v10, 0LL, v7, v8);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
