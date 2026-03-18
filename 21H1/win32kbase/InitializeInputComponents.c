/*
 * XREFs of InitializeInputComponents @ 0x1C0023A2C
 * Callers:
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 * Callees:
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0022CA4 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0022D18 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0022D68 (-Initialize@CInputConfig@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00236B4 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0023704 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ??0CActivationObjectManager@@AEAA@XZ @ 0x1C00242A4 (--0CActivationObjectManager@@AEAA@XZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C004EFF4 (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0050588 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0050EA8 (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C00512E8 (-Initialize@CInputThread@@SAJXZ.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00518C0 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01B1010 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 InitializeInputComponents()
{
  CActivationObjectManager *v0; // rax
  __int64 v1; // rcx
  CInputGlobals *v2; // rax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax

  if ( (int)InputExtensibilityCallout::Initialize() >= 0 )
  {
    v0 = (CActivationObjectManager *)Win32AllocPool(40LL, 1835491669LL);
    if ( v0 )
      v0 = CActivationObjectManager::CActivationObjectManager(v0);
    qword_1C0252740 = v0;
    if ( v0 && (int)CDeviceIdentity::Initialize(v1) >= 0 )
    {
      v2 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL);
      if ( v2 )
        v2 = CInputGlobals::CInputGlobals(v2);
      gpInputGlobals = v2;
      if ( v2 )
      {
        if ( (int)CCursorClip::Initialize() >= 0
          && (int)CForegroundInfo::Initialize() >= 0
          && (int)CInputThread::Initialize() >= 0
          && CInputConfig::Initialize() >= 0 )
        {
          InputDelegation::CInputDelegationInfo::gInstance = 0LL;
          v3 = anonymous_namespace_::CFrameIdGenerator::Initialize();
          if ( v3 >= 0 )
          {
            v4 = CInputSystemMetrics::Initialize((unsigned int)v3);
            if ( v4 >= 0 )
            {
              if ( (unsigned __int8)isChildPartition((unsigned int)v4) )
              {
                Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
                *((_QWORD *)Instance + 1) = Instance;
                *(_QWORD *)Instance = Instance;
              }
              InputObjectMap::s_hashTable = 0;
              Buffer = 0LL;
              dword_1C02563EC = 0;
              InputObjectMap::s_hashTableLock = 0LL;
            }
          }
        }
      }
    }
  }
  CDesktopInputTransform::GetInstance();
  return v5;
}
