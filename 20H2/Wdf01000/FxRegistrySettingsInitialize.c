/*
 * XREFs of FxRegistrySettingsInitialize @ 0x1C0057194
 * Callers:
 *     FxInitialize @ 0x1C0056768 (FxInitialize.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C001839C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C0056200 (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0056534 (FxDriverGlobalsInitializeDebugExtension.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C0057134 (FxOverrideDefaultVerifierSettings.c)
 */

void __fastcall FxRegistrySettingsInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _UNICODE_STRING *RegistryPath,
        unsigned __int8 WindowsVerifierOn)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  _FX_DRIVER_GLOBALS *v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r9d
  PVOID SystemRoutineAddress; // rax
  unsigned int v11; // eax
  bool v12; // zf
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned int v14; // edx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned int zero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int timeoutValue; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int allocateFailValue; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int verifierOnValue; // [rsp+3Ch] [rbp-C4h] BYREF
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int trackDriverForMiniDumpLog; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int requestParentOptimizationOn; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int defaultTrue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int verboseValue; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int verifyDownlevelValue; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int forceLogsInMiniDump; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int dsfValue; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int removeLockOptionFlags; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int max; // [rsp+68h] [rbp-98h] BYREF
  FxAutoRegKey hDriver; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING timeoutName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING FunctionName; // [rsp+A8h] [rbp-58h] BYREF
  _RTL_QUERY_REGISTRY_TABLE paramTable[10]; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v38; // [rsp+320h] [rbp+220h]
  wchar_t v39; // [rsp+328h] [rbp+228h]
  wchar_t parametersPath_buffer[16]; // [rsp+330h] [rbp+230h] BYREF
  wchar_t timeoutName_buffer[40]; // [rsp+350h] [rbp+250h] BYREF

  max = -1;
  parametersPath.Buffer = parametersPath_buffer;
  v4 = WindowsVerifierOn;
  verifierOnValue = 0;
  verifyDownlevelValue = 0;
  verboseValue = 0;
  allocateFailValue = 0;
  forceLogsInMiniDump = 0;
  trackDriverForMiniDumpLog = 0;
  requestParentOptimizationOn = 0;
  dsfValue = 0;
  removeLockOptionFlags = 0;
  zero = 0;
  defaultTrue = 1;
  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  *(_QWORD *)&parametersPath.Length = 1966108LL;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  FunctionName = 0LL;
  if ( RegistryPath )
  {
    ObjectAttributes.ObjectName = RegistryPath;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&hDriver.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = hDriver.m_Key;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &parametersPath;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
      {
        memset(paramTable, 0, sizeof(paramTable));
        allocateFailValue = -1;
        paramTable[0].Name = L"VerboseOn";
        paramTable[0].DefaultLength = 4;
        paramTable[0].EntryContext = &verboseValue;
        paramTable[0].Flags = 288;
        paramTable[0].DefaultData = &zero;
        paramTable[1].Flags = 288;
        paramTable[1].Name = L"VerifierAllocateFailCount";
        paramTable[0].DefaultType = 0x4000000;
        paramTable[1].EntryContext = &allocateFailValue;
        paramTable[1].DefaultType = 0x4000000;
        paramTable[1].DefaultData = &max;
        paramTable[1].DefaultLength = 4;
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, 0x120u, 9u) )
          verifierOnValue = v4;
        paramTable[2].Flags = v8;
        paramTable[2].Name = L"VerifierOn";
        paramTable[3].Flags = v8;
        paramTable[2].EntryContext = &verifierOnValue;
        paramTable[2].DefaultData = &verifierOnValue;
        paramTable[3].Name = L"VerifyDownLevel";
        paramTable[3].EntryContext = &verifyDownlevelValue;
        paramTable[3].DefaultData = &zero;
        paramTable[4].Name = L"ForceLogsInMiniDump";
        paramTable[4].EntryContext = &forceLogsInMiniDump;
        paramTable[4].DefaultData = &zero;
        paramTable[5].Name = L"TrackDriverForMiniDumpLog";
        paramTable[5].EntryContext = &trackDriverForMiniDumpLog;
        paramTable[5].DefaultData = &defaultTrue;
        paramTable[6].Name = L"RequestParentOptimizationOn";
        paramTable[6].EntryContext = &requestParentOptimizationOn;
        paramTable[6].DefaultData = &defaultTrue;
        paramTable[7].Name = L"DsfOn";
        paramTable[7].EntryContext = &dsfValue;
        paramTable[7].DefaultData = &zero;
        paramTable[8].Name = L"RemoveLockOptionFlags";
        paramTable[8].EntryContext = &removeLockOptionFlags;
        paramTable[4].Flags = v8;
        trackDriverForMiniDumpLog = 1;
        paramTable[5].Flags = v8;
        requestParentOptimizationOn = 1;
        paramTable[6].Flags = v8;
        paramTable[7].Flags = v8;
        paramTable[8].Flags = v8;
        paramTable[8].DefaultData = &zero;
        paramTable[2].DefaultType = v9;
        paramTable[2].DefaultLength = 4;
        paramTable[3].DefaultType = v9;
        paramTable[3].DefaultLength = 4;
        paramTable[4].DefaultType = v9;
        paramTable[4].DefaultLength = 4;
        paramTable[5].DefaultType = v9;
        paramTable[5].DefaultLength = 4;
        paramTable[6].DefaultType = v9;
        paramTable[6].DefaultLength = 4;
        paramTable[7].DefaultType = v9;
        paramTable[7].DefaultLength = 4;
        paramTable[8].DefaultType = v9;
        paramTable[8].DefaultLength = 4;
        RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&FunctionName);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlxQueryRegistryValues;
        if ( ((int (__fastcall *)(__int64, void *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))SystemRoutineAddress)(
               3221225472LL,
               hWdf.m_Key,
               paramTable,
               0LL,
               0LL) >= 0 )
        {
          FxDriverGlobals->FxVerboseOn = verboseValue != 0;
          v11 = -1;
          if ( allocateFailValue != -1 )
            v11 = allocateFailValue;
          v12 = verifierOnValue == 0;
          FxDriverGlobals->WdfVerifierAllocateFailCount = v11;
          _FX_DRIVER_GLOBALS::SetVerifierState(FxDriverGlobals, !v12);
          if ( FxDriverGlobals->FxVerifierOn )
            FxDriverGlobalsInitializeDebugExtension(v13, hWdf.m_Key);
          FxDriverGlobals->FxVerifyDownlevel = verifyDownlevelValue != 0;
          FxOverrideDefaultVerifierSettings(hWdf.m_Key, (wchar_t *)L"VerifyOn", (bool *)&FxDriverGlobals->FxVerifyOn);
          if ( FxDriverGlobals->FxVerifyOn )
            FxDriverGlobals->Public.DriverFlags |= 4u;
          FxOverrideDefaultVerifierSettings(
            hWdf.m_Key,
            (wchar_t *)L"DbgBreakOnError",
            (bool *)&FxDriverGlobals->FxVerifierDbgBreakOnError);
          FxOverrideDefaultVerifierSettings(
            hWdf.m_Key,
            (wchar_t *)L"DbgBreakOnDeviceStateError",
            (bool *)&FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError);
          if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
          {
            ObjectAttributes = *(_OBJECT_ATTRIBUTES *)L"DbgWaitForSignalTimeoutInSec";
            v39 = aDbgwaitforsign[28];
            timeoutValue = 0;
            *(_QWORD *)&ValueName.Length = 3801144LL;
            ValueName.Buffer = (wchar_t *)&ObjectAttributes;
            v38 = *(_QWORD *)L"nSec";
            if ( (int)FxRegKey::_QueryULong(hWdf.m_Key, &ValueName, &timeoutValue) >= 0 )
              FxDriverGlobals->FxVerifierDbgWaitForSignalTimeoutInSec = timeoutValue;
          }
          wcscpy(timeoutName_buffer, L"DbgWaitForWakeInterruptIsrTimeoutInSec");
          timeoutValue = 0;
          *(_QWORD *)&timeoutName.Length = 5111884LL;
          timeoutName.Buffer = timeoutName_buffer;
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v14, 0xDu)
            && (int)FxRegKey::_QueryULong(hWdf.m_Key, &timeoutName, &timeoutValue) >= 0 )
          {
            FxDriverGlobals->DbgWaitForWakeInterruptIsrTimeoutInSec = timeoutValue;
          }
          v12 = trackDriverForMiniDumpLog == 0;
          FxDriverGlobals->FxForceLogsInMiniDump = forceLogsInMiniDump != 0;
          v15 = !v12;
          v12 = requestParentOptimizationOn == 0;
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = v15;
          v16 = !v12;
          v12 = dsfValue == 0;
          FxDriverGlobals->FxRequestParentOptimizationOn = v16;
          FxDriverGlobals->FxDsfOn = !v12;
          FxDriverGlobals->RemoveLockOptionFlags = removeLockOptionFlags;
        }
      }
      else if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v5, 9u) )
      {
        _FX_DRIVER_GLOBALS::SetVerifierState(v6, v4);
        if ( FxDriverGlobals->FxVerifierOn )
          FxDriverGlobalsInitializeDebugExtension(v7, 0LL);
      }
    }
    if ( hWdf.m_Key )
      ZwClose(hWdf.m_Key);
    if ( hDriver.m_Key )
      ZwClose(hDriver.m_Key);
  }
}
