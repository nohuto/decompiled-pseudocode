/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x140936FE8
 * Callers:
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 v2; // rax
  __int64 ProcessServerSilo; // rax
  _QWORD *v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+38h] [rbp-31h]
  int v7; // [rsp+3Ch] [rbp-2Dh]
  _QWORD v8[14]; // [rsp+40h] [rbp-29h] BYREF

  memset(v8, 0, 0x68uLL);
  LODWORD(v8[0]) = *(_DWORD *)(a1 + 1088);
  v8[2] = *(_QWORD *)(a1 + 1168);
  v8[3] = *(_QWORD *)(a1 + 1824) << 12;
  v8[4] = *(_QWORD *)(a1 + 1616) << 12;
  v8[5] = *(_QWORD *)(a1 + 1160);
  v2 = *(_QWORD *)(a1 + 1152);
  v7 = 0;
  v8[6] = v2;
  v6 = 104;
  v5 = v8;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  return EtwTraceSiloKernelEvent(ProcessServerSilo, (int)&v5, 1, 1u, 800, 5249026);
}
