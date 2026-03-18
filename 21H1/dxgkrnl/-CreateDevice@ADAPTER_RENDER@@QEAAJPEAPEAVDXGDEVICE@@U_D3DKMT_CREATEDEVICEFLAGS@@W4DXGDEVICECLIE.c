/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00EABC0
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00EA600 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014D494 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C021ECD4 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239E90 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0280BB4 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C0008160 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A238 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC360 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EAD44 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00EADB8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C00EB46C (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        __int64 *a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGPROCESS *Current; // rbp
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v29; // rdi
  DXGADAPTER *v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v32 + 24) = 1526LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 334)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v33 + 24) = 1529LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v34 + 24) = 1530LL;
    WdLogEvent5_WdAssertion(v34);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v35 + 24) = 1536LL;
    WdLogEvent5_WdAssertion(v35);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  v19 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x780uLL);
  if ( v19 )
    v24 = DXGDEVICE::DXGDEVICE(v19, a1, a9, a10, a3, Current, a4, a5, a8);
  else
    v24 = 0LL;
  if ( !v24 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    v27 = -1073741801;
    *(_QWORD *)(v36 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v36);
LABEL_28:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v27;
  }
  v27 = DXGDEVICE::Initialize((DXGDEVICE *)v24, a6, a7);
  if ( v27 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v24, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v24);
    goto LABEL_28;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v24 + 432) == 2 )
  {
    if ( a1[7] != CurrentThread )
    {
      v37 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v37 + 24) = 1596LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v29 = a1 + 20;
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      v38 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v38 + 24) = 1601LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v29 = a1 + 18;
  }
  v30 = *v29;
  if ( *((DXGADAPTER ***)*v29 + 1) != v29 )
    __fastfail(3u);
  *(_QWORD *)v24 = v30;
  *(_QWORD *)(v24 + 8) = v29;
  *((_QWORD *)v30 + 1) = v24;
  *v29 = (DXGADAPTER *)v24;
  DXGPROCESS::AddDevice(Current, (struct DXGDEVICE *)v24);
  *a2 = v24;
  return (unsigned int)v27;
}
