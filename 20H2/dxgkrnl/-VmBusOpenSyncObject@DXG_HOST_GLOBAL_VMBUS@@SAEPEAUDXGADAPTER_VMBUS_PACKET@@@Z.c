/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243380
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010D0C0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011A9A8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016CB20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A18 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0239AFC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  __int64 v4; // rbx
  DXGSHAREDVMOBJECT *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // r8d
  int EntryType; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  DXGSYNCOBJECT *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  DXGSYNCOBJECTLOCK *v28; // rcx
  unsigned __int64 v29; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _KTHREAD **v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGDEVICE *v41; // r13
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r14
  unsigned int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rbx
  __int64 v54; // r14
  unsigned int v55; // esi
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  DXGSYNCOBJECT *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  struct ADAPTER_RENDER *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  struct DXGPROCESS *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rdx
  int v73; // r8d
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  PERESOURCE *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  PERESOURCE *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rbx
  struct DXGPROCESS *v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // r8d
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rax
  unsigned int v94; // [rsp+40h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v95; // [rsp+58h] [rbp-B0h]
  struct DXGDEVICE *v96; // [rsp+68h] [rbp-A0h] BYREF
  void *v97; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v98[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v99[16]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGDEVICE *v100; // [rsp+98h] [rbp-70h] BYREF
  struct DXGADAPTERSYNCOBJECT *v101; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v102[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v103[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v104; // [rsp+C0h] [rbp-48h]
  _BYTE v105[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTERSYNCOBJECT *v106; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGSYNCOBJECT *v107; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v108[4]; // [rsp+F0h] [rbp-18h] BYREF
  void *v109; // [rsp+100h] [rbp-8h]
  _BYTE v110[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v111[64]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v112[88]; // [rsp+150h] [rbp+48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (unsigned int *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 7);
    *(_OWORD *)v108 = 0LL;
    v109 = 0LL;
    v5 = 0LL;
    v6 = *(_DWORD *)(v2 + 28);
    v7 = v4 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 208));
    v8 = (v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *(_DWORD *)(v4 + 256)
      && (v9 = *(_DWORD *)(*(_QWORD *)(v4 + 240) + 16LL * (unsigned int)v8 + 8),
          ((v6 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 16LL * (unsigned int)v8 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 240, v8);
    }
    else
    {
      EntryType = 0;
    }
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v105,
        *((struct _KTHREAD ***)a1 + 7));
      v12 = v3[7];
      v13 = *((_QWORD *)a1 + 7);
      v14 = (v3[7] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 256) )
        goto LABEL_15;
      v15 = *(_QWORD *)(v13 + 240);
      v12 = ((unsigned int)v12 >> 25) & 0x60;
      v13 = *(unsigned int *)(v15 + 16 * v14 + 8);
      if ( (_BYTE)v12 != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
        goto LABEL_15;
      v13 &= 0x1Fu;
      if ( (_BYTE)v13 != 13 )
      {
        v16 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v16 + 24) = 267LL;
        WdLogEvent5_WdError(v16);
        goto LABEL_15;
      }
      v5 = *(DXGSHAREDVMOBJECT **)(v15 + 16LL * (unsigned int)v14);
      if ( !v5 )
        goto LABEL_15;
      if ( *(_DWORD *)v5 != 4 )
      {
        v17 = WdLogNewEntry5_WdError(v13, v12);
        v18 = *(int *)v5;
        goto LABEL_16;
      }
      v19 = *(DXGSYNCOBJECT **)(*((_QWORD *)v5 + 1) + 32LL);
      if ( !v19 )
      {
LABEL_15:
        v17 = WdLogNewEntry5_WdError(v13, v12);
        v18 = v3[7];
LABEL_16:
        *(_QWORD *)(v17 + 24) = v18;
        WdLogEvent5_WdError(v17);
        v108[1] = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
LABEL_85:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v108, 0x18u);
        LOBYTE(v2) = 1;
        return v2;
      }
      DXGSHAREDVMOBJECT::AddReference(v5, v12);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21, v20);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v102, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v102, v23);
      v108[1] = DXGSYNCOBJECT::Open(v19, 0LL, 0LL, 0LL, v108, 0LL, 0LL, 0, 0LL, 0, DXGSYNCOBJECT::FlagsDefault);
      if ( (v108[1] & 0x80000000) == 0 )
      {
        v29 = v108[0];
        Current = DXGPROCESS::GetCurrent(v25, v24);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v31 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v31 < *((_DWORD *)Current + 64) )
        {
          v32 = *((_QWORD *)Current + 30);
          v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
          v34 = ((unsigned int)v29 >> 25) & 0x60;
          if ( (((unsigned int)v29 >> 25) & 0x60) == (v33 & 0x60) && (v33 & 0x1F) != 0 )
          {
            v35 = 2 * ((v29 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v32 + 8 * v35 + 8) & 0x2000) == 0 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v34, v32);
              *(_QWORD *)(v36 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v36);
              v32 = *((_QWORD *)Current + 30);
            }
            *(_DWORD *)(v32 + 8 * v35 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v26 + 24) = v3[7];
        *(_QWORD *)(v26 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v26);
      }
      if ( !v102[8] )
      {
LABEL_83:
        if ( v5 )
          DXGSHAREDVMOBJECT::ReleaseReference(v5, v27);
        goto LABEL_85;
      }
      v28 = (DXGSYNCOBJECTLOCK *)v102;
LABEL_82:
      DXGSYNCOBJECTLOCK::Release(v28);
      goto LABEL_83;
    }
    v37 = v3[6];
    if ( !(_DWORD)v37 )
    {
      v77 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v37);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v103, v77, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v103, v78);
      v81 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v80, v79);
      v108[1] = DXGGLOBAL::OpenSyncObject(v81, v3[7], &v107, v108, &v106);
      if ( (v108[1] & 0x80000000) != 0 )
      {
        v84 = WdLogNewEntry5_WdError(v83, v82);
        *(_QWORD *)(v84 + 24) = v3[7];
        *(_QWORD *)(v84 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v84);
        if ( v104 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v103);
        goto LABEL_85;
      }
      v85 = v108[0];
      v86 = DXGPROCESS::GetCurrent(v83, v82);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v86 + 208));
      v87 = ((unsigned int)v85 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v87 < *((_DWORD *)v86 + 64) )
      {
        v88 = *((_QWORD *)v86 + 30);
        v89 = *(_DWORD *)(v88 + 16 * v87 + 8);
        v90 = ((unsigned int)v85 >> 25) & 0x60;
        if ( (((unsigned int)v85 >> 25) & 0x60) == (v89 & 0x60) && (v89 & 0x1F) != 0 )
        {
          v91 = 2 * ((v85 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v88 + 8 * v91 + 8) & 0x2000) == 0 )
          {
            v92 = WdLogNewEntry5_WdAssertion(v90, v88);
            *(_QWORD *)(v92 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v92);
            v88 = *((_QWORD *)v86 + 30);
          }
          *(_DWORD *)(v88 + 8 * v91 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v86 + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v86 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v104 )
        goto LABEL_85;
      v28 = (DXGSYNCOBJECTLOCK *)v103;
      goto LABEL_82;
    }
    v38 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v100 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96, v37, v38, &v100);
    v41 = v100;
    if ( !v100 )
    {
      v42 = WdLogNewEntry5_WdError(v40, v39);
      *(_QWORD *)(v42 + 24) = v3[6];
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v42);
      v108[1] = -1073741811;
LABEL_35:
      if ( v96 && _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v96 + 2), v96);
      goto LABEL_85;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98, v100);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v41, 0, v43, 0);
    v108[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v110, 0LL);
    if ( (v108[1] & 0x80000000) != 0 )
    {
LABEL_39:
      COREACCESS::~COREACCESS((COREACCESS *)v112);
      COREACCESS::~COREACCESS((COREACCESS *)v111);
      if ( v98[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
      goto LABEL_35;
    }
    v46 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v45, v44);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v99, v46, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v99, v47);
    v48 = *((_QWORD *)a1 + 7);
    v49 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v48 + 208));
    v50 = (v49 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v50 < *(_DWORD *)(v48 + 256)
      && (v51 = *(_QWORD *)(v48 + 240),
          v52 = *(_DWORD *)(v51 + 16 * v50 + 8),
          ((v49 >> 25) & 0x60) == (*(_BYTE *)(v51 + 16 * v50 + 8) & 0x60))
      && (v52 & 0x2000) == 0
      && (v52 & 0x1F) == 0xB )
    {
      v53 = *(_QWORD *)(v51 + 16LL * (unsigned int)v50);
    }
    else
    {
      v53 = 0LL;
    }
    ExReleasePushLockSharedEx(v48 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v53 )
    {
      v61 = *(DXGSYNCOBJECT **)(v53 + 32);
      goto LABEL_62;
    }
    v54 = *((_QWORD *)a1 + 7);
    v55 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v54 + 208));
    v56 = (v55 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v56 < *(_DWORD *)(v54 + 256) )
    {
      v57 = *(_QWORD *)(v54 + 240);
      v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
      if ( ((v55 >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60) && (v58 & 0x2000) == 0 && (v58 & 0x1F) != 0 )
      {
        v59 = v58 & 0x1F;
        if ( (_BYTE)v59 == 8 )
        {
          v61 = *(DXGSYNCOBJECT **)(v57 + 16LL * (unsigned int)v56);
LABEL_55:
          ExReleasePushLockSharedEx(v54 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v61 )
          {
            v64 = WdLogNewEntry5_WdError(v63, v62);
            *(_QWORD *)(v64 + 24) = v3[7];
            *(_QWORD *)(v64 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v64);
            v108[1] = -1073741811;
LABEL_57:
            if ( v99[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v99);
            goto LABEL_39;
          }
LABEL_62:
          v65 = (struct ADAPTER_RENDER *)*((_QWORD *)v41 + 2);
          v95.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
          v94 = v3[8];
          v97 = 0LL;
          v108[1] = DXGSYNCOBJECT::Open(
                      v61,
                      v65,
                      v41,
                      0LL,
                      v108,
                      &v97,
                      (unsigned __int64 *)&v108[2],
                      v94,
                      &v101,
                      1,
                      v95);
          if ( (v108[1] & 0x80000000) == 0 )
          {
            v69 = v108[0];
            v70 = DXGPROCESS::GetCurrent(v67, v66);
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v70 + 208));
            v71 = ((unsigned int)v69 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v71 < *((_DWORD *)v70 + 64) )
            {
              v72 = *((_QWORD *)v70 + 30);
              v73 = *(_DWORD *)(v72 + 16 * v71 + 8);
              v74 = ((unsigned int)v69 >> 25) & 0x60;
              if ( (((unsigned int)v69 >> 25) & 0x60) == (v73 & 0x60) && (v73 & 0x1F) != 0 )
              {
                v75 = 2 * ((v69 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v72 + 8 * v75 + 8) & 0x2000) == 0 )
                {
                  v76 = WdLogNewEntry5_WdAssertion(v74, v72);
                  *(_QWORD *)(v76 + 24) = 217LL;
                  WdLogEvent5_WdAssertion(v76);
                  v72 = *((_QWORD *)v70 + 30);
                }
                *(_DWORD *)(v72 + 8 * v75 + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v70 + 27) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v70 + 208, 0LL);
            KeLeaveCriticalRegion();
            v109 = v97;
          }
          else
          {
            v68 = WdLogNewEntry5_WdError(v67, v66);
            *(_QWORD *)(v68 + 24) = v3[7];
            *(_QWORD *)(v68 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v68);
          }
          goto LABEL_57;
        }
        v60 = WdLogNewEntry5_WdError(v59, v57);
        *(_QWORD *)(v60 + 24) = 267LL;
        WdLogEvent5_WdError(v60);
      }
    }
    v61 = 0LL;
    goto LABEL_55;
  }
  return v2;
}
