/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBC04
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB900 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014D494 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C0008160 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC360 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C022B7CC (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE **v15; // rcx
  struct DXGDEVICE **v16; // rdx
  struct DXGDEVICE *v17; // rax
  struct DXGDEVICE **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 1678LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 108) == 2 )
  {
    if ( this[7] == CurrentThread )
      goto LABEL_5;
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v20 + 24) = 1681LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v20 + 24) = 1685LL;
    goto LABEL_23;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 48LL) + 8LL * *((unsigned int *)this[2] + 58));
    if ( v9 )
    {
      if ( *(struct DXGDEVICE **)(v9 + 40) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[204], a2);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
    }
  }
  v10 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 334);
  if ( v10 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, a2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v21 + 24) = 1720LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v22 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v22 + 24) = 1726LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v15[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v16 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v16 != (struct DXGDEVICE *)((char *)a2 + 24))
    || (*v16 = (struct DXGDEVICE *)v15,
        v15[1] = (struct DXGDEVICE *)v16,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v17 = *(struct DXGDEVICE **)a2,
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || (v18 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v18 != a2) )
  {
    __fastfail(3u);
  }
  *v18 = v17;
  *((_QWORD *)v17 + 1) = v18;
  DXGDEVICE::`scalar deleting destructor'(a2);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
