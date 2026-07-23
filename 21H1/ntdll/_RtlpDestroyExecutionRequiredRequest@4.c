/*
 * XREFs of _RtlpDestroyExecutionRequiredRequest@4 @ 0x4B36FCC4
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

NTSTATUS __thiscall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  _DWORD InputBuffer[2]; // [esp+4h] [ebp-10h] BYREF
  char v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  InputBuffer[1] = 3;
  v4 = 0;
  v5 = 0;
  InputBuffer[0] = Handle;
  ZwPowerInformation(PowerRequestAction, InputBuffer, 0x10u, 0, 0);
  return NtClose(Handle);
}
