/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0371540
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0361198 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // edx
  int v8; // r8d
  int EntryType; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  const wchar_t *v15; // r9
  __int64 v16; // rax
  DXGSHAREDVMOBJECT *v17; // rsi
  DXGSYNCOBJECT *v18; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v25; // rbx
  struct DXGPROCESS *v26; // r15
  char *v27; // r14
  unsigned int v28; // ecx
  __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // rbx
  unsigned int v32; // edx
  struct _KTHREAD **v33; // r8
  struct DXGDEVICE *v34; // r15
  __int64 v35; // r9
  struct DXGGLOBAL *v36; // rax
  __int64 v37; // r14
  unsigned int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rbx
  __int64 v43; // r14
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  DXGSYNCOBJECT *v48; // rbx
  struct ADAPTER_RENDER *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  struct DXGPROCESS *v54; // rax
  unsigned __int64 v55; // rbx
  struct DXGPROCESS *v56; // r14
  char *v57; // rsi
  unsigned int v58; // ecx
  __int64 v59; // rdx
  int v60; // r8d
  __int64 v61; // rbx
  struct DXGGLOBAL *v62; // rax
  PERESOURCE *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  struct DXGPROCESS *v68; // rax
  unsigned __int64 v69; // rbx
  struct DXGPROCESS *v70; // r14
  char *v71; // rsi
  unsigned int v72; // ecx
  __int64 v73; // rdx
  int v74; // r8d
  __int64 v75; // rbx
  unsigned int v77; // [rsp+38h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v78; // [rsp+50h] [rbp-B0h]
  struct DXGDEVICE *v79; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v80[8]; // [rsp+68h] [rbp-98h] BYREF
  char v81; // [rsp+70h] [rbp-90h]
  struct DXGSYNCOBJECT *v82; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v83[3]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTERSYNCOBJECT *v84; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v85; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v86[4]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGSYNCOBJECT *v87; // [rsp+B8h] [rbp-48h]
  _BYTE v88[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v89[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v90[88]; // [rsp+108h] [rbp+8h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 12);
    *(_OWORD *)v86 = 0LL;
    v87 = 0LL;
    v5 = *(_DWORD *)(v2 + 28);
    v6 = v4 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
    v7 = (v5 >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v4 + 296)
      && (v8 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 280, v7);
    }
    else
    {
      EntryType = 0;
    }
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v83,
        *((struct DXGPROCESS **)a1 + 12));
      v10 = (unsigned int)v3[7];
      v11 = *((_QWORD *)a1 + 12);
      v12 = (v3[7] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v12 < *(_DWORD *)(v11 + 296) )
      {
        v13 = *(_QWORD *)(v11 + 280);
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
        if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
          && (v14 & 0x2000) == 0
          && (v14 & 0x1F) != 0 )
        {
          if ( (v14 & 0x1F) == 0xD )
          {
            v17 = *(DXGSHAREDVMOBJECT **)(v13 + 16LL * (unsigned int)v12);
            if ( v17 )
            {
              if ( *(_DWORD *)v17 != 4 )
              {
                WdLogSingleEntry1(2LL, *(int *)v17);
                v16 = *(int *)v17;
                v15 = L"Invalid shared vm object type: 0x%I64x";
                goto LABEL_17;
              }
              v18 = *(DXGSYNCOBJECT **)(*((_QWORD *)v17 + 1) + 32LL);
              if ( v18 )
              {
                DXGSHAREDVMOBJECT::AddReference(v17);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
                Global = DXGGLOBAL_GetGlobal();
                DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80, Global, 0);
                DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v80);
                v86[1] = DXGSYNCOBJECT::Open(v18, 0LL, 0LL, 0LL, v86, 0LL, 0LL, 0, 0LL, 0, DXGSYNCOBJECT::FlagsDefault);
                if ( (v86[1] & 0x80000000) == 0 )
                {
                  Current = DXGPROCESS::GetCurrent(v21, v20, v22, v23);
                  v25 = v86[0];
                  v26 = Current;
                  v27 = (char *)Current + 248;
                  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
                  v28 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
                  if ( v28 < *((_DWORD *)v26 + 74) )
                  {
                    v29 = *((_QWORD *)v26 + 35);
                    v30 = *(_DWORD *)(v29 + 16LL * v28 + 8);
                    if ( (((unsigned int)v25 >> 25) & 0x60) == (v30 & 0x60) && (v30 & 0x1F) != 0 )
                    {
                      v31 = 2 * ((v25 >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v29 + 8 * v31 + 8) & 0x2000) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 217LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                          217LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v29 = *((_QWORD *)v26 + 35);
                      }
                      *(_DWORD *)(v29 + 8 * v31 + 8) &= ~0x2000u;
                    }
                  }
                  *((_QWORD *)v27 + 1) = 0LL;
                  ExReleasePushLockExclusiveEx(v27, 0LL);
                  KeLeaveCriticalRegion();
                }
                else
                {
                  WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                    (unsigned int)v3[7],
                    -1073741811LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v81 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v80);
                DXGSHAREDVMOBJECT::ReleaseReference(v17);
                goto LABEL_84;
              }
              WdLogSingleEntry1(2LL, v10);
              v15 = L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x";
LABEL_16:
              v16 = (unsigned int)v3[7];
LABEL_17:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v16, 0LL, 0LL, 0LL, 0LL);
              v86[1] = -1073741811;
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
LABEL_84:
              VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v86, 0x18u);
              LOBYTE(v2) = 1;
              return v2;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v10 = (unsigned int)v3[7];
          }
        }
      }
      WdLogSingleEntry1(2LL, v10);
      v15 = L"Invalid shared vm object handle: 0x%I64x";
      goto LABEL_16;
    }
    v32 = v3[6];
    if ( !v32 )
    {
      v62 = DXGGLOBAL_GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80, v62, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v80);
      v63 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
      v86[1] = DXGGLOBAL::OpenSyncObject(v63, v3[7], &v82, v86, &v84);
      if ( (v86[1] & 0x80000000) == 0 )
      {
        v68 = DXGPROCESS::GetCurrent(v65, v64, v66, v67);
        v69 = v86[0];
        v70 = v68;
        v71 = (char *)v68 + 248;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v68 + 248));
        v72 = ((unsigned int)v69 >> 6) & 0xFFFFFF;
        if ( v72 < *((_DWORD *)v70 + 74) )
        {
          v73 = *((_QWORD *)v70 + 35);
          v74 = *(_DWORD *)(v73 + 16LL * v72 + 8);
          if ( (((unsigned int)v69 >> 25) & 0x60) == (v74 & 0x60) && (v74 & 0x1F) != 0 )
          {
            v75 = 2 * ((v69 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v73 + 8 * v75 + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 217LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                217LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v73 = *((_QWORD *)v70 + 35);
            }
            *(_DWORD *)(v73 + 8 * v75 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v71 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v71, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
          (unsigned int)v3[7],
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v81 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v80);
      goto LABEL_84;
    }
    v33 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    v85 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v79, v32, v33, &v85);
    v34 = v85;
    if ( !v85 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v3[6], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        (unsigned int)v3[6],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v86[1] = -1073741811;
LABEL_38:
      if ( v79 && _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
      goto LABEL_84;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v83, v85);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, (__int64)v34, 0, v35, 0);
    v86[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88, 0LL);
    if ( (v86[1] & 0x80000000) != 0 )
    {
LABEL_42:
      COREACCESS::~COREACCESS((COREACCESS *)v90);
      COREACCESS::~COREACCESS((COREACCESS *)v89);
      if ( v83[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v83);
      goto LABEL_38;
    }
    v36 = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80, v36, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v80);
    v37 = *((_QWORD *)a1 + 12);
    v38 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 248));
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *(_DWORD *)(v37 + 296)
      && (v40 = *(_QWORD *)(v37 + 280),
          v41 = *(_DWORD *)(v40 + 16 * v39 + 8),
          ((v38 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60))
      && (v41 & 0x2000) == 0
      && (v41 & 0x1F) == 0xB )
    {
      v42 = *(_QWORD *)(v40 + 16LL * (unsigned int)v39);
    }
    else
    {
      v42 = 0LL;
    }
    ExReleasePushLockSharedEx(v37 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v42 )
    {
      v48 = *(DXGSYNCOBJECT **)(v42 + 32);
      goto LABEL_64;
    }
    v43 = *((_QWORD *)a1 + 12);
    v44 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v43 + 248));
    v45 = (v44 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v45 < *(_DWORD *)(v43 + 296) )
    {
      v46 = *(_QWORD *)(v43 + 280);
      v47 = *(_DWORD *)(v46 + 16 * v45 + 8);
      if ( ((v44 >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60) && (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
      {
        if ( (v47 & 0x1F) == 8 )
        {
          v48 = *(DXGSYNCOBJECT **)(v46 + 16LL * (unsigned int)v45);
LABEL_58:
          ExReleasePushLockSharedEx(v43 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( !v48 )
          {
            WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid sync object (0x%I64x) specified, returning 0x%I64x",
              (unsigned int)v3[7],
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v86[1] = -1073741811;
LABEL_60:
            if ( v81 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v80);
            goto LABEL_42;
          }
LABEL_64:
          v49 = (struct ADAPTER_RENDER *)*((_QWORD *)v34 + 2);
          v78.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
          v77 = v3[8];
          v82 = 0LL;
          v86[1] = DXGSYNCOBJECT::Open(
                     v48,
                     v49,
                     v34,
                     0LL,
                     v86,
                     (void **)&v82,
                     (unsigned __int64 *)&v86[2],
                     v77,
                     &v84,
                     1,
                     v78);
          if ( (v86[1] & 0x80000000) == 0 )
          {
            v54 = DXGPROCESS::GetCurrent(v51, v50, v52, v53);
            v55 = v86[0];
            v56 = v54;
            v57 = (char *)v54 + 248;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v54 + 248));
            v58 = ((unsigned int)v55 >> 6) & 0xFFFFFF;
            if ( v58 < *((_DWORD *)v56 + 74) )
            {
              v59 = *((_QWORD *)v56 + 35);
              v60 = *(_DWORD *)(v59 + 16LL * v58 + 8);
              if ( (((unsigned int)v55 >> 25) & 0x60) == (v60 & 0x60) && (v60 & 0x1F) != 0 )
              {
                v61 = 2 * ((v55 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v59 + 8 * v61 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry1(1LL, 217LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    217LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v59 = *((_QWORD *)v56 + 35);
                }
                *(_DWORD *)(v59 + 8 * v61 + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v57 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v57, 0LL);
            KeLeaveCriticalRegion();
            v87 = v82;
          }
          else
          {
            WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
              (unsigned int)v3[7],
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_60;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v48 = 0LL;
    goto LABEL_58;
  }
  return v2;
}
