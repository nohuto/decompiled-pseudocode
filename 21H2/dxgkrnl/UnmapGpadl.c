/*
 * XREFs of UnmapGpadl @ 0x1C0384100
 * Callers:
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0337008 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1C0337554 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373350 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 424);
  if ( (v3 & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v7 = v6 + 160;
    goto LABEL_7;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)(v7 + 16), 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v11 = 1;
  if ( *(_BYTE *)(v7 + 68) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C0131DE8)(*(_QWORD *)v7, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v8 = -a3;
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, v8);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 72));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 80), v8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
