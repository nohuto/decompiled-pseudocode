/*
 * XREFs of ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0269DFC
 * Callers:
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C026C024 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(
        DXGGLOBAL *this,
        __int64 *a2,
        unsigned int a3,
        char a4)
{
  char *v4; // rdi
  __int64 v9; // r8
  __int64 **i; // rbx
  __int64 *v11; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl

  v4 = (char *)this + 1656;
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1656));
  for ( i = (__int64 **)*((_QWORD *)this + 211); i != (__int64 **)((char *)this + 1688) && i; i = (__int64 **)*i )
  {
    if ( i[4] == a2 )
    {
      v11 = i[5];
      if ( v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v9) = a4;
        ((void (__fastcall *)(__int64 *, _QWORD, __int64, __int64 *))v11)(a2, a3, v9, i[3]);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
          v15[3] = 275LL;
          v15[4] = 16LL;
          v15[5] = this;
          v15[6] = CurrentIrql;
          v16 = KeGetCurrentIrql();
          v15[7] = v16;
          WdLogEvent5_WdCriticalError(v15);
        }
      }
    }
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
