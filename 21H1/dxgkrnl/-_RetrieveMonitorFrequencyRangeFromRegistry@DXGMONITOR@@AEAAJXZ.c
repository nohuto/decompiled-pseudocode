/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0168C60
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0169560 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0168E04 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0168ED4 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  ULONG v8; // esi
  char i; // r14
  int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *KeyHandle; // [rsp+28h] [rbp-29h] BYREF
  struct _KEY_BASIC_INFORMATION *v17; // [rsp+30h] [rbp-21h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-1h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  int v22; // [rsp+88h] [rbp+37h]

  if ( ((_BYTE)this[5] & 1) == 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !this[7] )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v3 = this[7];
  v22 = *(_DWORD *)L"S";
  v19[1] = &v21;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v21 = *(_QWORD *)L"MODES";
  v19[0] = 786442LL;
  v4 = IoOpenDeviceRegistryKey(v3, 2u, 0xF003Fu, &DeviceRegKey);
  v6 = v4;
  if ( v4 < 0
    || (ObjectAttributes.RootDirectory = DeviceRegKey,
        *(_QWORD *)&ObjectAttributes.Length = 48LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v19,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes),
        v6 = v7,
        v7 < 0) )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v5);
    *(_QWORD *)(v15 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v15);
  }
  else
  {
    v8 = 0;
    for ( i = 0; ; i = 1 )
    {
      v17 = 0LL;
      v10 = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, v8++, &v17);
      LODWORD(v6) = v10;
      if ( v10 < 0 )
        break;
      LODWORD(v6) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, KeyHandle, v17);
      operator delete[](v17);
      if ( (int)v6 < 0 )
        break;
    }
    if ( i )
      LODWORD(v6) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v6;
}
