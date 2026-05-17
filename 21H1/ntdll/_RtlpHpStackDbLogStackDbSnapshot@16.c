/*
 * XREFs of _RtlpHpStackDbLogStackDbSnapshot@16 @ 0x4B36DD5E
 * Callers:
 *     _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0 (_RtlpHpStackTraceEventWriter@12.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpHpStackDbLogStackDbSnapshot(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-4Ch] BYREF
  int v6; // [esp+4h] [ebp-48h] BYREF
  _DWORD v7[16]; // [esp+8h] [ebp-44h] BYREF

  v5 = a2;
  v7[0] = &v6;
  v7[4] = &v5;
  v7[8] = &a3;
  v7[12] = a4;
  v7[14] = a3;
  v6 = a1;
  v7[1] = 0;
  v7[2] = 4;
  v7[3] = 0;
  v7[5] = 0;
  v7[6] = 4;
  v7[7] = 0;
  v7[9] = 0;
  v7[10] = 4;
  v7[11] = 0;
  v7[13] = 0;
  v7[15] = 0;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, dword_4B3A6824, HeapSnapshotSnap, 4, (int)v7);
}
