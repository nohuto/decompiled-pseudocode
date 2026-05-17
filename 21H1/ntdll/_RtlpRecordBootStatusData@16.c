/*
 * XREFs of _RtlpRecordBootStatusData@16 @ 0x4B350F8B
 * Callers:
 *     _RtlRestoreBootStatusDefaults@4 @ 0x4B350BF0 (_RtlRestoreBootStatusDefaults@4.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

int __fastcall RtlpRecordBootStatusData(char a1, int a2, int a3, int a4)
{
  _DWORD v5[5]; // [esp+4h] [ebp-14h] BYREF

  v5[1] = a4;
  v5[2] = a3;
  v5[0] = a2;
  v5[3] = 1;
  v5[4] = a1 != 0;
  return ZwPowerInformation(94, (int)v5, 20, 0, 0);
}
