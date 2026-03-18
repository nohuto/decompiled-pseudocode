/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0112870
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D7EA8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0122010 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C015E270 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02401B0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0274F50 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02965D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0008268 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C011B528 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C01498B4 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C02461E8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028C290 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C028FFAC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  struct DXGADAPTERSYNCOBJECT **v25; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v26; // ebx
  DXGFASTMUTEX *v27; // rsi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int *v33; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // r14
  unsigned int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rcx
  int DxgAdapterSyncObject; // esi
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int *v64; // r15
  DXGDEVICESYNCOBJECT *v65; // r14
  unsigned int v66; // r12d
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct DXGSYNCOBJECT *v69; // rsi
  unsigned __int64 v70; // rcx
  _QWORD *v71; // rbx
  __int64 v72; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // r9d
  __int64 v86; // rax
  struct DXGGLOBAL *v87; // rax
  int v88; // ebx
  struct DXGTHREAD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  struct DXGGLOBAL *v92; // rax
  DXGFASTMUTEX *v93; // [rsp+40h] [rbp-30h] BYREF
  char v94; // [rsp+48h] [rbp-28h]
  char v95[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v96; // [rsp+58h] [rbp-18h]
  int v97; // [rsp+60h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v98; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGDEVICE *v99; // [rsp+C0h] [rbp+50h]
  struct DXGDEVICESYNCOBJECT **v100; // [rsp+C8h] [rbp+58h]

  v100 = a4;
  v99 = a3;
  v11 = a4;
  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v19 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v18, v17)) == 0LL
    || (v20 = *((_QWORD *)Current + 1)) == 0 )
  {
    v20 = v19;
  }
  v94 = 0;
  v93 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v74 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v74 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v74);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v93 + 2) == CurrentThread )
  {
    v75 = WdLogNewEntry5_WdAssertion(CurrentThread, v17);
    *(_QWORD *)(v75 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v75);
  }
  if ( v94 )
  {
    v76 = WdLogNewEntry5_WdCriticalError(CurrentThread, v17);
    *(_QWORD *)(v76 + 40) = &v93;
    *(_QWORD *)(v76 + 24) = 275LL;
    *(_QWORD *)(v76 + 32) = 4LL;
    *(_OWORD *)(v76 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v76);
  }
  DXGFASTMUTEX::Acquire(v93);
  v24 = *((_DWORD *)this + 49);
  v98 = 0LL;
  v94 = 1;
  if ( (v24 & 4) == 0 )
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 39) == a2 )
    {
      v98 = (DXGSYNCOBJECT *)((char *)this + 296);
      goto LABEL_14;
    }
    v77 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v77[3] = this;
    v77[4] = *((_QWORD *)this + 39);
    v77[5] = a2;
    v77[6] = -1073741811LL;
    WdLogEvent5_WdError(v77);
    DxgAdapterSyncObject = -1073741811;
LABEL_75:
    if ( a2 )
      goto LABEL_54;
    goto LABEL_14;
  }
  DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v98);
  if ( DxgAdapterSyncObject < 0 )
    goto LABEL_75;
LABEL_14:
  v25 = a9;
  if ( a9 )
    *a9 = v98;
  v26 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 196)) & 0x80u) != 0 )
  {
    v72 = WdLogNewEntry5_WdError(v25, v22);
    *(_QWORD *)(v72 + 24) = 2091LL;
    WdLogEvent5_WdError(v72);
    DxgAdapterSyncObject = -1073741811;
  }
  else
  {
    if ( !v94 )
    {
      v78 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v78 + 40) = &v93;
      *(_QWORD *)(v78 + 24) = 275LL;
      *(_QWORD *)(v78 + 32) = 4LL;
      *(_OWORD *)(v78 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v78);
    }
    v27 = v93;
    v94 = 0;
    if ( *((struct _KTHREAD **)v93 + 2) != KeGetCurrentThread() )
    {
      v79 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v79 + 24) = 275LL;
      *(_QWORD *)(v79 + 32) = 4LL;
      *(_QWORD *)(v79 + 40) = v27;
      *(_OWORD *)(v79 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v79);
    }
    v28 = *((_DWORD *)v27 + 6);
    if ( v28 <= 0 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v25, v22);
      *(_QWORD *)(v80 + 24) = 703LL;
      WdLogEvent5_WdAssertion(v80);
      v28 = *((_DWORD *)v27 + 6);
    }
    v29 = v28 - 1;
    *((_DWORD *)v27 + 6) = v29;
    if ( !v29 )
    {
      *((_QWORD *)v27 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v98 && *((_BYTE *)v98 + 25) )
    {
      v81 = WdLogNewEntry5_WdEvent(v31, v30);
      DxgAdapterSyncObject = -1073741823;
      *(_QWORD *)(v81 + 24) = this;
      *(_QWORD *)(v81 + 32) = -1073741823LL;
      WdLogEvent5_WdEvent(v81);
      goto LABEL_54;
    }
    if ( *((_BYTE *)this + 279) && (*(_BYTE *)(v20 + 347) & 0x30) == 0 && !*((_BYTE *)this + 280) )
    {
      v82 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v82 + 24) = this;
      *(_QWORD *)(v82 + 32) = -1073741790LL;
      WdLogEvent5_WdWarning(v82);
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_54;
    }
    if ( (unsigned int)(*((_DWORD *)this + 48) - 5) > 1 )
    {
      v33 = a5;
      if ( !a5 )
      {
LABEL_47:
        _InterlockedIncrement((volatile signed __int32 *)this + 6);
        v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v31, v30);
        v49[3] = this;
        if ( v33 )
          v50 = *v33;
        else
          v50 = 0LL;
        v49[4] = v50;
        v51 = PsGetCurrentProcess(v48, v47);
        v52 = PsGetProcessDxgProcess(v51);
        v55 = v52;
        if ( v52 && (*(_BYTE *)(v52 + 347) & 0x10) == 0
          || (v89 = DXGTHREAD::GetCurrent(v54, v53)) == 0LL
          || (v56 = *((_QWORD *)v89 + 1)) == 0 )
        {
          v56 = v55;
        }
        v49[5] = v56;
        WdLogEvent5_WdEvent(v49);
LABEL_53:
        DxgAdapterSyncObject = 0;
        goto LABEL_54;
      }
      Global = DXGGLOBAL::GetGlobal(v31, v30);
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
      {
        v83 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v83 + 24) = 2236LL;
        WdLogEvent5_WdAssertion(v83);
      }
      v96 = v20 + 208;
      if ( v20 != -208 && *(struct _KTHREAD **)(v20 + 216) == KeGetCurrentThread() )
      {
        v84 = WdLogNewEntry5_WdAssertion(v20 + 208, v35);
        *(_QWORD *)(v84 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v84);
      }
      v37 = v96;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v85 = *(_DWORD *)(v37 + 24);
          if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v85);
        }
        ExAcquirePushLockExclusiveEx(v37, 0LL);
      }
      *(_QWORD *)(v37 + 8) = KeGetCurrentThread();
      v40 = (_QWORD *)(v20 + 240);
      v97 = 2;
      v41 = HMGRTABLE::AllocHandle((unsigned int *)(v20 + 240), (__int64)this, 8, 0, 0);
      *v33 = v41;
      v30 = v41;
      if ( !v41 )
      {
        v86 = WdLogNewEntry5_WdLowResource(v31, 0LL, v42, v43);
        DxgAdapterSyncObject = -1073741801;
        *(_QWORD *)(v86 + 24) = this;
        *(_QWORD *)(v86 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v86);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v95);
        goto LABEL_54;
      }
      v44 = (v41 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 < *(_DWORD *)(v20 + 256) )
      {
        v31 = ((unsigned int)v30 >> 25) & 0x60;
        v45 = *(_DWORD *)(*v40 + 16 * v44 + 8);
        if ( (((unsigned int)v30 >> 25) & 0x60) == (*(_BYTE *)(*v40 + 16 * v44 + 8) & 0x60) )
        {
          v31 = 0x2000LL;
          if ( (v45 & 0x2000) == 0 && (v45 & 0x1F) != 0 )
            *(_DWORD *)(*v40 + 16 * (((unsigned __int64)(unsigned int)v30 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      if ( v97 == 1 )
      {
        v97 = 0;
        ExReleasePushLockSharedEx(v96, 0LL);
      }
      else
      {
        if ( v97 != 2 )
        {
LABEL_46:
          if ( *((_BYTE *)this + 277) )
          {
            if ( *((_DWORD *)this + 6) )
            {
              v87 = DXGGLOBAL::GetGlobal(v31, v30);
              v88 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v87 + 183),
                      (struct DXGPROCESS *)v20,
                      0LL,
                      *v33,
                      this,
                      0LL,
                      0,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26);
              if ( v88 < 0 )
              {
                DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v20, *v33);
                *v33 = 0;
                DxgAdapterSyncObject = v88;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_47;
        }
        v46 = v96;
        v97 = 0;
        *(_QWORD *)(v96 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v46, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_46;
    }
    if ( !a3 || !a2 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v90 + 24) = 2131LL;
      WdLogEvent5_WdAssertion(v90);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v64 = a5;
    if ( PoolWithQuotaTag )
      v65 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, v99, a10, a5 != 0LL);
    else
      v65 = 0LL;
    if ( v65 )
    {
      v66 = a8;
      DxgAdapterSyncObject = DXGDEVICESYNCOBJECT::Initialize(
                               v65,
                               this,
                               (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26,
                               a8);
      if ( DxgAdapterSyncObject >= 0 )
      {
        v69 = (struct DXGSYNCOBJECT *)*((_QWORD *)v65 + 4);
        if ( !*((_BYTE *)v69 + 277)
          || *((_DWORD *)this + 6) <= 1u
          || (v92 = DXGGLOBAL::GetGlobal(v68, v67),
              DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                       *((DXG_GUEST_GLOBAL_VMBUS **)v92 + 183),
                                       (struct DXGPROCESS *)v20,
                                       v99,
                                       0,
                                       v69,
                                       v65,
                                       v66,
                                       (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26),
              DxgAdapterSyncObject >= 0) )
        {
          if ( v64 )
            *v64 = *((_DWORD *)v65 + 10);
          *a6 = (void *)*((_QWORD *)v65 + 7);
          v70 = *((_QWORD *)v65 + 6);
          *a7 = v70;
          v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v70, v67);
          v71[3] = this;
          v71[4] = *((unsigned int *)v65 + 10);
          v71[5] = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdEvent(v71);
          if ( v100 )
            *v100 = v65;
          goto LABEL_53;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v65);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v65);
      v11 = v100;
    }
    else
    {
      DxgAdapterSyncObject = -1073741801;
      v91 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
      *(_QWORD *)(v91 + 24) = this;
      *(_QWORD *)(v91 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v91);
    }
    if ( v11 )
      *v11 = 0LL;
  }
LABEL_54:
  if ( v94 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v93, v22);
  return (unsigned int)DxgAdapterSyncObject;
}
