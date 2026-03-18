/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C0187D38
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0187C9C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C01988A0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rcx
  NTSTATUS DevicePropertyData; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp+30h] BYREF

  RequiredSize = 0;
  Type = 0;
  v3 = *((unsigned int *)this + 112);
  Data = v3;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v3, a2);
    WdLogEvent5_WdAssertion(v11);
    LODWORD(v3) = *((_DWORD *)this + 112);
  }
  if ( *((_DWORD *)this + 113) != (_DWORD)v3 )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *((PDEVICE_OBJECT *)this + 7),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v9 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = v9;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v9;
  }
  if ( RequiredSize != 4 || Type != 7 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v14[3] = Type;
    v15 = RequiredSize;
    v14[5] = this;
    v14[6] = -1073741823LL;
    v14[4] = v15;
    goto LABEL_23;
  }
  switch ( Data )
  {
    case 0u:
      v13 = 0;
LABEL_20:
      Data = v13;
      if ( DXGMONITOR::_ValidateMonitorOrientation(this, v13) )
      {
        *((_DWORD *)this + 113) = v13;
        *((_DWORD *)this + 114) = v13;
        return 0LL;
      }
      break;
    case 0x5Au:
      v13 = 1;
      goto LABEL_20;
    case 0xB4u:
      v13 = 2;
      goto LABEL_20;
    case 0x10Eu:
      v13 = 3;
      goto LABEL_20;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
  v14[3] = Data;
  v14[4] = this;
  v14[5] = -1073741823LL;
LABEL_23:
  WdLogEvent5_WdError(v14);
  return 3221225473LL;
}
