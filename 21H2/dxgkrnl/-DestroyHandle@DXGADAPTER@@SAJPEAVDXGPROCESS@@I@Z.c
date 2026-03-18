/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C016D80C
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C015CA68 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1C016D700 (DxgkCloseAdapterImpl.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BEDD0 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFB40 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFF20 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368810 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // eax
  struct _KTHREAD *v8; // r8
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rbx
  char *v12; // rcx
  struct ADAPTER_RENDER *v13; // rdx
  int v15; // r9d
  struct _KTHREAD *v16; // rsi
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rbx
  _BYTE v20[8]; // [rsp+50h] [rbp-48h] BYREF
  char *v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h]

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 3364LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3364LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = (char *)(this + 31);
  if ( this != (struct _KTHREAD **)-248LL && this[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)v21 + 6);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (const EVENT_DESCRIPTOR *)"g", v5, v15);
    }
    ExAcquirePushLockExclusiveEx(v21, 0LL);
  }
  *((_QWORD *)v21 + 1) = KeGetCurrentThread();
  v6 = (a2 >> 6) & 0xFFFFFF;
  v7 = *((_DWORD *)this + 106) >> 8;
  v22 = 2;
  if ( (v7 & 1) != 0 )
  {
    v16 = this[76];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v16 + 248));
    if ( (unsigned int)v6 < *((_DWORD *)v16 + 74) )
    {
      v17 = *((_QWORD *)v16 + 35);
      v18 = *(_DWORD *)(v17 + 16 * v6 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v6 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      {
        v19 = 2 * v6;
        if ( (v18 & 0x1F) == 1 )
        {
          v11 = *(_QWORD *)(v17 + 8 * v19);
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
LABEL_35:
    ExReleasePushLockSharedEx((char *)v16 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_16;
  }
  if ( (unsigned int)v6 < *((_DWORD *)this + 74) )
  {
    v8 = this[35];
    v9 = *((_DWORD *)v8 + 4 * (unsigned int)v6 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v8 + 16 * (unsigned int)v6 + 8) & 0x60)
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      v10 = 2 * v6;
      if ( (v9 & 0x1F) == 1 )
      {
        v11 = *((_QWORD *)v8 + v10);
        goto LABEL_16;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = 0LL;
LABEL_16:
  if ( v11 )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 35), a2);
    v12 = v21;
    v22 = 0;
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v11 + 136, 0LL);
    v13 = *(struct ADAPTER_RENDER **)(v11 + 2800);
    if ( v13 )
    {
      if ( *(_DWORD *)(v11 + 240) == -1 )
        WdLogSingleEntry1(3LL, 3394LL);
      else
        DXGPROCESS::CloseAdapter((DXGPROCESS *)this, v13);
    }
    ExReleasePushLockSharedEx(v11 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    return 3221225485LL;
  }
}
