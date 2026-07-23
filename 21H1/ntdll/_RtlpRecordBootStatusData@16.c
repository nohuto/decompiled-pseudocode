/*
 * XREFs of _RtlpRecordBootStatusData@16 @ 0x4B350F8B
 * Callers:
 *     _RtlRestoreBootStatusDefaults@4 @ 0x4B350BF0 (_RtlRestoreBootStatusDefaults@4.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

NTSTATUS __fastcall RtlpRecordBootStatusData(char a1, int a2, int a3, int a4)
{
  _DWORD InputBuffer[5]; // [esp+4h] [ebp-14h] BYREF

  InputBuffer[1] = a4;
  InputBuffer[2] = a3;
  InputBuffer[0] = a2;
  InputBuffer[3] = 1;
  InputBuffer[4] = a1 != 0;
  return ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x14u, 0, 0);
}
