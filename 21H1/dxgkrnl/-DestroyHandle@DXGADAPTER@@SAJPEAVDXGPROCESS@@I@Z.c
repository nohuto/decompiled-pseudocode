/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00DAB60
 * Callers:
 *     DxgkCloseAdapterImpl @ 0x1C0116740 (DxgkCloseAdapterImpl.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01319E0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0132734 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0160B10 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C021D2E8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02392B0 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00DC09C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010E240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **this, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbx
  struct _KTHREAD *v5; // r8
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct ADAPTER_RENDER *v13; // rdx
  __int64 v15; // rax
  struct _KTHREAD *v16; // rsi
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( !this )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v15 + 24) = 3337LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, this);
  v4 = (v2 >> 6) & 0xFFFFFF;
  if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
  {
    v16 = this[62];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v16 + 208));
    if ( (unsigned int)v4 < *((_DWORD *)v16 + 64) )
    {
      v17 = *((_QWORD *)v16 + 30);
      v18 = *(_DWORD *)(v17 + 16 * v4 + 8);
      if ( ((v2 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v4 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      {
        v19 = 2 * v4;
        v20 = v18 & 0x1F;
        if ( (_BYTE)v20 == 1 )
        {
          v9 = *(_QWORD *)(v17 + 8 * v19);
          goto LABEL_24;
        }
        v21 = WdLogNewEntry5_WdError((v2 >> 25) & 0x60, v20);
        *(_QWORD *)(v21 + 24) = 267LL;
        WdLogEvent5_WdError(v21);
      }
    }
    v9 = 0LL;
LABEL_24:
    ExReleasePushLockSharedEx((char *)v16 + 208, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 64) )
  {
    v5 = this[30];
    v6 = *((_DWORD *)v5 + 4 * (unsigned int)v4 + 2);
    if ( ((v2 >> 25) & 0x60) == (*((_BYTE *)v5 + 16 * (unsigned int)v4 + 8) & 0x60)
      && (v6 & 0x2000) == 0
      && (v6 & 0x1F) != 0 )
    {
      v7 = 2 * v4;
      v8 = v6 & 0x1F;
      if ( (_BYTE)v8 == 1 )
      {
        v9 = *((_QWORD *)v5 + v7);
        goto LABEL_12;
      }
      v10 = WdLogNewEntry5_WdError((v2 >> 25) & 0x60, v8);
      *(_QWORD *)(v10 + 24) = 267LL;
      WdLogEvent5_WdError(v10);
    }
  }
  v9 = 0LL;
LABEL_12:
  if ( v9 )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 30), v2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v9 + 136, 0LL);
    v13 = *(struct ADAPTER_RENDER **)(v9 + 2680);
    if ( v13 )
    {
      if ( *(_DWORD *)(v9 + 232) == -1 )
      {
        v22 = WdLogNewEntry5_WdWarning(v11, v13, v12);
        *(_QWORD *)(v22 + 24) = 3367LL;
        WdLogEvent5_WdWarning(v22);
      }
      else
      {
        DXGPROCESS::CloseAdapter((DXGPROCESS *)this, v13);
      }
    }
    ExReleasePushLockSharedEx(v9 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v9);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    return 3221225485LL;
  }
}
