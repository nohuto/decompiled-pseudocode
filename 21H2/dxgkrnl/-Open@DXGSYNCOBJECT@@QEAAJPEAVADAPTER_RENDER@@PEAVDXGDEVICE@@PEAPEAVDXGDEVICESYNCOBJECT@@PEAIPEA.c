/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C0162184 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C031DE90 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03220AC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0371540 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C01860EC (-AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C018654C (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C03441C0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C037AAC8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        bool a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  struct DXGDEVICESYNCOBJECT **v11; // r12
  struct DXGDEVICE *v12; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rbx
  __int64 v18; // r13
  char v19; // cl
  int v20; // eax
  struct ADAPTER_RENDER *v21; // r8
  struct DXGADAPTERSYNCOBJECT *v22; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v23; // ebx
  DXGFASTMUTEX *v24; // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned int *v31; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // r14
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r9
  unsigned int v44; // eax
  int v45; // r14d
  __int64 Pool2; // rax
  __int64 v48; // rdi
  bool v49; // dl
  char v50; // r8
  unsigned int *v51; // r15
  char v52; // cl
  unsigned int v53; // r12d
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct DXGSYNCOBJECT *v57; // r14
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r9
  struct DXGTHREAD *Current; // rax
  int DxgAdapterSyncObject; // eax
  int v65; // r9d
  struct DXGGLOBAL *v66; // rax
  int v67; // ebx
  struct DXGTHREAD *v68; // rax
  struct DXGGLOBAL *v69; // rax
  struct DXGTHREAD *v70; // rax
  DXGFASTMUTEX *v71; // [rsp+50h] [rbp-30h] BYREF
  char v72; // [rsp+58h] [rbp-28h]
  char v73[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v74; // [rsp+68h] [rbp-18h]
  int v75; // [rsp+70h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v76; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v77; // [rsp+D0h] [rbp+50h]
  struct DXGDEVICESYNCOBJECT **v78; // [rsp+D8h] [rbp+58h]

  v78 = a4;
  v77 = a3;
  v11 = a4;
  v12 = a3;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v18 = *((_QWORD *)Current + 3)) == 0 )
  {
    v18 = v17;
  }
  v72 = 0;
  v71 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v71 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v71);
  v19 = 1;
  v20 = *((_DWORD *)this + 51) >> 2;
  v72 = 1;
  v76 = 0LL;
  if ( (v20 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v76);
    if ( DxgAdapterSyncObject < 0 )
    {
      v45 = DxgAdapterSyncObject;
      if ( a2 )
        goto LABEL_52;
      v12 = v77;
    }
    v19 = v72;
    v22 = v76;
  }
  else
  {
    if ( a2 )
    {
      v21 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 39);
      if ( v21 != a2 )
      {
        v45 = -1073741811;
        WdLogSingleEntry4(2LL, this, v21, a2, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
          (__int64)this,
          *((_QWORD *)this + 39),
          (__int64)a2,
          -1073741811LL,
          0LL);
        goto LABEL_52;
      }
    }
    v22 = (DXGSYNCOBJECT *)((char *)this + 296);
    v76 = (DXGSYNCOBJECT *)((char *)this + 296);
  }
  if ( a9 )
    *a9 = v22;
  v23 = a11.0;
  if ( ((*((_BYTE *)this + 204) ^ *(_BYTE *)&a11.0) & 0x80u) != 0 )
  {
    WdLogSingleEntry1(2LL, 2253LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag sp"
                "ecified at creation time.",
      2253LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v45 = -1073741811;
    goto LABEL_52;
  }
  if ( !v19 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v71, 0LL, 0LL);
  v72 = 0;
  v24 = v71;
  if ( *((struct _KTHREAD **)v71 + 3) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v71, 0LL, 0LL);
  v25 = *((_DWORD *)v24 + 8);
  if ( v25 <= 0 )
  {
    WdLogSingleEntry1(1LL, 516LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
    v25 = *((_DWORD *)v24 + 8);
  }
  v26 = v25 - 1;
  *((_DWORD *)v24 + 8) = v26;
  if ( !v26 )
  {
    *((_QWORD *)v24 + 3) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v24 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v76 && *((_BYTE *)v76 + 25) )
  {
    WdLogSingleEntry2(4LL, this, -1073741823LL);
LABEL_82:
    v45 = -1073741823;
    goto LABEL_52;
  }
  v30 = *((unsigned int *)this + 71);
  if ( (v30 & 0x10) != 0 && (*(_DWORD *)(v18 + 424) & 0x180) == 0 && (v30 & 0x20) == 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741790LL);
    goto LABEL_82;
  }
  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) > 1 )
  {
    v31 = a5;
    if ( !a5 )
    {
LABEL_45:
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v40 = PsGetCurrentProcess(v30, v27, v28, v29);
      v41 = PsGetProcessDxgProcess(v40);
      v42 = v41;
      if ( v41 && (*(_DWORD *)(v41 + 424) & 0x80) == 0
        || (v68 = DXGTHREAD::GetCurrent()) == 0LL
        || (v43 = *((_QWORD *)v68 + 3)) == 0 )
      {
        v43 = v42;
      }
      if ( v31 )
        v44 = *v31;
      else
        v44 = 0;
      WdLogSingleEntry3(4LL, this, v44, v43);
LABEL_51:
      v45 = 0;
      goto LABEL_52;
    }
    Global = DXGGLOBAL_GetGlobal();
    if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
    {
      WdLogSingleEntry1(1LL, 2398LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
        2398LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v74 = v18 + 248;
    if ( v18 != -248 && *(struct _KTHREAD **)(v18 + 256) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1425LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v33 = v74;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v65 = *(_DWORD *)(v33 + 24);
        if ( v65 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, v65);
      }
      ExAcquirePushLockExclusiveEx(v33, 0LL);
    }
    *(_QWORD *)(v33 + 8) = KeGetCurrentThread();
    v36 = (__int64 *)(v18 + 280);
    v75 = 2;
    v37 = HMGRTABLE::AllocHandle((unsigned int *)(v18 + 280), (__int64)this, 8, 0, 0);
    *v31 = v37;
    v27 = v37;
    if ( !v37 )
    {
      v45 = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v73);
      goto LABEL_52;
    }
    v38 = (v37 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *(_DWORD *)(v18 + 296) )
    {
      v29 = *v36;
      v30 = ((unsigned int)v27 >> 25) & 0x60;
      v28 = *(unsigned int *)(*v36 + 16 * v38 + 8);
      if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(*v36 + 16 * v38 + 8) & 0x60) )
      {
        v30 = 0x2000LL;
        if ( (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
          *(_DWORD *)(v29 + 16 * (((unsigned __int64)(unsigned int)v27 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    if ( v75 == 1 )
    {
      v75 = 0;
      ExReleasePushLockSharedEx(v74, 0LL);
    }
    else
    {
      if ( v75 != 2 )
      {
LABEL_44:
        if ( (*((_DWORD *)this + 71) & 2) != 0 )
        {
          if ( *((_DWORD *)this + 6) )
          {
            v66 = DXGGLOBAL_GetGlobal();
            v67 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                    *((DXG_GUEST_GLOBAL_VMBUS **)v66 + 218),
                    (struct DXGPROCESS *)v18,
                    0LL,
                    *v31,
                    this,
                    0LL,
                    0,
                    (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v23);
            if ( v67 < 0 )
            {
              DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v18, *v31);
              *v31 = 0;
              v45 = v67;
              goto LABEL_52;
            }
          }
        }
        goto LABEL_45;
      }
      v39 = v74;
      v75 = 0;
      *(_QWORD *)(v74 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
    }
    KeLeaveCriticalRegion();
    goto LABEL_44;
  }
  if ( !v12 || !a2 )
  {
    WdLogSingleEntry1(1LL, 2293LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice != NULL && pRenderCore != NULL",
      2293LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Pool2 = ExAllocatePool2(257LL, 96LL, 1265072196LL, v29);
  v48 = Pool2;
  if ( Pool2 )
  {
    v49 = a10;
    *(_QWORD *)(Pool2 + 16) = v12;
    *(_OWORD *)Pool2 = 0LL;
    v50 = *(_BYTE *)(Pool2 + 92);
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_DWORD *)(Pool2 + 88) = 0;
    v51 = a5;
    v52 = -(a5 != 0LL);
    *(_DWORD *)(Pool2 + 72) = 0;
    *(_BYTE *)(Pool2 + 92) = v52 & 4 | (2 * v49) & 0xFB | v50 & 0xF8;
    if ( v49 )
      DXGDEVICE::AddDeviceSyncObjectToList(v12, (struct DXGDEVICESYNCOBJECT *)Pool2);
    v53 = a8;
    v45 = DXGDEVICESYNCOBJECT::Initialize(
            (DXGDEVICESYNCOBJECT *)v48,
            this,
            (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v23,
            a8);
    if ( v45 >= 0 )
    {
      v57 = *(struct DXGSYNCOBJECT **)(v48 + 32);
      if ( (*((_DWORD *)v57 + 71) & 2) == 0
        || *((_DWORD *)this + 6) <= 1u
        || (v69 = DXGGLOBAL_GetGlobal(),
            v45 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                    *((DXG_GUEST_GLOBAL_VMBUS **)v69 + 218),
                    (struct DXGPROCESS *)v18,
                    v77,
                    0,
                    v57,
                    (struct DXGDEVICESYNCOBJECT *)v48,
                    v53,
                    (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v23),
            v45 >= 0) )
      {
        if ( v51 )
          *v51 = *(_DWORD *)(v48 + 40);
        *a6 = *(void **)(v48 + 56);
        v58 = *(_QWORD *)(v48 + 48);
        *a7 = v58;
        v59 = PsGetCurrentProcess(v58, v54, v55, v56);
        v60 = PsGetProcessDxgProcess(v59);
        v61 = v60;
        if ( v60 && (*(_DWORD *)(v60 + 424) & 0x80) == 0
          || (v70 = DXGTHREAD::GetCurrent()) == 0LL
          || (v62 = *((_QWORD *)v70 + 3)) == 0 )
        {
          v62 = v61;
        }
        WdLogSingleEntry3(4LL, this, *(unsigned int *)(v48 + 40), v62);
        if ( v78 )
          *v78 = (struct DXGDEVICESYNCOBJECT *)v48;
        goto LABEL_51;
      }
    }
    DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError((DXGDEVICESYNCOBJECT *)v48);
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'((DXGDEVICESYNCOBJECT *)v48);
    v11 = v78;
  }
  else
  {
    v45 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"pSyncObject 0x%I64x: Failed to allocate device sync object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v11 )
    *v11 = 0LL;
LABEL_52:
  if ( v72 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v71);
  return (unsigned int)v45;
}
