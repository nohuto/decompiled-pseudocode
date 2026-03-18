/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C01C99F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0183644 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01C9BA8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C02DB520 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3, char *a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KTHREAD **Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  struct DXGDEVICE *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  const D3DKMT_HANDLE *v35; // r15
  D3DKMT_HANDLE v36; // edi
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ecx
  struct _EX_RUNDOWN_REF *v43; // rdx
  ULONG_PTR Count; // r8
  UINT v45; // edx
  __int64 i; // r8
  __int64 v47; // rcx
  struct DXGDEVICE *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v49; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h]
  char v53; // [rsp+78h] [rbp-88h]
  _BYTE v54[16]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v55[3]; // [rsp+90h] [rbp-70h] BYREF
  UINT v56; // [rsp+A8h] [rbp-58h]
  char v57[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v58[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v59[88]; // [rsp+F8h] [rbp-8h] BYREF

  v51 = -1;
  v5 = (unsigned int)a1;
  v52 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 3061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3061);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 3061);
  v55[0] = 0LL;
  v56 = 0;
  if ( !a2 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v21 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18, v17, v19, v20);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v27 = PsGetCurrentProcess(v24, v23, v25, v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v27,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v49 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v5, Current, &v49);
  v28 = v49;
  if ( v49 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54, v49);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v28, 0, v31, 0);
    v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
    v12 = v32;
    if ( v32 < 0 )
    {
      WdLogSingleEntry3(4LL, v32, v28, v21);
LABEL_47:
      COREACCESS::~COREACCESS((COREACCESS *)v59);
      COREACCESS::~COREACCESS((COREACCESS *)v58);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
      goto LABEL_48;
    }
    v33 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL);
    if ( *(int *)(v33 + 2424) < 0x2000 )
      v34 = 1LL;
    else
      v34 = *(unsigned int *)(v33 + 288);
    PagedPoolArray<unsigned int,4>::AllocateElements(v55, v34);
    v35 = (const D3DKMT_HANDLE *)v55[0];
    if ( !v55[0] )
    {
      WdLogSingleEntry1(2LL, 3597LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocation allocation array",
        3597LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_47;
    }
    v36 = *a3->AllocationList;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v39 = *(_DWORD *)(v21 + 272);
        if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, (const EVENT_DESCRIPTOR *)"g", v38, v39);
      }
      ExAcquirePushLockSharedEx(v21 + 248, 0LL);
    }
    v40 = (v36 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < *(_DWORD *)(v21 + 296) )
    {
      v41 = *(_QWORD *)(v21 + 280);
      v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
      if ( ((v36 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
      {
        if ( (v42 & 0x1F) == 5 )
        {
          v43 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * (unsigned int)v40);
          goto LABEL_33;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v43 = 0LL;
LABEL_33:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50, v43);
    ExReleasePushLockSharedEx(v21 + 248, 0LL);
    KeLeaveCriticalRegion();
    v12 = -1073741811;
    if ( v50 )
    {
      Count = v50[5].Count;
      v45 = 0;
      if ( !Count )
      {
LABEL_42:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50);
        COREACCESS::~COREACCESS((COREACCESS *)v59);
        COREACCESS::~COREACCESS((COREACCESS *)v58);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
        if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_4:
        v12 = DxgkEvictInternal(a3, 0, a4);
        goto LABEL_5;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v35;
          a3->NumAllocations = v45;
          goto LABEL_42;
        }
        if ( v45 >= v56 )
          break;
        v47 = v45++;
        v35[v47] = *(_DWORD *)(i + 16);
      }
      WdLogSingleEntry1(2LL, 3623LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Allocation index exceeds number of allocations in the array",
        3623LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry2(3LL, *a3->AllocationList, -1073741811LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50);
    goto LABEL_47;
  }
  v29 = v5;
  v30 = v5;
  v12 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v29, v21);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v30,
    v21,
    0LL,
    0LL);
LABEL_48:
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_5:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v51);
  }
  return v12;
}
