/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02419B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C0040374 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0261870 (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0262C3C (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0263564 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0263CA0 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C02C6708 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  CDriverStoreCopy *v14; // rax
  CDriverStoreCopy *v15; // rax
  int v16; // eax
  CDriverStoreCopy *v17; // rcx
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v20[8]; // [rsp+28h] [rbp-D8h] BYREF
  DXGPUSHLOCK *v21; // [rsp+30h] [rbp-D0h]
  int v22; // [rsp+38h] [rbp-C8h]
  _BYTE v23[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+50h] [rbp-B0h]
  _DWORD v26[148]; // [rsp+60h] [rbp-A0h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v25 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v7 )
      goto LABEL_26;
    v8 = *((_QWORD *)a1 + 5);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(v8 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v21);
    v22 = 2;
    memset(v26, 0, 0x248uLL);
    if ( *(_BYTE *)(v8 + 153) )
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 5059LL;
      WdLogEvent5_WdWarning(v12);
      v26[4] = -1073741790;
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v26, 0x248u);
      v5 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(v7 + 24) )
    {
      v13 = *(_QWORD *)(v8 + 16);
      v19 = 520;
      v26[4] = DpiGetDriverStorePath(*(_QWORD *)(v13 + 216), &v26[15], &v19);
      if ( v26[4] < 0 )
        goto LABEL_25;
      v26[4] = 0;
      if ( *(_QWORD *)(v8 + 312) )
        goto LABEL_15;
      v14 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, PagedPool);
      if ( v14 )
        v15 = CDriverStoreCopy::CDriverStoreCopy(v14);
      else
        v15 = 0LL;
      *(_QWORD *)(v8 + 312) = v15;
      if ( !v15 )
      {
        v26[4] = -1073741801;
        goto LABEL_25;
      }
      HIWORD(v26[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v8 + 312),
        *(struct DXGADAPTER **)(v8 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v26);
      v16 = v26[4];
      LOWORD(v26[15]) = 0;
      if ( v26[4] >= 0 )
      {
LABEL_15:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v8 + 312),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v26);
        while ( 1 )
        {
          v16 = v26[4];
          if ( v26[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v8 + 312),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v26) )
          {
            v16 = v26[4];
            break;
          }
        }
        if ( v16 >= 0 )
          goto LABEL_25;
      }
      if ( v16 == -2147483642 )
        goto LABEL_25;
    }
    v17 = *(CDriverStoreCopy **)(v8 + 312);
    if ( v17 )
      CDriverStoreCopy::`scalar deleting destructor'(v17);
    *(_QWORD *)(v8 + 312) = 0LL;
    goto LABEL_25;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 5047LL;
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v5;
}
