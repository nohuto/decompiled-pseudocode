/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004B9E0
 * Callers:
 *     DxgkUnload @ 0x1C02604C0 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C02FFD20 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C00AF9E8);
  v0 = qword_1C00AFB20;
  qword_1C00AFB20 = 0LL;
  dword_1C00AFB00 = 0;
  EtwUnregister(v0);
  v1 = qword_1C00AFAE8;
  qword_1C00AFAE8 = 0LL;
  dword_1C00AFAC8 = 0;
  EtwUnregister(v1);
  v2 = qword_1C00AFA40;
  qword_1C00AFA40 = 0LL;
  dword_1C00AFA20 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C00AFA90);
  v3 = qword_1C00AFA78;
  qword_1C00AFA78 = 0LL;
  dword_1C00AFA58 = 0;
  EtwUnregister(v3);
}
