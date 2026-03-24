/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C0162400
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C0248318 (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  DXGADAPTER *v14; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v16; // [rsp+48h] [rbp-20h]
  char v17; // [rsp+50h] [rbp-18h]
  struct DXGADAPTER *v18; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v18 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v14, (unsigned int)v1, Current, &v18, 1);
  v9 = v18;
  if ( !v18 )
  {
    v13 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v13 + 24) = v1;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    if ( v14 )
      DXGADAPTER::ReleaseReference(v14);
    return 3221225485LL;
  }
  v16 = v18;
  v17 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( *((_DWORD *)v9 + 50) == 1 )
  {
    v10 = *((_QWORD *)v18 + 338);
    if ( v10 )
    {
      if ( *((_BYTE *)v18 + 209) )
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v18 + 4240));
      else
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 640) + 8LL) + 1096LL))(*(_QWORD *)(v10 + 648));
    }
  }
  if ( v17 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( v14 )
    DXGADAPTER::ReleaseReference(v14);
  return 0LL;
}
