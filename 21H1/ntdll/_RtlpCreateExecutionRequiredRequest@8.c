/*
 * XREFs of _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(HANDLE ProcessHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  int ProcessInformation[7]; // [esp+10h] [ebp-50h] BYREF
  char v7; // [esp+2Ch] [ebp-34h]
  _DWORD InputBuffer[2]; // [esp+30h] [ebp-30h] BYREF
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-28h] BYREF
  _DWORD v10[2]; // [esp+4Ch] [ebp-14h] BYREF
  char v11; // [esp+54h] [ebp-Ch]
  HANDLE v12; // [esp+58h] [ebp-8h]
  HANDLE OutputBuffer; // [esp+5Ch] [ebp-4h] BYREF

  ProcessInformation[0] = 32;
  result = ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x20u, 0);
  if ( result >= 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      InputBuffer[0] = 0;
      InputBuffer[1] = 1;
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v5 = ZwPowerInformation(PlmPowerRequestCreate, InputBuffer, 0x1Cu, &OutputBuffer, 4u);
      if ( v5 >= 0 )
      {
        v10[0] = OutputBuffer;
        v10[1] = 3;
        v11 = 1;
        v12 = ProcessHandle;
        v5 = ZwPowerInformation(PowerRequestAction, v10, 0x10u, 0, 0);
        if ( v5 >= 0 )
          *a2 = OutputBuffer;
        else
          NtClose(OutputBuffer);
      }
      return v5;
    }
    else
    {
      *a2 = 0;
      return 0;
    }
  }
  return result;
}
