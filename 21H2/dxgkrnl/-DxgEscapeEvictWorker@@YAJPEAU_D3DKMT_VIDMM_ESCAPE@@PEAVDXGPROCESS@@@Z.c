/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0307564
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000BD28 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C02E53D0 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0377104 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  __int64 v3; // rsi
  D3DKMT_HANDLE AllocationHandle; // r12d
  char *v6; // rdi
  char v7; // r12
  __int64 v8; // r13
  struct _EX_RUNDOWN_REF *Count; // r15
  __int64 Current; // rax
  __int64 v11; // r9
  DXGDEVICE *v12; // rbx
  int v13; // eax
  _QWORD *v14; // r8
  int v15; // eax
  __int64 v16; // rbx
  const wchar_t *v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int HostProcess; // eax
  unsigned __int64 Value; // rdi
  unsigned int v22; // r13d
  __int64 v23; // r9
  int v24; // edx
  struct _EX_RUNDOWN_REF *v25; // rdx
  struct _EX_RUNDOWN_REF *v26; // rbx
  ULONG_PTR v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v30; // r8
  int v31; // edx
  _QWORD *v32; // rdi
  int v33; // eax
  struct DXGADAPTER *v34; // rdi
  __int64 v35; // rdx
  ULONG_PTR v36; // rcx
  struct DXGADAPTER *v37; // rdx
  unsigned __int8 *v38; // rsi
  unsigned int v39; // edi
  unsigned int v40; // eax
  int v41; // eax
  ULONG_PTR v42; // rdx
  char *v43; // rdi
  __int64 v44; // rdx
  ULONG_PTR v45; // rcx
  unsigned int v46; // r12d
  __int64 v47; // r10
  int v48; // edx
  struct _EX_RUNDOWN_REF *v49; // rdx
  struct _EX_RUNDOWN_REF *v50; // rbx
  ULONG_PTR v51; // rdx
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  __int64 v54; // r8
  int v55; // edx
  _QWORD *v56; // r13
  __int64 v57; // rdi
  int v58; // eax
  const wchar_t *v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rdi
  ULONG_PTR v62; // rcx
  unsigned int v63; // edi
  unsigned int v64; // eax
  ULONG_PTR v65; // rdi
  int v66; // eax
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v67; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v70; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v72; // [rsp+78h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v73[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v74[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v75[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v76[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v77[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v78[88]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v79[144]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v80[144]; // [rsp+1F0h] [rbp+F0h] BYREF

  v72 = (unsigned __int8 *)a1;
  LODWORD(v3) = 0;
  if ( !a2 )
  {
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v6 = (char *)a2 + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v7 = 0;
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v8 = 0LL;
    Count = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a2 + 40);
    v73[0] = (struct _EX_RUNDOWN_REF *)((char *)a2 + 320);
    while ( 1 )
    {
      v73[1] = Count;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v73);
      v12 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1869) & 1) != 0 )
      {
        v7 = 1;
        v8 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      }
      else
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, Current, 0, v11, 0);
        v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v76, 0LL);
        LODWORD(v3) = v13;
        if ( v13 < 0 )
        {
          v16 = v13;
          WdLogSingleEntry1(2LL, v13);
          v17 = L"Failed to acquire coredeviceaccess shared lock, returning 0x%I64x";
          goto LABEL_18;
        }
        v14 = (_QWORD *)*((_QWORD *)v12 + 2);
        if ( *(int *)(v14[2] + 2692LL) < 2000 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v76);
          v18 = DXGDEVICE::EvictAllAllocations(v12);
          LODWORD(v3) = v18;
          if ( v18 < 0 )
          {
            v16 = v18;
            WdLogSingleEntry1(2LL, v18);
            v17 = L"Failed to Evict All Allocations, returning 0x%I64x";
            goto LABEL_18;
          }
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v14[81] + 8LL) + 888LL))(
                  v14[82],
                  *((_QWORD *)v12 + 95),
                  0LL,
                  0LL);
          LODWORD(v3) = v15;
          if ( v15 < 0 )
          {
            v16 = v15;
            WdLogSingleEntry1(2LL, v15);
            v17 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
LABEL_18:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
            COREACCESS::~COREACCESS((COREACCESS *)v78);
            COREACCESS::~COREACCESS((COREACCESS *)v77);
            *((_QWORD *)v6 + 1) = 0LL;
            goto LABEL_22;
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v78);
        COREACCESS::~COREACCESS((COREACCESS *)v77);
      }
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    }
    if ( v7 )
    {
      v19 = *(_DWORD *)(v8 + 4432);
      HostProcess = DXGPROCESS::GetHostProcess(a2);
      LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4344),
                      HostProcess,
                      v19,
                      0,
                      0,
                      D3DKMT_ESCAPE_VIDMM,
                      0,
                      0x440u,
                      v72);
    }
    *((_QWORD *)v6 + 1) = 0LL;
LABEL_22:
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v3;
  }
  Value = a1->SetFault.Value;
  v67 = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  if ( AllocationHandle )
  {
    v68 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v74, a2);
    v22 = (AllocationHandle >> 6) & 0xFFFFFF;
    if ( v22 < *((_DWORD *)a2 + 74) )
    {
      v23 = *((_QWORD *)a2 + 35);
      v24 = *(_DWORD *)(v23 + 16LL * v22 + 8);
      if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0 )
      {
        if ( (v24 & 0x1F) == 5 )
        {
          v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
          goto LABEL_31;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v25 = 0LL;
LABEL_31:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v73, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v68, v73);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v73);
    v26 = v68;
    if ( !v68 || (v27 = v68[1].Count) == 0 )
    {
LABEL_37:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
      LODWORD(v3) = -1073741811;
LABEL_38:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68);
      return (unsigned int)v3;
    }
    _m_prefetchw((const void *)(v27 + 64));
    v28 = *(_QWORD *)(v27 + 64);
    do
    {
      if ( !v28 )
        goto LABEL_37;
      v29 = v28;
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v28 + 1, v28);
    }
    while ( v29 != v28 );
    if ( v22 < *((_DWORD *)a2 + 74) )
    {
      v30 = *((_QWORD *)a2 + 35);
      v31 = *(_DWORD *)(v30 + 16LL * v22 + 8);
      if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v22 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *(_DWORD *)(v30 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
    v32 = *(_QWORD **)(v26[1].Count + 16);
    if ( !v32 )
    {
LABEL_62:
      v43 = (char *)a2 + 248;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      if ( v22 < *((_DWORD *)a2 + 74) )
      {
        v44 = *((_QWORD *)a2 + 35);
        if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v44 + 16LL * v22 + 8) & 0x60)
          && (*(_DWORD *)(v44 + 16LL * v22 + 8) & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v44 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
            v44 = *((_QWORD *)a2 + 35);
          }
          *(_DWORD *)(v44 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
          v43 = (char *)a2 + 248;
        }
      }
      *((_QWORD *)v43 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v43, 0LL);
      KeLeaveCriticalRegion();
      v45 = v26[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v45 + 16), (struct DXGDEVICE *)v45);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68);
      Value = (unsigned int)v67;
      goto LABEL_71;
    }
    v70 = (struct DXGADAPTER *)v32[2];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, v70, 0LL);
    v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80, 0LL);
    v3 = v33;
    if ( v33 < 0 )
    {
      v34 = (struct DXGPROCESS *)((char *)a2 + 248);
      v70 = (struct DXGPROCESS *)((char *)a2 + 248);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      if ( v22 < *((_DWORD *)a2 + 74) )
      {
        v35 = *((_QWORD *)a2 + 35);
        if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v22 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16LL * v22 + 8) & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v35 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
            v35 = *((_QWORD *)a2 + 35);
          }
          *(_DWORD *)(v35 + 16LL * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
          v34 = v70;
        }
      }
      *((_QWORD *)v34 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
      v36 = v26[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
      WdLogSingleEntry1(2LL, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
      goto LABEL_38;
    }
    v37 = v70;
    if ( *((_BYTE *)v70 + 209) )
    {
      v38 = v72;
      *((_DWORD *)v72 + 3) = HIDWORD(v68[2].Ptr);
      *((_QWORD *)v38 + 2) = 0LL;
      *((_DWORD *)v38 + 2) = 0;
      v39 = *((_DWORD *)v37 + 1108);
      v40 = DXGPROCESS::GetHostProcess(a2);
      v41 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (struct DXGADAPTER *)((char *)v70 + 4344),
              v40,
              v39,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              0x440u,
              v38);
    }
    else
    {
      v42 = v26[1].Count;
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 2692LL) < 2000 )
      {
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(v32[81] + 8LL) + 736LL))(
          v32[82],
          v68[3].Count,
          0LL,
          0LL);
        goto LABEL_61;
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v32[81] + 8LL) + 888LL))(
              v32[82],
              *(_QWORD *)(v42 + 760),
              v68[3].Count,
              0LL);
    }
    LODWORD(v3) = v41;
LABEL_61:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
    goto LABEL_62;
  }
LABEL_71:
  if ( !(_DWORD)Value )
    return (unsigned int)v3;
  v69 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v75, a2);
  v46 = ((unsigned int)Value >> 6) & 0xFFFFFF;
  if ( v46 >= *((_DWORD *)a2 + 74) )
    goto LABEL_78;
  v47 = *((_QWORD *)a2 + 35);
  v48 = *(_DWORD *)(v47 + 16LL * v46 + 8);
  if ( (((unsigned int)Value >> 25) & 0x60) != (*(_BYTE *)(v47 + 16LL * v46 + 8) & 0x60)
    || (v48 & 0x2000) != 0
    || (v48 & 0x1F) == 0 )
  {
    goto LABEL_78;
  }
  if ( (v48 & 0x1F) != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_78:
    v49 = 0LL;
    goto LABEL_79;
  }
  v49 = *(struct _EX_RUNDOWN_REF **)(v47 + 16LL * v46);
LABEL_79:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v71, v49);
  DXGRESOURCEREFERENCE::MoveAssign(&v69, &v71);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
  v50 = v69;
  if ( v69 )
  {
    v51 = v69[1].Count;
    if ( v51 )
    {
      _m_prefetchw((const void *)(v51 + 64));
      v52 = *(_QWORD *)(v51 + 64);
      while ( v52 )
      {
        v53 = v52;
        v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 64), v52 + 1, v52);
        if ( v53 == v52 )
        {
          if ( v46 < *((_DWORD *)a2 + 74) )
          {
            v54 = *((_QWORD *)a2 + 35);
            v55 = *(_DWORD *)(v54 + 16LL * v46 + 8);
            if ( (((unsigned int)Value >> 25) & 0x60) == (*(_BYTE *)(v54 + 16LL * v46 + 8) & 0x60)
              && (v55 & 0x2000) == 0
              && (v55 & 0x1F) != 0 )
            {
              *(_DWORD *)(v54 + 16LL * (((unsigned int)Value >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
          v56 = *(_QWORD **)(v50[1].Count + 16);
          if ( v56 )
          {
            v57 = v56[2];
            v70 = (struct DXGADAPTER *)v57;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, (struct DXGADAPTER *const)v57, 0LL);
            v58 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79, 0LL);
            v3 = v58;
            if ( v58 >= 0 )
            {
              if ( *(_BYTE *)(v57 + 209) )
              {
                v3 = (__int64)v72;
                v56 = 0LL;
                *((_DWORD *)v72 + 2) = HIDWORD(v69[2].Ptr);
                *(_DWORD *)(v3 + 12) = 0;
                *(_QWORD *)(v3 + 16) = 0LL;
                v63 = *(_DWORD *)(v57 + 4432);
                v64 = DXGPROCESS::GetHostProcess(a2);
                LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                (struct DXGADAPTER *)((char *)v70 + 4344),
                                v64,
                                v63,
                                0,
                                0,
                                D3DKMT_ESCAPE_VIDMM,
                                0,
                                0x440u,
                                (unsigned __int8 *)v3);
              }
              else
              {
                v65 = v69[3].Count;
                if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v50[1].Count + 16) + 16LL) + 2692LL) >= 2000 )
                {
                  while ( v65 )
                  {
                    v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v56[81] + 8LL) + 888LL))(
                            v56[82],
                            *(_QWORD *)(v50[1].Count + 760),
                            *(_QWORD *)(v65 + 24),
                            0LL);
                    v3 = v66;
                    if ( v66 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v66);
                      v59 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
                      goto LABEL_94;
                    }
                    v65 = *(_QWORD *)(v65 + 64);
                  }
                }
                else
                {
                  while ( v65 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v56[81] + 8LL) + 736LL))(
                      v56[82],
                      *(_QWORD *)(v65 + 24),
                      0LL,
                      0LL);
                    v65 = *(_QWORD *)(v65 + 64);
                  }
                }
                v56 = 0LL;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v58);
              v59 = L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x";
LABEL_94:
              v56 = 0LL;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v59, v3, 0LL, 0LL, 0LL, 0LL);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
            Value = (unsigned int)v67;
          }
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
          if ( v46 < *((_DWORD *)a2 + 74) )
          {
            v60 = *((_QWORD *)a2 + 35);
            if ( (((unsigned int)Value >> 25) & 0x60) == (*(_BYTE *)(v60 + 16LL * v46 + 8) & 0x60)
              && (*(_DWORD *)(v60 + 16LL * v46 + 8) & 0x1F) != 0 )
            {
              v61 = 2 * ((Value >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v60 + 8 * v61 + 8) & 0x2000) == 0 )
              {
                WdLogSingleEntry1(1LL, 217LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                  217LL,
                  (__int64)v56,
                  (__int64)v56,
                  (__int64)v56,
                  (__int64)v56);
                v60 = *((_QWORD *)a2 + 35);
              }
              *(_DWORD *)(v60 + 8 * v61 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)a2 + 32) = v56;
          ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
          v62 = v50[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v62 + 16), (struct DXGDEVICE *)v62);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
          return (unsigned int)v3;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
  return -1073741811LL;
}
