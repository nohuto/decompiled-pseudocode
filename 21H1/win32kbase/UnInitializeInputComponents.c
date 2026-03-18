/*
 * XREFs of UnInitializeInputComponents @ 0x1C001EB24
 * Callers:
 *     InputUnInitialize @ 0x1C001E9CC (InputUnInitialize.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C001EA6C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C001ECFC (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0022038 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0022148 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00229BC (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?CleanUp@CActivationObjectManager@@AEAAXXZ @ 0x1C0049F44 (-CleanUp@CActivationObjectManager@@AEAAXXZ.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01B1010 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct InputVirtualization::RootSynthesizedMouseList *__fastcall UnInitializeInputComponents(
        InputExtensibilityCallout *a1)
{
  CActivationObjectManager *v1; // rbx
  unsigned int v2; // edx
  CInputGlobals *v3; // rbx
  CTouchProcessor *v4; // rbx
  CCursorClip *v5; // rbx
  __int64 v6; // rcx
  CInputDest *v7; // rbx
  CInputThread *v8; // rbx
  struct CDeviceIdentity *v9; // rbx
  struct A0xad387374::CFrameIdGenerator *v10; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *result; // rax
  struct InputVirtualization::RootSynthesizedMouseList *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  v1 = qword_1C0252740;
  if ( qword_1C0252740 )
  {
    CActivationObjectManager::CleanUp(qword_1C0252740);
    Win32FreePool(v1);
  }
  qword_1C0252740 = 0LL;
  InputExtensibilityCallout::UnInitialize(a1);
  v3 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Win32FreePool(v3);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize();
    v4 = gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      Win32FreePool(v4);
    }
    gpTouchProcessor = 0LL;
  }
  v5 = gpCursorClip;
  if ( gpCursorClip )
  {
    v6 = *((_QWORD *)gpCursorClip + 10);
    if ( v6 )
      Win32FreePool(v6);
    Win32FreePool(v5);
    gpCursorClip = 0LL;
  }
  v7 = gpForegroundInfo;
  if ( gpForegroundInfo )
  {
    CInputDest::SetEmpty(gpForegroundInfo);
    Win32FreePool(v7);
    gpForegroundInfo = 0LL;
  }
  v8 = gpInputThread;
  if ( gpInputThread )
  {
    if ( *((_QWORD *)gpInputThread + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Win32FreePool(v8);
    gpInputThread = 0LL;
  }
  if ( gpInputConfig )
    CInputConfig::`scalar deleting destructor'(gpInputConfig, v2);
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v9 = gpDeviceIdentity;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Win32FreePool(v9);
  }
  v10 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  gpDeviceIdentity = 0LL;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize((struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance
                                                                        + 8));
    Win32FreePool(v10);
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
    v12 = result;
    while ( 1 )
    {
      v13 = *(_QWORD **)v12;
      if ( *(struct InputVirtualization::RootSynthesizedMouseList **)v12 == v12 )
        break;
      if ( (struct InputVirtualization::RootSynthesizedMouseList *)v13[1] != v12
        || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v12 = v14;
      v14[1] = v12;
      result = (struct InputVirtualization::RootSynthesizedMouseList *)Win32FreePool(v13);
    }
  }
  return result;
}
