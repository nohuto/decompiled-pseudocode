/*
 * XREFs of ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F19AC
 * Callers:
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02F42E0 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0168838 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore(DXGMONITOR *this, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SDRWhiteLevel");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v4 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v4;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v4;
    }
  }
  return result;
}
