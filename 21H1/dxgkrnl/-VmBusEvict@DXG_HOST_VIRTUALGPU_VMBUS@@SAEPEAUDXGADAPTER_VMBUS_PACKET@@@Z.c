/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C970
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0144A1C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  __int64 v16; // rax
  char v18[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v19; // [rsp+28h] [rbp-38h]
  int v20; // [rsp+30h] [rbp-30h]
  _D3DKMT_EVICT v21; // [rsp+38h] [rbp-28h] BYREF
  UINT64 NumBytesToTrim; // [rsp+80h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v19);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v6 = 0;
  v20 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v7 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v7 + 24) = 4271LL;
LABEL_10:
    WdLogEvent5_WdError(v7);
    goto LABEL_11;
  }
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v8 )
  {
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  v10 = *(unsigned int *)(v8 + 32);
  if ( !(_DWORD)v10
    || (v9 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 36) % v10,
        ((unsigned __int64)*((unsigned int *)a1 + 22) - 36) / v10 < 4) )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v7 + 24) = *((unsigned int *)a1 + 22);
    goto LABEL_10;
  }
  *(_QWORD *)(&v21.Flags + 1) = 0LL;
  HIDWORD(v21.NumBytesToTrim) = 0;
  v21.Flags.Value = *(_DWORD *)(v8 + 28);
  v21.AllocationList = (const D3DKMT_HANDLE *)(v8 + 36);
  v21.NumAllocations = *(_DWORD *)(v8 + 32);
  v21.hDevice = *(_DWORD *)(v8 + 24);
  v11 = DxgkEvictInternal(&v21, 0, 0LL);
  v14 = v11;
  if ( v11 >= 0 )
  {
    v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    NumBytesToTrim = v21.NumBytesToTrim;
    VmBusCompletePacket(v15, &NumBytesToTrim, 8u);
LABEL_12:
    v6 = v5;
    goto LABEL_13;
  }
  v16 = WdLogNewEntry5_WdError(v13, v12);
  *(_QWORD *)(v16 + 24) = v14;
  WdLogEvent5_WdError(v16);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v6;
}
