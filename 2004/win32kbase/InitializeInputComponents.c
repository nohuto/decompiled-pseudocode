/*
 * XREFs of InitializeInputComponents @ 0x1C0034DBC
 * Callers:
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 * Callees:
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C0005710 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0007D3C (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0007DB0 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0007E00 (-Initialize@CInputConfig@@SAJXZ.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0034850 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C00348D4 (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0034974 (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C00349D8 (-Initialize@CInputThread@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C0034A40 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0034A90 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ??0CActivationObjectManager@@AEAA@XZ @ 0x1C003569C (--0CActivationObjectManager@@AEAA@XZ.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01AB2B0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 __fastcall InitializeInputComponents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CActivationObjectManager *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CInputGlobals *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // ecx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax

  if ( (int)InputExtensibilityCallout::Initialize(a1, a2, a3, a4) >= 0 )
  {
    v4 = (CActivationObjectManager *)Win32AllocPool(40LL, 1835491669LL);
    if ( v4 )
      v4 = CActivationObjectManager::CActivationObjectManager(v4);
    qword_1C024C728 = v4;
    if ( v4 && (int)CDeviceIdentity::Initialize(v6, v5, v7, v8) >= 0 )
    {
      v9 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL, 1919964227LL);
      if ( v9 )
        v9 = CInputGlobals::CInputGlobals(v9);
      gpInputGlobals = v9;
      if ( v9 )
      {
        v10 = CCursorClip::Initialize();
        if ( v10 >= 0 )
        {
          v14 = CForegroundInfo::Initialize((unsigned int)v10, v11, v12, v13);
          if ( v14 >= 0
            && (int)CInputThread::Initialize((unsigned int)v14, v15, v16, v17) >= 0
            && CInputConfig::Initialize() >= 0 )
          {
            InputDelegation::CInputDelegationInfo::gInstance = 0LL;
            v18 = anonymous_namespace_::CFrameIdGenerator::Initialize();
            if ( v18 >= 0 )
            {
              v22 = CInputSystemMetrics::Initialize((unsigned int)v18, v19, v20, v21);
              if ( v22 >= 0 )
              {
                if ( (unsigned __int8)isChildPartition((unsigned int)v22) )
                {
                  Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
                  *((_QWORD *)Instance + 1) = Instance;
                  *(_QWORD *)Instance = Instance;
                }
                InputObjectMap::s_hashTable = 0;
                Buffer = 0LL;
                dword_1C0250464 = 0;
                InputObjectMap::s_hashTableLock = 0LL;
              }
            }
          }
        }
      }
    }
  }
  CDesktopInputTransform::GetInstance();
  return v23;
}
