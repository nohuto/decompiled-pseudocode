/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0167C20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0336544 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369690 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C000A6C8 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C01681E4 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0168834 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0168CB0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016DF90 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        __int64 a1,
        DXGDEVICE **a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        _QWORD *a10,
        char a11)
{
  __int64 v15; // rdx
  DXGPROCESS *Current; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  DXGDEVICE *v20; // rax
  DXGDEVICE *v21; // rbx
  int v22; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rsi
  __int64 v25; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 1543LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1543LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 349)) )
  {
    WdLogSingleEntry1(1LL, 1546LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsCoreResourceSharedOwner() && pDisplayAdapter->IsDisplayAdapter())",
      1546LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1547LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppDevice != NULL", 1547LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 1553LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1553LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 24LL));
  v19 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(1920LL, v15, v17, v18);
  if ( !v19
    || (v20 = (DXGDEVICE *)DXGDEVICE::DXGDEVICE(v19, a1, a9, a10, a3, (__int64)Current, a4, (__int64)a5, a8, a11),
        (v21 = v20) == 0LL) )
  {
    v22 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGDEVICE class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  v22 = DXGDEVICE::Initialize(v20, a6, a7);
  if ( v22 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState(v21, 0LL);
    DXGDEVICE::`scalar deleting destructor'(v21);
LABEL_27:
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)(a1 + 16));
    return (unsigned int)v22;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)v21 + 108) == 2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 56) != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1613LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLockCdd.IsExclusiveOwner()",
        1613LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v24 = a1 + 160;
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 32) != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1618LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
        1618LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v24 = a1 + 144;
  }
  v25 = *(_QWORD *)v24;
  if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
    __fastfail(3u);
  *(_QWORD *)v21 = v25;
  *((_QWORD *)v21 + 1) = v24;
  *(_QWORD *)(v25 + 8) = v21;
  *(_QWORD *)v24 = v21;
  DXGPROCESS::AddDevice(Current, v21);
  *a2 = v21;
  return (unsigned int)v22;
}
