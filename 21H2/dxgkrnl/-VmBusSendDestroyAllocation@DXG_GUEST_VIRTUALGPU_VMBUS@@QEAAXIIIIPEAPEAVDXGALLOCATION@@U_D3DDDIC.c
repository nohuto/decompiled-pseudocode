/*
 * XREFs of ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0247B08
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C012A624 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0227574 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0227668 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a7)
{
  int v9; // r15d
  __int64 v11; // rax
  unsigned int v12; // esi
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGKVMB_COMMAND_BASE *v18; // rbx
  __int64 v19; // rax
  _DWORD *v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  struct _MDL *v24; // [rsp+28h] [rbp-20h]

  v9 = a2;
  if ( a5 <= 0x8000 )
  {
    v12 = 48;
    if ( a5 )
      v12 = 4 * a5 + 44;
    v13 = (char *)operator new(v12, 0x4B677844u, 1, (POOL_TYPE)512);
    v18 = (struct DXGKVMB_COMMAND_BASE *)v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      *((_DWORD *)v13 + 3) = 0;
      *((_DWORD *)v13 + 4) = 5;
      *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v13 + 9) = a7;
      *((_DWORD *)v13 + 6) = a3;
      *((_DWORD *)v13 + 2) = v9;
      *((_DWORD *)v13 + 7) = a4;
      *((_DWORD *)v13 + 8) = a5;
      if ( a5 )
      {
        v21 = v13 + 40;
        v22 = a5;
        do
        {
          v23 = (__int64)*a6++;
          *v21++ = *(_DWORD *)(v23 + 96);
          --v22;
        }
        while ( v22 );
      }
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v18, v12, 0LL, 0LL, v24);
      operator delete[](v18);
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = 8788LL;
      WdLogEvent5_WdLowResource(v19);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 8780LL;
    WdLogEvent5_WdError(v11);
  }
}
