/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010D0C0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010C918 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0117DC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C014FB68 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016CB20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243380 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C02783D0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0299AE8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0112B00 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C0156254 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0249418 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028F750 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C02934BC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rcx
  int DxgAdapterSyncObject; // esi
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int *v66; // r15
  DXGDEVICESYNCOBJECT *v67; // r14
  unsigned int v68; // r12d
  __int64 v69; // rdx
  __int64 v70; // rcx
  struct DXGSYNCOBJECT *v71; // rsi
  _QWORD *v72; // rbx
  __int64 v73; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // r9d
  __int64 v87; // rax
  struct DXGGLOBAL *v88; // rax
  int v89; // ebx
  struct DXGTHREAD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  struct DXGGLOBAL *v93; // rax
  DXGFASTMUTEX *v94; // [rsp+40h] [rbp-30h] BYREF
  char v95; // [rsp+48h] [rbp-28h]
  char v96[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v97; // [rsp+58h] [rbp-18h]
  int v98; // [rsp+60h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v99; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGDEVICE *v100; // [rsp+C0h] [rbp+50h]
  struct DXGDEVICESYNCOBJECT **v101; // [rsp+C8h] [rbp+58h]

  v101 = a4;
  v100 = a3;
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
  v95 = 0;
  v94 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v75 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v75 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v75);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v94 + 2) == CurrentThread )
  {
    v76 = WdLogNewEntry5_WdAssertion(CurrentThread, v17);
    *(_QWORD *)(v76 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v76);
  }
  if ( v95 )
  {
    v77 = WdLogNewEntry5_WdCriticalError(CurrentThread, v17);
    *(_QWORD *)(v77 + 40) = &v94;
    *(_QWORD *)(v77 + 24) = 275LL;
    *(_QWORD *)(v77 + 32) = 4LL;
    *(_OWORD *)(v77 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v77);
  }
  DXGFASTMUTEX::Acquire(v94);
  v24 = *((_DWORD *)this + 49);
  v99 = 0LL;
  v95 = 1;
  if ( (v24 & 4) == 0 )
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 39) == a2 )
    {
      v99 = (DXGSYNCOBJECT *)((char *)this + 296);
      goto LABEL_14;
    }
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v78[3] = this;
    v78[4] = *((_QWORD *)this + 39);
    v78[5] = a2;
    v78[6] = -1073741811LL;
    WdLogEvent5_WdError(v78);
    DxgAdapterSyncObject = -1073741811;
LABEL_75:
    if ( a2 )
      goto LABEL_54;
    goto LABEL_14;
  }
  DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v99);
  if ( DxgAdapterSyncObject < 0 )
    goto LABEL_75;
LABEL_14:
  v25 = a9;
  if ( a9 )
    *a9 = v99;
  v26 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 196)) & 0x80u) != 0 )
  {
    v73 = WdLogNewEntry5_WdError(v25, v22);
    *(_QWORD *)(v73 + 24) = 2230LL;
    WdLogEvent5_WdError(v73);
    DxgAdapterSyncObject = -1073741811;
  }
  else
  {
    if ( !v95 )
    {
      v79 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v79 + 40) = &v94;
      *(_QWORD *)(v79 + 24) = 275LL;
      *(_QWORD *)(v79 + 32) = 4LL;
      *(_OWORD *)(v79 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v79);
    }
    v27 = v94;
    v95 = 0;
    if ( *((struct _KTHREAD **)v94 + 2) != KeGetCurrentThread() )
    {
      v80 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v80 + 24) = 275LL;
      *(_QWORD *)(v80 + 32) = 4LL;
      *(_QWORD *)(v80 + 40) = v27;
      *(_OWORD *)(v80 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v80);
    }
    v28 = *((_DWORD *)v27 + 6);
    if ( v28 <= 0 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v25, v22);
      *(_QWORD *)(v81 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v81);
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
    if ( v99 && *((_BYTE *)v99 + 25) )
    {
      v82 = WdLogNewEntry5_WdEvent();
      DxgAdapterSyncObject = -1073741823;
      *(_QWORD *)(v82 + 24) = this;
      *(_QWORD *)(v82 + 32) = -1073741823LL;
      WdLogEvent5_WdEvent(v82);
      goto LABEL_54;
    }
    if ( *((_BYTE *)this + 279) && (*(_BYTE *)(v20 + 347) & 0x30) == 0 && !*((_BYTE *)this + 280) )
    {
      v83 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v83 + 24) = this;
      *(_QWORD *)(v83 + 32) = -1073741790LL;
      WdLogEvent5_WdWarning(v83);
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
        v51 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v51[3] = this;
        if ( v33 )
          v52 = *v33;
        else
          v52 = 0LL;
        v51[4] = v52;
        v53 = PsGetCurrentProcess(v50, v49);
        v54 = PsGetProcessDxgProcess(v53);
        v57 = v54;
        if ( v54 && (*(_BYTE *)(v54 + 347) & 0x10) == 0
          || (v90 = DXGTHREAD::GetCurrent(v56, v55)) == 0LL
          || (v58 = *((_QWORD *)v90 + 1)) == 0 )
        {
          v58 = v57;
        }
        v51[5] = v58;
        WdLogEvent5_WdEvent(v51);
LABEL_53:
        DxgAdapterSyncObject = 0;
        goto LABEL_54;
      }
      Global = DXGGLOBAL::GetGlobal(v31, v30);
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
      {
        v84 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v84 + 24) = 2375LL;
        WdLogEvent5_WdAssertion(v84);
      }
      v97 = v20 + 208;
      if ( v20 != -208 && *(struct _KTHREAD **)(v20 + 216) == KeGetCurrentThread() )
      {
        v85 = WdLogNewEntry5_WdAssertion(v20 + 208, v35);
        *(_QWORD *)(v85 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v85);
      }
      v37 = v97;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v86 = *(_DWORD *)(v37 + 24);
          if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v86);
        }
        ExAcquirePushLockExclusiveEx(v37, 0LL);
      }
      *(_QWORD *)(v37 + 8) = KeGetCurrentThread();
      v40 = (_QWORD *)(v20 + 240);
      v98 = 2;
      v41 = HMGRTABLE::AllocHandle((unsigned int *)(v20 + 240), (__int64)this, 8, 0, 0);
      *v33 = v41;
      v45 = v41;
      if ( !v41 )
      {
        v87 = WdLogNewEntry5_WdLowResource(v42, 0LL, v43, v44);
        DxgAdapterSyncObject = -1073741801;
        *(_QWORD *)(v87 + 24) = this;
        *(_QWORD *)(v87 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v87);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
        goto LABEL_54;
      }
      v46 = (v41 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v46 < *(_DWORD *)(v20 + 256) )
      {
        v42 = ((unsigned int)v45 >> 25) & 0x60;
        v47 = *(_DWORD *)(*v40 + 16 * v46 + 8);
        if ( (((unsigned int)v45 >> 25) & 0x60) == (*(_BYTE *)(*v40 + 16 * v46 + 8) & 0x60) )
        {
          v42 = 0x2000LL;
          if ( (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
            *(_DWORD *)(*v40 + 16 * (((unsigned __int64)(unsigned int)v45 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      if ( v98 == 1 )
      {
        v98 = 0;
        ExReleasePushLockSharedEx(v97, 0LL);
      }
      else
      {
        if ( v98 != 2 )
        {
LABEL_46:
          if ( *((_BYTE *)this + 277) )
          {
            if ( *((_DWORD *)this + 6) )
            {
              v88 = DXGGLOBAL::GetGlobal(v42, v45);
              v89 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v88 + 197),
                      (struct DXGPROCESS *)v20,
                      0LL,
                      *v33,
                      this,
                      0LL,
                      0,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26);
              if ( v89 < 0 )
              {
                DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v20, *v33);
                *v33 = 0;
                DxgAdapterSyncObject = v89;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_47;
        }
        v48 = v97;
        v98 = 0;
        *(_QWORD *)(v97 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v48, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_46;
    }
    if ( !a3 || !a2 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v91 + 24) = 2270LL;
      WdLogEvent5_WdAssertion(v91);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v66 = a5;
    if ( PoolWithQuotaTag )
      v67 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, v100, a10, a5 != 0LL);
    else
      v67 = 0LL;
    if ( v67 )
    {
      v68 = a8;
      DxgAdapterSyncObject = DXGDEVICESYNCOBJECT::Initialize(
                               v67,
                               this,
                               (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26,
                               a8);
      if ( DxgAdapterSyncObject >= 0 )
      {
        v71 = (struct DXGSYNCOBJECT *)*((_QWORD *)v67 + 4);
        if ( !*((_BYTE *)v71 + 277)
          || *((_DWORD *)this + 6) <= 1u
          || (v93 = DXGGLOBAL::GetGlobal(v70, v69),
              DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                       *((DXG_GUEST_GLOBAL_VMBUS **)v93 + 197),
                                       (struct DXGPROCESS *)v20,
                                       v100,
                                       0,
                                       v71,
                                       v67,
                                       v68,
                                       (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26),
              DxgAdapterSyncObject >= 0) )
        {
          if ( v66 )
            *v66 = *((_DWORD *)v67 + 10);
          *a6 = (void *)*((_QWORD *)v67 + 7);
          *a7 = *((_QWORD *)v67 + 6);
          v72 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v72[3] = this;
          v72[4] = *((unsigned int *)v67 + 10);
          v72[5] = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdEvent(v72);
          if ( v101 )
            *v101 = v67;
          goto LABEL_53;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v67);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v67);
      v11 = v101;
    }
    else
    {
      DxgAdapterSyncObject = -1073741801;
      v92 = WdLogNewEntry5_WdLowResource(v63, v62, v64, v65);
      *(_QWORD *)(v92 + 24) = this;
      *(_QWORD *)(v92 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v92);
    }
    if ( v11 )
      *v11 = 0LL;
  }
LABEL_54:
  if ( v95 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v94, v22);
  return (unsigned int)DxgAdapterSyncObject;
}
