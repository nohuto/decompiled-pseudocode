/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02415F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F69C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0113088 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  PERESOURCE *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v24; // r9
  char v25; // al
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  struct ADAPTER_RENDER **v30; // [rsp+30h] [rbp-D8h]
  _BYTE v31[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v32[16]; // [rsp+48h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+68h] [rbp-A0h]
  _BYTE v35[144]; // [rsp+78h] [rbp-90h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v33[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v34 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v7 )
      goto LABEL_22;
    v30 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, (struct DXGADAPTER *const)v30, 0LL);
    LODWORD(v29) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
    if ( (int)v29 < 0 )
    {
LABEL_21:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v29, 4u);
      v5 = 1;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35, v27);
      goto LABEL_22;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v9, v8);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v32, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v32, v11);
    v12 = *((_QWORD *)a1 + 6);
    v13 = *(_DWORD *)(v7 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 208));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v12 + 256) )
    {
      v15 = *(_QWORD *)(v12 + 240);
      v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        v17 = v16 & 0x1F;
        if ( (_BYTE)v17 == 8 )
        {
          v19 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
          goto LABEL_12;
        }
        v18 = WdLogNewEntry5_WdError(v17, v15);
        *(_QWORD *)(v18 + 24) = 267LL;
        WdLogEvent5_WdError(v18);
      }
    }
    v19 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v12 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v19 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGFASTMUTEX *const)(v19 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v19, v30[338]);
      v25 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v24 + 8) + 872LL))(VidSchSyncObject);
      v26 = v29;
      if ( !v25 )
        v26 = -1071775484;
      LODWORD(v29) = v26;
      if ( v31[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, 3223191812LL);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v22 + 24) = v12;
      *(_QWORD *)(v22 + 32) = *(unsigned int *)(v7 + 24);
      WdLogEvent5_WdError(v22);
      LODWORD(v29) = -1073741811;
    }
    if ( v32[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v32);
    goto LABEL_21;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3829LL;
  WdLogEvent5_WdError(v6);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v5;
}
