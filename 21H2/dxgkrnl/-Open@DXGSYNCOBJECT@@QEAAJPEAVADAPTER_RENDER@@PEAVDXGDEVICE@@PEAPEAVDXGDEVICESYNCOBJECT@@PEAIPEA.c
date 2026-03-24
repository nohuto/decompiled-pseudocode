/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010ED88 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C011B2E0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C01545B8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171A20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244240 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0279660 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029AFA8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000219C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006860 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0115F28 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C015C304 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C024A328 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290C94 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C029496C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  struct DXGTHREAD *Current; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rax
  unsigned int *v30; // rsi
  struct DXGADAPTERSYNCOBJECT **v31; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rax
  DXGFASTMUTEX *v35; // rsi
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  _QWORD *v59; // r14
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r8d
  __int64 v68; // rcx
  struct DXGGLOBAL *v69; // rax
  int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdi
  struct DXGTHREAD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned int *v88; // r15
  DXGDEVICESYNCOBJECT *v89; // r14
  __int64 v90; // rax
  unsigned int v91; // r12d
  __int64 v92; // rdx
  __int64 v93; // rcx
  struct DXGGLOBAL *v94; // rax
  _QWORD *v95; // rbx
  DXGFASTMUTEX *v97; // [rsp+40h] [rbp-30h] BYREF
  char v98; // [rsp+48h] [rbp-28h]
  char v99[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v100; // [rsp+58h] [rbp-18h]
  int v101; // [rsp+60h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v102; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGDEVICE *v103; // [rsp+C0h] [rbp+50h]
  struct DXGDEVICESYNCOBJECT **v104; // [rsp+C8h] [rbp+58h]

  v104 = a4;
  v103 = a3;
  v11 = a4;
  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v19 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v18, v17)) == 0LL
    || (v21 = *((_QWORD *)Current + 1)) == 0 )
  {
    v21 = v19;
  }
  v98 = 0;
  v97 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v22 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v97 + 2) == CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(CurrentThread, v17);
    *(_QWORD *)(v24 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( v98 )
  {
    v25 = WdLogNewEntry5_WdCriticalError(CurrentThread, v17);
    *(_QWORD *)(v25 + 40) = &v97;
    *(_QWORD *)(v25 + 24) = 275LL;
    *(_QWORD *)(v25 + 32) = 4LL;
    *(_OWORD *)(v25 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  DXGFASTMUTEX::Acquire(v97);
  v28 = *((_DWORD *)this + 49);
  v102 = 0LL;
  v98 = 1;
  if ( (v28 & 4) != 0 )
  {
    LODWORD(v30) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v102);
    if ( (int)v30 >= 0 )
      goto LABEL_19;
  }
  else
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 39) == a2 )
    {
      v102 = (DXGSYNCOBJECT *)((char *)this + 296);
      goto LABEL_19;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v29[3] = this;
    v29[4] = *((_QWORD *)this + 39);
    v29[5] = a2;
    v29[6] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    LODWORD(v30) = -1073741811;
  }
  if ( a2 )
    goto LABEL_98;
LABEL_19:
  v31 = a9;
  if ( a9 )
    *a9 = v102;
  v32 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 196)) & 0x80u) != 0 )
  {
    v33 = WdLogNewEntry5_WdError(v31, v26);
    *(_QWORD *)(v33 + 24) = 2238LL;
    WdLogEvent5_WdError(v33);
    LODWORD(v30) = -1073741811;
    goto LABEL_98;
  }
  if ( !v98 )
  {
    v34 = WdLogNewEntry5_WdCriticalError(v31, v26);
    *(_QWORD *)(v34 + 40) = &v97;
    *(_QWORD *)(v34 + 24) = 275LL;
    *(_QWORD *)(v34 + 32) = 4LL;
    *(_OWORD *)(v34 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  v35 = v97;
  v98 = 0;
  if ( *((struct _KTHREAD **)v97 + 2) != KeGetCurrentThread() )
  {
    v36 = WdLogNewEntry5_WdCriticalError(v31, v26);
    *(_QWORD *)(v36 + 24) = 275LL;
    *(_QWORD *)(v36 + 32) = 4LL;
    *(_QWORD *)(v36 + 40) = v35;
    *(_OWORD *)(v36 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  v37 = *((_DWORD *)v35 + 6);
  if ( v37 <= 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v31, v26);
    *(_QWORD *)(v38 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v38);
    v37 = *((_DWORD *)v35 + 6);
  }
  v39 = v37 - 1;
  *((_DWORD *)v35 + 6) = v39;
  if ( !v39 )
  {
    *((_QWORD *)v35 + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v35, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v102 && *((_BYTE *)v102 + 25) )
  {
    v43 = WdLogNewEntry5_WdEvent();
    LODWORD(v30) = -1073741823;
    *(_QWORD *)(v43 + 24) = this;
    *(_QWORD *)(v43 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v43);
    goto LABEL_98;
  }
  if ( *((_BYTE *)this + 279) && (*(_BYTE *)(v21 + 347) & 0x30) == 0 && !*((_BYTE *)this + 280) )
  {
    v44 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v44 + 24) = this;
    *(_QWORD *)(v44 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v44);
    LODWORD(v30) = -1073741823;
    goto LABEL_98;
  }
  if ( (unsigned int)(*((_DWORD *)this + 48) - 5) > 1 )
  {
    v45 = DXGSYNCOBJECT::AddReference(this, v40, v42);
    v30 = (unsigned int *)v45;
    if ( v45 < 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v49 + 24) = this;
      *(_QWORD *)(v49 + 32) = v30;
      WdLogEvent5_WdWarning(v49);
      goto LABEL_98;
    }
    v30 = a5;
    if ( !a5 )
      goto LABEL_69;
    Global = DXGGLOBAL::GetGlobal(v47, v46);
    if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v52, v51);
      *(_QWORD *)(v53 + 24) = 2397LL;
      WdLogEvent5_WdAssertion(v53);
    }
    v100 = v21 + 208;
    if ( v21 != -208 && *(struct _KTHREAD **)(v21 + 216) == KeGetCurrentThread() )
    {
      v54 = WdLogNewEntry5_WdAssertion(v21 + 208, v51);
      *(_QWORD *)(v54 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v54);
    }
    v55 = v100;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v55, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v58 = *(_DWORD *)(v55 + 24);
        if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v56, &EventBlockThread, v57, v58);
      }
      ExAcquirePushLockExclusiveEx(v55, 0LL);
    }
    *(_QWORD *)(v55 + 8) = KeGetCurrentThread();
    v59 = (_QWORD *)(v21 + 240);
    v101 = 2;
    v60 = HMGRTABLE::AllocHandle((unsigned int *)(v21 + 240), (__int64)this, 8, 0, 0);
    *v30 = v60;
    v64 = v60;
    if ( !v60 )
    {
      v65 = WdLogNewEntry5_WdLowResource(v61, 0LL, v62, v63);
      LODWORD(v30) = -1073741801;
      *(_QWORD *)(v65 + 24) = this;
      *(_QWORD *)(v65 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v65);
      _InterlockedDecrement((volatile signed __int32 *)this + 6);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
      goto LABEL_98;
    }
    v66 = (v60 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v66 < *(_DWORD *)(v21 + 256) )
    {
      v61 = ((unsigned int)v64 >> 25) & 0x60;
      v67 = *(_DWORD *)(*v59 + 16 * v66 + 8);
      if ( (((unsigned int)v64 >> 25) & 0x60) == (*(_BYTE *)(*v59 + 16 * v66 + 8) & 0x60) )
      {
        v61 = 0x2000LL;
        if ( (v67 & 0x2000) == 0 && (v67 & 0x1F) != 0 )
          *(_DWORD *)(*v59 + 16 * (((unsigned __int64)(unsigned int)v64 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    if ( v101 == 1 )
    {
      v101 = 0;
      ExReleasePushLockSharedEx(v100, 0LL);
    }
    else
    {
      if ( v101 != 2 )
      {
LABEL_65:
        if ( *((_BYTE *)this + 277) )
        {
          if ( *((_DWORD *)this + 6) > 1u )
          {
            v69 = DXGGLOBAL::GetGlobal(v61, v64);
            v70 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                    *((DXG_GUEST_GLOBAL_VMBUS **)v69 + 197),
                    (struct DXGPROCESS *)v21,
                    0LL,
                    *v30,
                    this,
                    0LL,
                    0,
                    (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v32);
            if ( v70 < 0 )
            {
              DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v21, *v30);
              *v30 = 0;
              LODWORD(v30) = v70;
              _InterlockedDecrement((volatile signed __int32 *)this + 6);
              goto LABEL_98;
            }
          }
        }
LABEL_69:
        v73 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v73[3] = this;
        if ( v30 )
          v74 = *v30;
        else
          v74 = 0LL;
        v73[4] = v74;
        v75 = PsGetCurrentProcess(v72, v71);
        v76 = PsGetProcessDxgProcess(v75);
        v79 = v76;
        if ( v76 && (*(_BYTE *)(v76 + 347) & 0x10) == 0
          || (v80 = DXGTHREAD::GetCurrent(v78, v77)) == 0LL
          || (v81 = *((_QWORD *)v80 + 1)) == 0 )
        {
          v81 = v79;
        }
        v73[5] = v81;
        WdLogEvent5_WdEvent(v73);
        LODWORD(v30) = 0;
        goto LABEL_98;
      }
      v68 = v100;
      v101 = 0;
      *(_QWORD *)(v100 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v68, 0LL);
    }
    KeLeaveCriticalRegion();
    goto LABEL_65;
  }
  if ( !a3 || !a2 )
  {
    v82 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v82 + 24) = 2278LL;
    WdLogEvent5_WdAssertion(v82);
  }
  PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
  v88 = a5;
  if ( PoolWithQuotaTag )
    v89 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, v103, a10, a5 != 0LL);
  else
    v89 = 0LL;
  if ( !v89 )
  {
    LODWORD(v30) = -1073741801;
    v90 = WdLogNewEntry5_WdLowResource(v85, v84, v86, v87);
    *(_QWORD *)(v90 + 24) = this;
    *(_QWORD *)(v90 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v90);
    goto LABEL_96;
  }
  v91 = a8;
  LODWORD(v30) = DXGDEVICESYNCOBJECT::Initialize(v89, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v32, a8);
  if ( (int)v30 < 0
    || (v30 = (unsigned int *)*((_QWORD *)v89 + 4), *((_BYTE *)v30 + 277))
    && *((_DWORD *)this + 6) > 1u
    && (v94 = DXGGLOBAL::GetGlobal(v93, v92),
        LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v94 + 197),
                         (struct DXGPROCESS *)v21,
                         v103,
                         0,
                         (struct DXGSYNCOBJECT *)v30,
                         v89,
                         v91,
                         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v32),
        (int)v30 < 0) )
  {
    DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v89);
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v89);
    v11 = v104;
LABEL_96:
    if ( v11 )
      *v11 = 0LL;
    goto LABEL_98;
  }
  if ( v88 )
    *v88 = *((_DWORD *)v89 + 10);
  *a6 = (void *)*((_QWORD *)v89 + 7);
  *a7 = *((_QWORD *)v89 + 6);
  v95 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v95[3] = this;
  v95[4] = *((unsigned int *)v89 + 10);
  v95[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v95);
  if ( v104 )
    *v104 = v89;
  LODWORD(v30) = 0;
LABEL_98:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v97, v26);
  return (unsigned int)v30;
}
