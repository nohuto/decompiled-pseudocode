/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0004468 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006C68 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00078F0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D69C0 (-VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6044 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F1850 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0109E80 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C010A2D0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010D0C0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0112B00 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0129C34 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D570 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DA90 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026CC5C (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0276120 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C028FD28 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C02B1630 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C015430C (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( a3 > 31 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3 <= 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 151LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v9 = a1[2];
  if ( (unsigned int)v9 >= a1[4] )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v19 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0x1F) != 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, v10);
    *(_QWORD *)(v20 + 24) = 170LL;
    WdLogEvent5_WdAssertion(v20);
    v10 = *(_QWORD *)a1;
  }
  v11 = *(unsigned int *)(v10 + 16LL * a1[2]);
  v12 = 2LL * a1[3];
  a1[2] = v11;
  v13 = *(_DWORD *)(v10 + 8 * v12);
  v14 = a1[4];
  a1[3] = v13;
  if ( (unsigned int)v11 >= v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v21 + 24) = 177LL;
    WdLogEvent5_WdAssertion(v21);
    v13 = a1[3];
    v14 = a1[4];
  }
  if ( v13 >= v14 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v22 + 24) = 178LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v15 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v9) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ a3) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((((v15 >> 5) & 3) << 24) | v9 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) >> 7) & 0x3F;
}
