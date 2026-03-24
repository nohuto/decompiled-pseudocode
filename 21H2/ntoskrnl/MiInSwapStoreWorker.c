/*
 * XREFs of MiInSwapStoreWorker @ 0x1407104D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140710328 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiInSwapStoreContextDereference @ 0x140710578 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x14071059C (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v5; // rcx
  int v6; // edi
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_KPROCESS **)(a1 + 32);
  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(v5, 0LL, (__int64)v8, a4);
  v6 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v6 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32), v6);
  KiUnstackDetachProcess((__int64)v8, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
