/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004BAA0
 * Callers:
 *     DxgkUnload @ 0x1C02614A0 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C0300CC0 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C00B09E8);
  v0 = qword_1C00B0B20;
  qword_1C00B0B20 = 0LL;
  dword_1C00B0B00 = 0;
  EtwUnregister(v0);
  v1 = qword_1C00B0AE8;
  qword_1C00B0AE8 = 0LL;
  dword_1C00B0AC8 = 0;
  EtwUnregister(v1);
  v2 = qword_1C00B0A40;
  qword_1C00B0A40 = 0LL;
  dword_1C00B0A20 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C00B0A90);
  v3 = qword_1C00B0A78;
  qword_1C00B0A78 = 0LL;
  dword_1C00B0A58 = 0;
  EtwUnregister(v3);
}
