/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242290
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014EADC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0152180 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  _BOOL8 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r13
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rbx
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  signed __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  int v47; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  struct _EX_RUNDOWN_REF *v50; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v51; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v52; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v53[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v54[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  __int128 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  _BYTE v59[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v60[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v61[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v55);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v56 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_47;
    v58 = 0LL;
    v57 = 0LL;
    v10 = *(unsigned int *)(v7 + 128);
    v11 = *(_DWORD *)(v7 + 24) == 0;
    if ( ((_DWORD)v10 == 0) == v11 )
    {
      LODWORD(v58) = -1073741811;
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = 4674LL;
LABEL_45:
      WdLogEvent5_WdError(v12);
      goto LABEL_46;
    }
    if ( !(_DWORD)v10 )
    {
      LODWORD(v58) = DxgkMapGpuVirtualAddress(v7 + 24, v10, v8);
      goto LABEL_42;
    }
    v13 = *(_QWORD *)(v7 + 80);
    if ( v13 >= 0x20 || (v13 & 0xC) != 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v44[3] = *(_QWORD *)(v9 + 80);
      v44[4] = *((_QWORD *)a1 + 6);
      v44[5] = 4689LL;
      WdLogEvent5_WdError(v44);
      LODWORD(v58) = -1073741811;
      goto LABEL_46;
    }
    v51 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, *(unsigned int *)(v9 + 128), Current, &v51);
    v17 = v51;
    if ( *(_DWORD *)(v9 + 128) && !v51 )
    {
      LODWORD(v58) = -1073741811;
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = (int)v58;
      *(_QWORD *)(v18 + 32) = *(unsigned int *)(v9 + 128);
      WdLogEvent5_WdError(v18);
      goto LABEL_12;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v53,
      v51);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v17, 0, v20, 0);
    LODWORD(v58) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59, 0LL);
    if ( (int)v58 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      COREACCESS::~COREACCESS((COREACCESS *)v60);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v53);
LABEL_12:
      v19 = v48;
      if ( v48 )
        goto LABEL_13;
      goto LABEL_46;
    }
    v21 = *((_QWORD *)a1 + 6);
    v22 = *(_DWORD *)(v9 + 56);
    v50 = 0LL;
    v49 = v21;
    v23 = v21 + 208;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v23, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v23 + 24);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockSharedEx(v23, 0LL);
    }
    v27 = (v22 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v49 + 256) )
    {
      v28 = *(_QWORD *)(v49 + 240);
      v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
      if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
      {
        v30 = v29 & 0x1F;
        if ( (_BYTE)v30 == 5 )
        {
          v32 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * (unsigned int)v27);
          goto LABEL_30;
        }
        v31 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27);
        *(_QWORD *)(v31 + 24) = 267LL;
        WdLogEvent5_WdError(v31);
      }
    }
    v32 = 0LL;
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v52, v32);
    ExReleasePushLockSharedEx(v23, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v50, &v52);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52, v33);
    v36 = v50;
    if ( !v50 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v37[3] = -1073741811LL;
      v37[4] = *(unsigned int *)(v9 + 56);
      v37[5] = *((_QWORD *)a1 + 6);
      goto LABEL_32;
    }
    v39 = (_QWORD *)*((_QWORD *)v17 + 2);
    v40 = *(_QWORD *)(v50[1].Count + 16);
    if ( *(_QWORD *)(v40 + 16) != v39[2] )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v37[3] = v17;
      v37[4] = v36;
      v37[5] = -1073741811LL;
LABEL_32:
      WdLogEvent5_WdError(v37);
      LODWORD(v58) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50, v38);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      COREACCESS::~COREACCESS((COREACCESS *)v60);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v53);
      v19 = v48;
      if ( v48 )
      {
LABEL_13:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      }
LABEL_46:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v57, 0x18u);
      v5 = 1;
      goto LABEL_47;
    }
    LOBYTE(v47) = 0;
    LODWORD(v58) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(v39[80] + 8LL)
                                                                                              + 800LL))(
                     v39[81],
                     0LL,
                     v50[3].Count,
                     v9 + 24,
                     v47,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50, v41);
    COREACCESS::~COREACCESS((COREACCESS *)v61);
    COREACCESS::~COREACCESS((COREACCESS *)v60);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v53);
    if ( v48 )
    {
      v43 = _InterlockedDecrement64((volatile signed __int64 *)v48 + 8);
      if ( !v43 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    }
LABEL_42:
    *((_QWORD *)&v57 + 1) = *(_QWORD *)(v9 + 120);
    v45 = *(_QWORD *)(v9 + 112);
    *(_QWORD *)&v57 = v45;
    if ( (int)v58 >= 0 && v45 )
      goto LABEL_46;
    v12 = WdLogNewEntry5_WdError(v43, v42);
    *(_QWORD *)(v12 + 24) = (int)v58;
    *(_QWORD *)(v12 + 32) = v57;
    goto LABEL_45;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4665LL;
  WdLogEvent5_WdError(v6);
LABEL_47:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
  return v5;
}
