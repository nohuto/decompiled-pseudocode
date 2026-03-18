/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x14093256C
 * Callers:
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 v2; // rax
  __int64 ProcessServerSilo; // rax
  _QWORD *v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+38h] [rbp-31h]
  int v6; // [rsp+3Ch] [rbp-2Dh]
  _QWORD v7[14]; // [rsp+40h] [rbp-29h] BYREF

  memset(v7, 0, 0x68uLL);
  LODWORD(v7[0]) = *(_DWORD *)(a1 + 1088);
  v7[2] = *(_QWORD *)(a1 + 1168);
  v7[3] = *(_QWORD *)(a1 + 1824) << 12;
  v7[4] = *(_QWORD *)(a1 + 1616) << 12;
  v7[5] = *(_QWORD *)(a1 + 1160);
  v2 = *(_QWORD *)(a1 + 1152);
  v6 = 0;
  v7[6] = v2;
  v5 = 104;
  v4 = v7;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)&v4, 1u, 1u, 0x320u, 0x501802u);
}
