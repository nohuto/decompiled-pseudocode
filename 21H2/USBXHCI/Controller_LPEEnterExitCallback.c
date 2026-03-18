/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C0032770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     Controller_InUseByDebugger @ 0x1C001589C (Controller_InUseByDebugger.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0030B80 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C00329F0 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        __int64 *Context)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v6 )
    {
      v4 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 260;
        v9 = *Context;
LABEL_19:
        LOBYTE(Value) = 2;
        WPP_RECORDER_SF_i(
          Context[9],
          (_DWORD)Value,
          4,
          v7,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          v9);
      }
    }
    else if ( *Value )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Value) = 4;
        WPP_RECORDER_SF_i(
          Context[9],
          (_DWORD)Value,
          4,
          262,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          *Context);
      }
      if ( Controller_InUseByDebugger(Context) )
        Controller_ReleaseWdfPowerReferenceForDebugger(Context);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Value) = 4;
        WPP_RECORDER_SF_i(
          Context[9],
          (_DWORD)Value,
          4,
          261,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          *Context);
      }
      if ( Controller_InUseByDebugger(Context) )
        Controller_AcquireWdfPowerReferenceForDebugger(Context);
    }
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 259;
      v9 = *Context;
      goto LABEL_19;
    }
  }
  return v4;
}
