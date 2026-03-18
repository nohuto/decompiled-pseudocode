/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F0D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v13; // rdx
  char v14; // al
  int v15; // ecx
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  struct ADAPTER_RENDER **v18; // [rsp+60h] [rbp-A8h]
  _BYTE v19[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[8]; // [rsp+88h] [rbp-80h] BYREF
  DXGPUSHLOCK *v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+98h] [rbp-70h]
  _BYTE v24[144]; // [rsp+A8h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v23 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v4 )
      goto LABEL_22;
    v18 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 10) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v18, 0LL);
    LODWORD(v17) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
    if ( (int)v17 < 0 )
    {
LABEL_21:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
      v3 = 1;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
      goto LABEL_22;
    }
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v20);
    v6 = *((_QWORD *)a1 + 11);
    v7 = *(_DWORD *)(v4 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 248));
    v8 = (v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *(_DWORD *)(v6 + 296) )
    {
      v9 = *(_QWORD *)(v6 + 280);
      v10 = *(_DWORD *)(v9 + 16 * v8 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        if ( (v10 & 0x1F) == 8 )
        {
          v11 = *(_QWORD *)(v9 + 16LL * (unsigned int)v8);
          goto LABEL_12;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v6 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v11 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v11 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v11, v18[350]);
      v14 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v13 + 624) + 8LL) + 872LL))(VidSchSyncObject);
      v15 = v17;
      if ( !v14 )
        v15 = -1071775484;
      LODWORD(v17) = v15;
      if ( v19[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
    else
    {
      WdLogSingleEntry2(2LL, v6, *(unsigned int *)(v4 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
        v6,
        *(unsigned int *)(v4 + 24),
        0LL,
        0LL,
        0LL);
      LODWORD(v17) = -1073741811;
    }
    if ( v20[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v20);
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, 4216LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4216LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v3;
}
