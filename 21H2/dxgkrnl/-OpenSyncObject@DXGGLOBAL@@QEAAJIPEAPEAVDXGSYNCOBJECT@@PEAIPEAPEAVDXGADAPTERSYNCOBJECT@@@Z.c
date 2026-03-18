/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01EC868 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C034B4B4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C034B894 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0371540 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0009BF8 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0020DE8 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // rax
  int v14; // ecx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // edx
  _BYTE v23[16]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 2797LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppSyncObject", 2797LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 2798LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phSyncObject", 2798LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    WdLogSingleEntry1(1LL, 2799LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsSyncObjectLockSharedOwner()", 2799LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  v14 = *((_DWORD *)Current + 106);
  if ( (v14 & 0x180) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
      v18 = *((_QWORD *)Current + 76);
    else
      v18 = (unsigned __int64)Current & -(__int64)((v14 & 0x80u) != 0);
    v19 = v18 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 248));
    v20 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *(_DWORD *)(v18 + 296) )
    {
      v21 = *(_QWORD *)(v18 + 280);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        if ( (v22 & 0x1F) == 8 )
        {
          ObjectA = *(DXGSYNCOBJECT **)(v21 + 16LL * (unsigned int)v20);
          goto LABEL_25;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    ObjectA = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_10;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v23);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  Global = DXGGLOBAL_GetGlobal();
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 8);
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
LABEL_10:
  if ( !ObjectA )
  {
    WdLogSingleEntry1(3LL, v5);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 50) - 5) <= 1 )
  {
    WdLogSingleEntry1(3LL, 2832LL);
    return 3221225485LL;
  }
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, a5, 0, DXGSYNCOBJECT::FlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
