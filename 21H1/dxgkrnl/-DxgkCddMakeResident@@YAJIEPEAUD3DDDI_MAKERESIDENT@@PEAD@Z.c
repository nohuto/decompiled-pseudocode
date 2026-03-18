/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0144010
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01440E8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C0144130 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C02282C0 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(__int64 a1, char a2, struct D3DDDI_MAKERESIDENT *a3, char *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int ResidentInternal; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD **Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD **v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGDEVICE *v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const D3DKMT_HANDLE *v36; // rsi
  __int64 v37; // rax
  D3DKMT_HANDLE v38; // r15d
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  struct _KTHREAD *v43; // r8
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  ULONG_PTR Count; // r8
  __int64 v54; // rdx
  __int64 i; // r8
  __int64 v56; // rax
  struct DXGDEVICE *v57; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v58; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h]
  char v62; // [rsp+58h] [rbp-A8h]
  _BYTE v63[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v64[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v65; // [rsp+88h] [rbp-78h]
  char v66[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v67[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v68[88]; // [rsp+D8h] [rbp-28h] BYREF

  v60 = -1;
  v61 = 0LL;
  v7 = (unsigned int)a1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v62 = 1;
    v60 = 3060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3060);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 3060LL);
  v64[0] = 0LL;
  v65 = 0;
  if ( !a2 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
  v18 = Current;
  if ( !Current )
  {
    ResidentInternal = -1073741811;
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = PsGetCurrentProcess(v21, v20);
    WdLogEvent5_WdError(v19);
    goto LABEL_5;
  }
  v58 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, (unsigned int)v7, Current, &v58);
  v24 = v58;
  if ( v58 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63, v58);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v24, 0, v26, 0);
    v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66, 0LL);
    v30 = v27;
    if ( v27 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v29, v28);
      v31[3] = v30;
      v31[4] = v24;
      v31[5] = v18;
      WdLogEvent5_WdEvent(v31);
LABEL_20:
      ResidentInternal = v30;
LABEL_48:
      COREACCESS::~COREACCESS((COREACCESS *)v68);
      COREACCESS::~COREACCESS((COREACCESS *)v67);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
      goto LABEL_49;
    }
    v32 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL);
    if ( *(int *)(v32 + 2304) < 0x2000 )
      v33 = 1LL;
    else
      v33 = *(unsigned int *)(v32 + 280);
    PagedPoolArray<unsigned int,4>::AllocateElements(v64, v33);
    v36 = (const D3DKMT_HANDLE *)v64[0];
    if ( !v64[0] )
    {
      v37 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v37 + 24) = 3430LL;
      WdLogEvent5_WdError(v37);
      LODWORD(v30) = -1073741801;
      goto LABEL_20;
    }
    v38 = *a3->AllocationList;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v18 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v41 = *((_DWORD *)v18 + 58);
        if ( v41 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v40, v41);
      }
      ExAcquirePushLockSharedEx(v18 + 26, 0LL);
    }
    v42 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v42 < *((_DWORD *)v18 + 64) )
    {
      v43 = v18[30];
      v44 = *((_DWORD *)v43 + 4 * v42 + 2);
      if ( ((v38 >> 25) & 0x60) == (*((_BYTE *)v43 + 16 * v42 + 8) & 0x60) && (v44 & 0x2000) == 0 && (v44 & 0x1F) != 0 )
      {
        v45 = v44 & 0x1F;
        if ( (_BYTE)v45 == 5 )
        {
          v47 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v43 + 2 * (unsigned int)v42);
          goto LABEL_34;
        }
        v46 = WdLogNewEntry5_WdError(v45, 2LL * (unsigned int)v42);
        *(_QWORD *)(v46 + 24) = 267LL;
        WdLogEvent5_WdError(v46);
      }
    }
    v47 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59, v47);
    ExReleasePushLockSharedEx(v18 + 26, 0LL);
    KeLeaveCriticalRegion();
    ResidentInternal = -1073741811;
    if ( v59 )
    {
      Count = v59[5].Count;
      v54 = 0LL;
      if ( !Count )
      {
LABEL_43:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59, v54);
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        COREACCESS::~COREACCESS((COREACCESS *)v67);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
        if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
LABEL_4:
        ResidentInternal = DxgkMakeResidentInternal(a3, 0, a4);
        goto LABEL_5;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v36;
          a3->NumAllocations = v54;
          goto LABEL_43;
        }
        if ( (unsigned int)v54 >= v65 )
          break;
        v36[v54] = *(_DWORD *)(i + 16);
        v54 = (unsigned int)(v54 + 1);
      }
      v56 = WdLogNewEntry5_WdError(v49, v54);
      *(_QWORD *)(v56 + 24) = 3456LL;
      WdLogEvent5_WdError(v56);
    }
    else
    {
      v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
      *(_QWORD *)(v51 + 24) = *a3->AllocationList;
      *(_QWORD *)(v51 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v51);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59, v52);
    goto LABEL_48;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
  ResidentInternal = -1073741811;
  v25[3] = -1073741811LL;
  v25[4] = v7;
  v25[5] = v18;
  WdLogEvent5_WdError(v25);
LABEL_49:
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
LABEL_5:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v11);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v60);
  return ResidentInternal;
}
