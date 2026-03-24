/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0266C44
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02668B8 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00072DC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C003BBF4 (--1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0254DEC (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  __int64 v2; // rsi
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  D3DKMT_HANDLE AllocationHandle; // r15d
  char *v8; // rbx
  char v9; // r12
  __int64 v10; // r15
  _QWORD *v11; // rdi
  __int64 Current; // rbx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  UINT v20; // ebx
  unsigned int HostProcess; // eax
  __int64 v22; // rax
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r13d
  unsigned int v24; // r12d
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // edx
  _QWORD *v38; // rdi
  __int64 v39; // r13
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  ULONG_PTR v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int8 *v47; // rsi
  UINT v48; // edi
  unsigned int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  ULONG_PTR v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  ULONG_PTR v56; // rcx
  unsigned int v57; // r12d
  __int64 v58; // r9
  int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // rax
  struct _EX_RUNDOWN_REF *v62; // rdx
  __int64 v63; // rdx
  struct _EX_RUNDOWN_REF *v64; // rdi
  ULONG_PTR v65; // rdx
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // edx
  _QWORD *v71; // r15
  __int64 v72; // r13
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  UINT v77; // ebx
  unsigned int v78; // eax
  struct _EX_RUNDOWN_REF *v79; // rbx
  struct DXGFASTMUTEX *v80; // rdx
  ULONG_PTR j; // rbx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  DXGPROCESSCOPYPROTECTIONMUTEX *v86; // rcx
  ULONG_PTR i; // rbx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  ULONG_PTR v91; // rcx
  size_t v92; // [rsp+38h] [rbp-C8h]
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v93; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v94; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v96; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v97; // [rsp+70h] [rbp-90h] BYREF
  struct DXGPROCESS *v98; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v99; // [rsp+80h] [rbp-80h] BYREF
  char *v100; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v101; // [rsp+90h] [rbp-70h]
  _BYTE v102[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v103[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v104[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v105[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v106[144]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v107[160]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v108[144]; // [rsp+220h] [rbp+120h] BYREF

  LODWORD(v2) = 0;
  v96 = (unsigned __int8 *)a1;
  v4 = (unsigned __int8 *)a1;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL);
    LODWORD(v2) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v2;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v98 = a2;
    v8 = (char *)a2 + 176;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v9 = 0;
    v10 = 0LL;
    v11 = (_QWORD *)*((_QWORD *)a2 + 35);
    v101 = v11;
    v100 = (char *)a2 + 280;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v100);
    if ( Current )
    {
      do
      {
        if ( (*(_BYTE *)(Current + 1869) & 1) != 0 )
        {
          v9 = 1;
          v10 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        }
        else
        {
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, Current, 0, v13, 0);
          v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
          v2 = v14;
          if ( v14 < 0
            || ((v17 = *(_QWORD **)(Current + 16), *(int *)(v17[2] + 2596LL) < 2000)
              ? (COREDEVICEACCESS::Release((COREDEVICEACCESS *)v107, v15),
                 v18 = DXGDEVICE::EvictAllAllocations((DXGDEVICE *)Current, v19))
              : (v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v17[80] + 8LL) + 880LL))(
                         v17[81],
                         *(_QWORD *)(Current + 760),
                         0LL,
                         0LL)),
                v2 = v18,
                v18 < 0) )
          {
            v22 = WdLogNewEntry5_WdError(v16, v15);
            *(_QWORD *)(v22 + 24) = v2;
            WdLogEvent5_WdError(v22);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
            goto LABEL_18;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
        }
        v11 = (_QWORD *)*v11;
        v101 = v11;
        Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v100);
      }
      while ( Current );
      if ( v9 )
      {
        v20 = *(_DWORD *)(v10 + 4312);
        HostProcess = DXGPROCESS::GetHostProcess(a2);
        LODWORD(v92) = 1088;
        LODWORD(v2) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4240),
                        HostProcess,
                        v20,
                        0,
                        0,
                        D3DKMT_ESCAPE_VIDMM,
                        0,
                        v92,
                        v96);
      }
    }
LABEL_18:
    DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v98);
    return (unsigned int)v2;
  }
  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  v93 = Value;
  if ( AllocationHandle )
  {
    v95 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v104,
      (struct _KTHREAD **)a2);
    v24 = (AllocationHandle >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)a2 + 64) )
    {
      v25 = *((_QWORD *)a2 + 30);
      v26 = *(_DWORD *)(v25 + 16LL * v24 + 8);
      if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0 )
      {
        v27 = v26 & 0x1F;
        if ( (_BYTE)v27 == 5 )
        {
          v29 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
          goto LABEL_27;
        }
        v28 = WdLogNewEntry5_WdError((AllocationHandle >> 25) & 0x60, v27);
        *(_QWORD *)(v28 + 24) = 316LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99, v29);
    DXGALLOCATIONREFERENCE::MoveAssign(&v95, &v99);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v99, v30);
    v31 = v95;
    if ( !v95 || (Count = v95[1].Count) == 0 )
    {
LABEL_33:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
      LODWORD(v2) = -1073741811;
LABEL_34:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v35);
      return (unsigned int)v2;
    }
    _m_prefetchw((const void *)(Count + 64));
    v33 = *(_QWORD *)(Count + 64);
    do
    {
      if ( !v33 )
        goto LABEL_33;
      v34 = v33;
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v33 + 1, v33);
    }
    while ( v34 != v33 );
    if ( v24 < *((_DWORD *)a2 + 64) )
    {
      v36 = *((_QWORD *)a2 + 30);
      v37 = *(_DWORD *)(v36 + 16LL * v24 + 8);
      if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v24 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        *(_DWORD *)(v36 + 16 * (((unsigned __int64)AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
    v38 = *(_QWORD **)(v31[1].Count + 16);
    if ( !v38 )
    {
LABEL_58:
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 208));
      if ( v24 < *((_DWORD *)a2 + 64) )
      {
        v53 = *((_QWORD *)a2 + 30);
        if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v53 + 16LL * v24 + 8) & 0x60)
          && (*(_DWORD *)(v53 + 16LL * v24 + 8) & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v53 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion((AllocationHandle >> 25) & 0x60, v53);
            *(_QWORD *)(v54 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v54);
            v53 = *((_QWORD *)a2 + 30);
          }
          *(_DWORD *)(v53 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 208, 0LL);
      KeLeaveCriticalRegion();
      v56 = v31[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v56 + 16), (struct DXGDEVICE *)v56);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v55);
      v4 = v96;
      Value = v93;
      goto LABEL_67;
    }
    v39 = v38[2];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, (struct DXGADAPTER *const)v39, 0LL);
    v40 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v108, 0LL);
    v2 = v40;
    if ( v40 < 0 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 208));
      if ( v24 < *((_DWORD *)a2 + 64) )
      {
        v41 = *((_QWORD *)a2 + 30);
        if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v41 + 16LL * v24 + 8) & 0x60)
          && (*(_DWORD *)(v41 + 16LL * v24 + 8) & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v41 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion((AllocationHandle >> 25) & 0x60, v41);
            *(_QWORD *)(v42 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v42);
            v41 = *((_QWORD *)a2 + 30);
          }
          *(_DWORD *)(v41 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 208, 0LL);
      KeLeaveCriticalRegion();
      v44 = v31[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v44 + 16), (struct DXGDEVICE *)v44);
      v45 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v45 + 24) = v2;
      WdLogEvent5_WdError(v45);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v46);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(v39 + 209) )
    {
      v47 = v96;
      *((_DWORD *)v96 + 3) = v95[12].Count;
      *((_QWORD *)v47 + 2) = 0LL;
      *((_DWORD *)v47 + 2) = 0;
      v48 = *(_DWORD *)(v39 + 4312);
      v49 = DXGPROCESS::GetHostProcess(a2);
      LODWORD(v92) = 1088;
      v50 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4240),
              v49,
              v48,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              v92,
              v47);
    }
    else
    {
      v52 = v31[1].Count;
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL) + 2596LL) < 2000 )
      {
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(v38[80] + 8LL) + 728LL))(
          v38[81],
          v95[3].Count,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v38[80] + 8LL) + 880LL))(
              v38[81],
              *(_QWORD *)(v52 + 760),
              v95[3].Count,
              0LL);
    }
    LODWORD(v2) = v50;
LABEL_57:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v51);
    goto LABEL_58;
  }
LABEL_67:
  if ( !*(_DWORD *)&Value )
    return (unsigned int)v2;
  v94 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v105, (struct _KTHREAD **)a2);
  v57 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
  if ( v57 >= *((_DWORD *)a2 + 64) )
    goto LABEL_74;
  v58 = *((_QWORD *)a2 + 30);
  v59 = *(_DWORD *)(v58 + 16LL * v57 + 8);
  if ( ((*(unsigned int *)&Value >> 25) & 0x60) != (*(_BYTE *)(v58 + 16LL * v57 + 8) & 0x60)
    || (v59 & 0x2000) != 0
    || (v59 & 0x1F) == 0 )
  {
    goto LABEL_74;
  }
  v60 = v59 & 0x1F;
  if ( (_BYTE)v60 != 4 )
  {
    v61 = WdLogNewEntry5_WdError((*(unsigned int *)&Value >> 25) & 0x60, v60);
    *(_QWORD *)(v61 + 24) = 316LL;
    WdLogEvent5_WdError(v61);
LABEL_74:
    v62 = 0LL;
    goto LABEL_75;
  }
  v62 = *(struct _EX_RUNDOWN_REF **)(v58 + 16LL * v57);
LABEL_75:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v97, v62);
  DXGRESOURCEREFERENCE::MoveAssign(&v94, &v97);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v97, v63);
  v64 = v94;
  if ( v94 )
  {
    v65 = v94[1].Count;
    if ( v65 )
    {
      _m_prefetchw((const void *)(v65 + 64));
      v66 = *(_QWORD *)(v65 + 64);
      while ( v66 )
      {
        v67 = v66;
        v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 64), v66 + 1, v66);
        if ( v67 == v66 )
        {
          if ( v57 < *((_DWORD *)a2 + 64) )
          {
            v69 = *((_QWORD *)a2 + 30);
            v70 = *(_DWORD *)(v69 + 16LL * v57 + 8);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v69 + 16LL * v57 + 8) & 0x60)
              && (v70 & 0x2000) == 0
              && (v70 & 0x1F) != 0 )
            {
              *(_DWORD *)(v69 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v105);
          v71 = *(_QWORD **)(v64[1].Count + 16);
          if ( v71 )
          {
            v72 = v71[2];
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v106, (struct DXGADAPTER *const)v72, 0LL);
            v73 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v106, 0LL);
            v2 = v73;
            if ( v73 >= 0 )
            {
              if ( *(_BYTE *)(v72 + 209) )
              {
                *((_DWORD *)v4 + 2) = HIDWORD(v94[2].Ptr);
                *((_DWORD *)v4 + 3) = 0;
                *((_QWORD *)v4 + 2) = 0LL;
                v77 = *(_DWORD *)(v72 + 4312);
                v78 = DXGPROCESS::GetHostProcess(a2);
                LODWORD(v92) = 1088;
                LODWORD(v2) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v72 + 4240),
                                v78,
                                v77,
                                0,
                                0,
                                D3DKMT_ESCAPE_VIDMM,
                                0,
                                v92,
                                v96);
              }
              else
              {
                v79 = v94;
                v80 = (struct DXGFASTMUTEX *)&v94[10];
                if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v64[1].Count + 16) + 16LL) + 2596LL) < 2000 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v103, v80, 0);
                  if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
                    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v103);
                  for ( i = v79[3].Count; i; i = *(_QWORD *)(i + 64) )
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v71[80] + 8LL) + 728LL))(
                      v71[81],
                      *(_QWORD *)(i + 24),
                      0LL,
                      0LL);
                  v86 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v103;
                }
                else
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v102, v80, 0);
                  if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
                    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v102);
                  for ( j = v79[3].Count; j; j = *(_QWORD *)(j + 64) )
                  {
                    v82 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v71[80] + 8LL) + 880LL))(
                            v71[81],
                            *(_QWORD *)(v64[1].Count + 760),
                            *(_QWORD *)(j + 24),
                            0LL);
                    v2 = v82;
                    if ( v82 < 0 )
                    {
                      v85 = WdLogNewEntry5_WdError(v84, v83);
                      *(_QWORD *)(v85 + 24) = v2;
                      WdLogEvent5_WdError(v85);
                      break;
                    }
                  }
                  v86 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v102;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v86);
              }
            }
            else
            {
              v75 = WdLogNewEntry5_WdError(v74, 0LL);
              *(_QWORD *)(v75 + 24) = v2;
              WdLogEvent5_WdError(v75);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106, v76);
            Value = v93;
          }
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 208));
          if ( v57 < *((_DWORD *)a2 + 64) )
          {
            v88 = *((_QWORD *)a2 + 30);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v88 + 16LL * v57 + 8) & 0x60)
              && (*(_DWORD *)(v88 + 16LL * v57 + 8) & 0x1F) != 0 )
            {
              if ( (*(_DWORD *)(v88 + 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
              {
                v89 = WdLogNewEntry5_WdAssertion((*(unsigned int *)&Value >> 25) & 0x60, v88);
                *(_QWORD *)(v89 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v89);
                v88 = *((_QWORD *)a2 + 30);
              }
              *(_DWORD *)(v88 + 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)a2 + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 208, 0LL);
          KeLeaveCriticalRegion();
          v91 = v64[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v91 + 16), (struct DXGDEVICE *)v91);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v90);
          return (unsigned int)v2;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v105);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v68);
  return -1073741811LL;
}
