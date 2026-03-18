/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C019EB60 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01EF924 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBAC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBF00 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E4610 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F890 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C03301AC (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C03606E0 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03BBD90 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02E6B50 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0376620 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        __int64 a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 v11; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v12; // ebx
  __int64 v13; // rcx
  DXG_GUEST_VIRTUALGPU_VMBUS *v14; // r13
  unsigned int v15; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct DXGALLOCATION *v20; // rdi
  struct DXGRESOURCE *v21; // rsi
  struct COREDEVICEACCESS *v22; // r14
  _QWORD *v23; // rax
  struct DXGALLOCATION *v24; // r9
  struct COREDEVICEACCESS *v25; // rsi
  _QWORD *v26; // rax
  struct DXGALLOCATION *v27; // r9
  struct DXGALLOCATION *v28; // [rsp+80h] [rbp+8h] BYREF

  v7 = 0;
  v8 = (unsigned int)a2;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry1(1LL, 6528LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
      6528LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = a6.0;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v13 + 209) )
  {
    v14 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4344);
    if ( a4 )
      v7 = *((_DWORD *)a4 + 5);
    v15 = *((_DWORD *)this + 110);
    Current = DXGPROCESS::GetCurrent(v13, a2, (__int64)a3, (__int64)a4);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      v14,
      *((_DWORD *)Current + 126),
      v15,
      v7,
      v8,
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v12);
    if ( a4 )
      *((_DWORD *)a4 + 5) = 0;
    if ( (_DWORD)v8 )
    {
      v17 = a3;
      v18 = v8;
      do
      {
        v19 = (__int64)*v17++;
        *(_BYTE *)(v19 + 128) &= ~4u;
        --v18;
      }
      while ( v18 );
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
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v12);
  }
  else
  {
    v28 = 0LL;
    DXGDEVICE::RemoveAllocationsAndTransferToList(this, a3, v8, &v28);
    v20 = v28;
    if ( v28 )
    {
      v21 = (struct DXGRESOURCE *)*((_QWORD *)v28 + 5);
      if ( v21 )
      {
        v22 = a5;
        do
        {
          v23 = (_QWORD *)((char *)v20 + 64);
          v24 = v20;
          v20 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
          *v23 = 0LL;
          DXGDEVICE::TerminateAllocations(this, v21, 0, v24, v22, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v12);
        }
        while ( v20 );
      }
      else
      {
        v25 = a5;
        do
        {
          v26 = (_QWORD *)((char *)v20 + 64);
          v27 = v20;
          v20 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
          *v26 = 0LL;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v27, v25, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v12);
        }
        while ( v20 );
      }
    }
  }
}
