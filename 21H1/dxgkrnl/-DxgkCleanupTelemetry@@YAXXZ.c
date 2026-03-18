/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004AA90
 * Callers:
 *     DxgkUnload @ 0x1C025D1A0 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C02FC7B0 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C00AE9E8);
  v0 = qword_1C00AEB20;
  qword_1C00AEB20 = 0LL;
  dword_1C00AEB00 = 0;
  EtwUnregister(v0);
  v1 = qword_1C00AEAE8;
  qword_1C00AEAE8 = 0LL;
  dword_1C00AEAC8 = 0;
  EtwUnregister(v1);
  v2 = qword_1C00AEA40;
  qword_1C00AEA40 = 0LL;
  dword_1C00AEA20 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C00AEA90);
  v3 = qword_1C00AEA78;
  qword_1C00AEA78 = 0LL;
  dword_1C00AEA58 = 0;
  EtwUnregister(v3);
}
