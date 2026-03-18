/*
 * XREFs of AcpiDiagTraceFanStatusChange @ 0x1C0049E08
 * Callers:
 *     ACPIFanFSTCallback @ 0x1C00551E0 (ACPIFanFSTCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x1C000CFA0 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceFanStatusChange(__int64 a1)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[32]; // [rsp+28h] [rbp-40h] BYREF
  int *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  v1 = *(_DWORD *)(a1 + 280);
  v6 = 0;
  v2 = v1;
  v5 = 4;
  v4 = &v2;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_STATUS_CHANGE, 3u, (__int64)v3);
}
