/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C01DE900
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C037775C (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // r8
  DXGADAPTER *v9; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+48h] [rbp-20h]
  char v12; // [rsp+50h] [rbp-18h]
  struct DXGADAPTER *v13; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v4 = *a1;
  v13 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress, a3, a4);
  if ( !Current )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v9, v4, Current, &v13, 1);
  v6 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry2(3LL, v4, -1073741811LL);
    if ( v9 )
      DXGADAPTER::ReleaseReference(v9);
    return 3221225485LL;
  }
  v11 = v13;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)v6 + 50) == 1 )
  {
    v7 = *((_QWORD *)v13 + 350);
    if ( v7 )
    {
      if ( *((_BYTE *)v13 + 209) )
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v13 + 4344));
      else
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 648) + 8LL) + 1104LL))(*(_QWORD *)(v7 + 656));
    }
  }
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( v9 )
    DXGADAPTER::ReleaseReference(v9);
  return 0LL;
}
