/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x1405A5A30
 * Callers:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1152);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v3;
  v8 = &v5;
  v10 = 0;
  v7 = a3;
  v9 = 16;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v4 + 2160), (__int64)&v8, 1u, 0x20000200u, 0x543u, 0x501A02u);
}
