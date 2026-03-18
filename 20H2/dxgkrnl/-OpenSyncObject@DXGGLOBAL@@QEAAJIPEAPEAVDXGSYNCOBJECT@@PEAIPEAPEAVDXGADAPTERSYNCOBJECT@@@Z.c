/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016CB20
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C016C908 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243380 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02AA188 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02AA4AC (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C000 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001C0B8 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010D0C0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        __int64 a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v33[16]; // [rsp+60h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v22 + 24) = 2774LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v23 + 24) = 2775LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v24 + 24) = 2776LL;
    WdLogEvent5_WdAssertion(v24);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v10, v9);
  v13 = *((_BYTE *)Current + 347);
  if ( (v13 & 0x30) != 0 )
  {
    if ( (v13 & 0x20) != 0 )
      v25 = *((_QWORD *)Current + 62);
    else
      v25 = (unsigned __int64)Current & -(__int64)((v13 & 0x10) != 0);
    v26 = v25 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 208));
    v27 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v25 + 256) )
    {
      v28 = *(_QWORD *)(v25 + 240);
      v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) != 0 )
      {
        v30 = v29 & 0x1F;
        if ( (_BYTE)v30 == 8 )
        {
          ObjectA = *(DXGSYNCOBJECT **)(v28 + 16LL * (unsigned int)v27);
          goto LABEL_25;
        }
        v31 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v30);
        *(_QWORD *)(v31 + 24) = 267LL;
        WdLogEvent5_WdError(v31);
      }
    }
    ObjectA = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v26, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_10;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33, v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v5, 8);
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v17);
LABEL_10:
  if ( !ObjectA )
  {
    v32 = WdLogNewEntry5_WdWarning(v18, v17, v20);
    *(_QWORD *)(v32 + 24) = v5;
LABEL_29:
    WdLogEvent5_WdWarning(v32);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 48) - 5) <= 1 )
  {
    v32 = WdLogNewEntry5_WdWarning(v18, v17, v20);
    *(_QWORD *)(v32 + 24) = 2809LL;
    goto LABEL_29;
  }
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, a5, 0, DXGSYNCOBJECT::FlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
