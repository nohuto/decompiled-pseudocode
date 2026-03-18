/*
 * XREFs of ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1C026A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1C024D1F0 (-VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I.c)
 */

void __fastcall DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v5; // r12
  _QWORD **v6; // r15
  _QWORD *i; // rbx
  struct _KTHREAD **v8; // rbp
  struct _KTHREAD **j; // rsi
  struct _KTHREAD **v10; // r14
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-38h]

  if ( RtlCompareMemory(a1 + 80, &WNF_DX_VIDMM_TRIM_NOTIFICATION, 8uLL) == 8 )
  {
    Global = DXGGLOBAL::GetGlobal(v3, v2);
    v5 = (char *)Global + 432;
    v6 = (_QWORD **)((char *)Global + 1584);
    DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 432));
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = (struct _KTHREAD **)(i - 1);
      if ( i - 1 == *((_QWORD **)a1 + 5) )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, v8 + 12, 0);
        DXGPUSHLOCK::AcquireShared(v16);
        v17 = 1;
        for ( j = (struct _KTHREAD **)v8[5]; j != v8 + 5; j = (struct _KTHREAD **)*j )
        {
          v10 = j - 17;
          if ( *((_DWORD *)*(j - 4) + 88) > 0x10u )
          {
            v11 = v10[2];
            if ( *((_DWORD *)v11 + 79) == *((_DWORD *)a1 + 25) && *((_DWORD *)v11 + 80) == *((_DWORD *)a1 + 26) )
            {
              *(_QWORD *)(a1 + 100) = v10[40];
              if ( (int)DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
                          v8 + 16,
                          (struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *)(a1 + 56),
                          *((_DWORD *)a1 + 12)) < 0 )
              {
                v14 = WdLogNewEntry5_WdError(v13, v12);
                *(_QWORD *)(v14 + 24) = v10;
                WdLogEvent5_WdError(v14);
              }
            }
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      }
    }
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
