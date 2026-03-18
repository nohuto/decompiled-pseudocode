/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C020CA58
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C020C9A8 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C021BBC0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this)
{
  __int64 v2; // rsi
  unsigned int v3; // ecx
  NTSTATUS DevicePropertyData; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  RequiredSize = 0;
  Type = 0;
  v2 = 1LL;
  v3 = *((_DWORD *)this + 82);
  Data = v3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 25) + 16LL) )
  {
    WdLogSingleEntry0(1LL);
    v3 = *((_DWORD *)this + 82);
  }
  if ( *((_DWORD *)this + 83) != v3 )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 25) + 8LL),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v7 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData >= 0 )
  {
    if ( RequiredSize != 4 || Type != 7 )
    {
      v7 = -1073741823;
      WdLogSingleEntry4(2LL, Type, RequiredSize, this, -1073741823LL);
      return v7;
    }
    if ( Data )
    {
      if ( Data == 90 )
      {
        LODWORD(v10) = 1;
      }
      else
      {
        if ( Data == 180 )
        {
          v10 = 2LL;
        }
        else
        {
          if ( Data != 270 )
          {
            v9 = Data;
LABEL_17:
            v7 = -1073741823;
            WdLogSingleEntry3(2LL, v9, this, -1073741823LL);
            return v7;
          }
          v10 = 3LL;
        }
        v2 = v10;
      }
    }
    else
    {
      LODWORD(v10) = 0;
      v2 = 0LL;
    }
    Data = v10;
    if ( DXGMONITOR::_ValidateMonitorOrientation(this, v10) )
    {
      *((_DWORD *)this + 83) = v10;
      *((_DWORD *)this + 84) = v10;
      return 0LL;
    }
    v9 = v2;
    goto LABEL_17;
  }
  WdLogSingleEntry2(2LL, this, DevicePropertyData);
  return v7;
}
