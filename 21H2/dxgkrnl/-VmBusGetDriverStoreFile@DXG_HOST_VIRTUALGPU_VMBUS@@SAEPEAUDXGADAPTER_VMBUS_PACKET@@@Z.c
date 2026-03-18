/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E000
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C005C374 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0301C7C (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C03032A0 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0303BB0 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C03042AC (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C0387230 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r9
  CDriverStoreCopy *v8; // rax
  CDriverStoreCopy *v9; // rax
  int v10; // eax
  CDriverStoreCopy *v11; // rcx
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  _BYTE v17[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+80h] [rbp-80h]
  _DWORD v20[148]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v19 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v4 )
      goto LABEL_25;
    v5 = *((_QWORD *)a1 + 10);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(v5 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v15);
    v16 = 2;
    memset(v20, 0, 0x248uLL);
    if ( *(_BYTE *)(v5 + 153) )
    {
      WdLogSingleEntry1(3LL, 5605LL);
      v20[4] = -1073741790;
LABEL_24:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v20, 0x248u);
      v3 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v4 + 24) )
    {
LABEL_21:
      v11 = *(CDriverStoreCopy **)(v5 + 336);
      if ( v11 )
        CDriverStoreCopy::`scalar deleting destructor'(v11);
      *(_QWORD *)(v5 + 336) = 0LL;
      goto LABEL_24;
    }
    v6 = *(_QWORD *)(v5 + 16);
    v13 = 520;
    v20[4] = DpiGetDriverStorePath(*(_QWORD *)(v6 + 216), &v20[15], &v13);
    if ( v20[4] < 0 )
      goto LABEL_24;
    v20[4] = 0;
    if ( !*(_QWORD *)(v5 + 336) )
    {
      v8 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, 256LL, v7);
      if ( v8 )
      {
        v9 = CDriverStoreCopy::CDriverStoreCopy(v8);
        *(_QWORD *)(v5 + 336) = v9;
        if ( v9 )
        {
          HIWORD(v20[144]) = 0;
          CDriverStoreCopy::SetRootDirectory(
            *(CDriverStoreCopy **)(v5 + 336),
            *(struct DXGADAPTER **)(v5 + 16),
            (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20);
          v10 = v20[4];
          LOWORD(v20[15]) = 0;
          if ( v20[4] < 0 )
            goto LABEL_20;
          goto LABEL_12;
        }
      }
      else
      {
        *(_QWORD *)(v5 + 336) = 0LL;
      }
      v20[4] = -1073741801;
      goto LABEL_24;
    }
LABEL_12:
    CDriverStoreCopy::EnumDirectory(
      *(CDriverStoreCopy **)(v5 + 336),
      (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20);
    while ( 1 )
    {
      v10 = v20[4];
      if ( v20[4] != -2147483642 )
        break;
      if ( !CDriverStoreCopy::ProcessNextDirectory(
              *(CDriverStoreCopy **)(v5 + 336),
              (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20) )
      {
        v10 = v20[4];
        break;
      }
    }
    if ( v10 >= 0 )
      goto LABEL_24;
LABEL_20:
    if ( v10 == -2147483642 )
      goto LABEL_24;
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, 5593LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5593LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v3;
}
