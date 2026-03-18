/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00E4204 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EE620 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0111200 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0114EC4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0116270 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0119594 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0146E2C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014750C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022B880 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022BC40 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C0236140 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02531D4 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027E814 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C027EA0C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02976BC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02FBFAC (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0108410 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0169E74 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0246BF8 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        char **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v14; // ebx
  __int64 v15; // r13
  unsigned int v16; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct DXGALLOCATION *v21; // rdi
  struct DXGRESOURCE *v22; // rsi
  char **v23; // r14
  _QWORD *v24; // rax
  struct DXGALLOCATION *v25; // r9
  char **v26; // rsi
  _QWORD *v27; // rax
  struct DXGALLOCATION *v28; // r9
  struct DXGALLOCATION *v29; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2;
  v12 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 6343LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a6.0;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v15 + 209) )
  {
    if ( a4 )
      v12 = *((_DWORD *)a4 + 5);
    v16 = *((_DWORD *)this + 110);
    Current = DXGPROCESS::GetCurrent(v11, v10);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4240),
      *((_DWORD *)Current + 106),
      v16,
      v12,
      v8,
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v14);
    if ( a4 )
      *((_DWORD *)a4 + 5) = 0;
    if ( (_DWORD)v8 )
    {
      v18 = a3;
      v19 = v8;
      do
      {
        v20 = (__int64)*v18++;
        *(_DWORD *)(v20 + 96) = 0;
        --v19;
      }
      while ( v19 );
    }
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(
      this,
      a4,
      1,
      *((struct DXGALLOCATION **)a4 + 3),
      a5,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v14);
  }
  else
  {
    v29 = 0LL;
    DXGDEVICE::RemoveAllocationsAndTransferToList(this, a3, v8, &v29);
    v21 = v29;
    if ( v29 )
    {
      v22 = (struct DXGRESOURCE *)*((_QWORD *)v29 + 5);
      if ( v22 )
      {
        v23 = a5;
        do
        {
          v24 = (_QWORD *)((char *)v21 + 64);
          v25 = v21;
          v21 = (struct DXGALLOCATION *)*((_QWORD *)v21 + 8);
          *v24 = 0LL;
          DXGDEVICE::TerminateAllocations(this, v22, 0, v25, v23, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v14);
        }
        while ( v21 );
      }
      else
      {
        v26 = a5;
        do
        {
          v27 = (_QWORD *)((char *)v21 + 64);
          v28 = v21;
          v21 = (struct DXGALLOCATION *)*((_QWORD *)v21 + 8);
          *v27 = 0LL;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v28, v26, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v14);
        }
        while ( v21 );
      }
    }
  }
}
