/*
 * XREFs of ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x1C02445B4
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C00D6E10 (DxgkGetContextSchedulingPriority.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C0254EC0 (DxgkGetContextInProcessSchedulingPriority.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int *a4,
        unsigned __int8 a5)
{
  int v10; // ecx
  struct _MDL *v11; // [rsp+28h] [rbp-48h]
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+50h] [rbp-20h]
  unsigned __int8 v18; // [rsp+54h] [rbp-1Ch]
  _DWORD v19[2]; // [rsp+58h] [rbp-18h] BYREF

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 380) <= 0x10u )
    return 0LL;
  v13 = 0LL;
  v15 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v17 = *((_DWORD *)a3 + 7);
  v18 = a5;
  v16 = 61;
  v12 = 8;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x20u, v19, &v12, v11);
  if ( v10 >= 0 )
  {
    if ( v12 >= 8 )
    {
      v10 = v19[0];
      if ( v19[0] >= 0 )
        *a4 = v19[1];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v10;
}
