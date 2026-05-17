/*
 * XREFs of _RtlpHpStackDbLogStackDbEnd@8 @ 0x4B36DCFB
 * Callers:
 *     _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0 (_RtlpHpStackTraceEventWriter@12.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpHpStackDbLogStackDbEnd(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-2Ch] BYREF
  int v4; // [esp+4h] [ebp-28h] BYREF
  _DWORD v5[8]; // [esp+8h] [ebp-24h] BYREF

  v4 = a1;
  v5[0] = &v4;
  v5[4] = &v3;
  v3 = a2;
  v5[1] = 0;
  v5[2] = 4;
  v5[3] = 0;
  v5[5] = 0;
  v5[6] = 4;
  v5[7] = 0;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, dword_4B3A6824, HeapSnapshotEnd, 2, (int)v5);
}
