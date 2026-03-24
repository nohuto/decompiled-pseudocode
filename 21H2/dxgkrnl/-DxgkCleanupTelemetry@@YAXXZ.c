/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004C930
 * Callers:
 *     DxgkUnload @ 0x1C0261750 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C0300F70 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C00B19E8);
  v0 = qword_1C00B1B20;
  qword_1C00B1B20 = 0LL;
  dword_1C00B1B00 = 0;
  EtwUnregister(v0);
  v1 = qword_1C00B1AE8;
  qword_1C00B1AE8 = 0LL;
  dword_1C00B1AC8 = 0;
  EtwUnregister(v1);
  v2 = qword_1C00B1A40;
  qword_1C00B1A40 = 0LL;
  dword_1C00B1A20 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C00B1A90);
  v3 = qword_1C00B1A78;
  qword_1C00B1A78 = 0LL;
  dword_1C00B1A58 = 0;
  EtwUnregister(v3);
}
