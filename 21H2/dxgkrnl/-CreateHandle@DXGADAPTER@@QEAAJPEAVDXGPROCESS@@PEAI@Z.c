/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C011FA24
 * Callers:
 *     ?VmBusOpenAdapterCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9E60 (-VmBusOpenAdapterCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C011F800 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C013A108 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243980 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0285440 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006860 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007634 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0007BA0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C011FB04 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  struct ADAPTER_RENDER *v7; // rdx
  int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v11 + 24) = 3275LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v6 = DXGPROCESS::AllocHandleSafe((__int64)a2, (__int64)this, 1u);
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v6 )
    {
      v7 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 338);
      if ( !v7 || (v8 = DXGPROCESS::OpenAdapter(a2, v7, (*((_BYTE *)a2 + 347) & 0x10) != 0), v8 >= 0) )
      {
        *a3 = v6;
        return 0LL;
      }
      DXGPROCESS::FreeResourceHandleNoRefSafe(a2, v6);
    }
    else
    {
      v8 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v8;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v10);
    return 3221226166LL;
  }
}
