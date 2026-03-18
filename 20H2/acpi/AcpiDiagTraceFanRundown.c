/*
 * XREFs of AcpiDiagTraceFanRundown @ 0x1C0049D5C
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C0049810 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x1C000CFA0 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceFanRundown(__int64 a1)
{
  bool v1; // zf
  BOOL v2; // eax
  __int16 v3; // [rsp+20h] [rbp-19h] BYREF
  BOOL v4; // [rsp+24h] [rbp-15h] BYREF
  int v5; // [rsp+28h] [rbp-11h] BYREF
  char v6[32]; // [rsp+30h] [rbp-9h] BYREF
  BOOL *v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  __int16 *v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  int *v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]

  v5 = *(_DWORD *)(a1 + 280);
  v8 = 4LL;
  v1 = *(_QWORD *)(a1 + 232) == 0LL;
  v10 = 2LL;
  v2 = !v1;
  v12 = 4LL;
  v1 = *(_DWORD *)(a1 + 344) == 1;
  v4 = v2;
  LOBYTE(v2) = v1;
  v3 = v2;
  v7 = &v4;
  v9 = &v3;
  v11 = &v5;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_RUNDOWN, 5u, (__int64)v6);
}
