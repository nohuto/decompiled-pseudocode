/*
 * XREFs of UnInitializeInputComponents @ 0x1C0007ED8
 * Callers:
 *     InputUnInitialize @ 0x1C0007D60 (InputUnInitialize.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007E00 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0008C9C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0009C28 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0009D38 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C0009EB4 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?CleanUp@CActivationObjectManager@@AEAAXXZ @ 0x1C00B7724 (-CleanUp@CActivationObjectManager@@AEAAXXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01A8F30 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct InputVirtualization::RootSynthesizedMouseList *__fastcall UnInitializeInputComponents(
        InputExtensibilityCallout *a1)
{
  CActivationObjectManager *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CInputGlobals *v6; // rbx
  CTouchProcessor *v7; // rbx
  CCursorClip *v8; // rbx
  __int64 v9; // rcx
  CInputDest *v10; // rbx
  CInputThread *v11; // rbx
  PERESOURCE v12; // rcx
  struct CDeviceIdentity *v13; // rbx
  struct A0xad387374::CFrameIdGenerator *v14; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *result; // rax
  struct InputVirtualization::RootSynthesizedMouseList *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax

  v1 = qword_1C024A720;
  if ( qword_1C024A720 )
  {
    CActivationObjectManager::CleanUp(qword_1C024A720);
    Win32FreePool(v1);
  }
  qword_1C024A720 = 0LL;
  InputExtensibilityCallout::UnInitialize(a1);
  v6 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    Win32FreePool(v6);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize();
    v7 = gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      Win32FreePool(v7);
    }
    gpTouchProcessor = 0LL;
  }
  v8 = gpCursorClip;
  if ( gpCursorClip )
  {
    v9 = *((_QWORD *)gpCursorClip + 10);
    if ( v9 )
      Win32FreePool(v9);
    Win32FreePool(v8);
    gpCursorClip = 0LL;
  }
  v10 = gpForegroundInfo;
  if ( gpForegroundInfo )
  {
    CInputDest::SetEmpty(gpForegroundInfo);
    Win32FreePool(v10);
    gpForegroundInfo = 0LL;
  }
  v11 = gpInputThread;
  if ( gpInputThread )
  {
    if ( *((_QWORD *)gpInputThread + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    Win32FreePool(v11);
    gpInputThread = 0LL;
  }
  if ( gpInputConfig )
    CInputConfig::`scalar deleting destructor'(gpInputConfig, v2);
  v12 = CInputConfig::slock;
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v13 = gpDeviceIdentity;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v2, v4, v5);
    Win32FreePool(v13);
  }
  v14 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  gpDeviceIdentity = 0LL;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize((struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance
                                                                        + 8));
    Win32FreePool(v14);
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = 0LL;
  if ( gpInputSystemMetrics )
    Win32FreePool(gpInputSystemMetrics);
  gpInputSystemMetrics = 0LL;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  result = (struct InputVirtualization::RootSynthesizedMouseList *)isChildPartition();
  if ( (_BYTE)result )
  {
    result = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    v16 = result;
    while ( 1 )
    {
      v17 = *(_QWORD **)v16;
      if ( *(struct InputVirtualization::RootSynthesizedMouseList **)v16 == v16 )
        break;
      if ( (struct InputVirtualization::RootSynthesizedMouseList *)v17[1] != v16
        || (v18 = (_QWORD *)*v17, *(_QWORD **)(*v17 + 8LL) != v17) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v16 = v18;
      v18[1] = v16;
      result = (struct InputVirtualization::RootSynthesizedMouseList *)Win32FreePool(v17);
    }
  }
  return result;
}
