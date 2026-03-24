/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0152210
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0004594 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006F9C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C003AB98 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0152654 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01526A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C022C260 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(__int64 a1, char a2, struct D3DDDI_MAKERESIDENT *a3, char *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rbx
  unsigned int ResidentInternal; // edi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  const D3DKMT_HANDLE *v32; // r15
  __int64 v33; // rax
  D3DKMT_HANDLE v34; // edi
  __int64 v35; // rax
  struct _KTHREAD *v36; // r8
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  struct _EX_RUNDOWN_REF *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  ULONG_PTR Count; // rsi
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 i; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v54; // rax
  struct _EX_RUNDOWN_REF *v55; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v56[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v57[8]; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  char v60; // [rsp+60h] [rbp-A0h]
  _BYTE v61[16]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v62[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v63; // [rsp+90h] [rbp-70h]
  _BYTE v64[160]; // [rsp+A0h] [rbp-60h] BYREF

  v58 = -1;
  v59 = 0LL;
  v7 = (unsigned int)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 3060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3060);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 3060LL);
  v62[0] = 0LL;
  v63 = 0;
  if ( !a2 )
    goto LABEL_37;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
  v13 = Current;
  if ( Current )
  {
    v56[0] = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v57, (unsigned int)v7, Current, v56);
    v20 = v56[0];
    if ( !v56[0] )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      ResidentInternal = -1073741811;
      v21[3] = -1073741811LL;
      v21[4] = v7;
      v21[5] = v13;
      WdLogEvent5_WdError(v21);
LABEL_45:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v57);
      goto LABEL_38;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61, v56[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v20, 0, v22, 0);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64, 0LL);
    v26 = v23;
    if ( v23 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
      v27[3] = v26;
      v27[4] = v20;
      v27[5] = v13;
      WdLogEvent5_WdEvent(v27);
LABEL_17:
      ResidentInternal = v26;
LABEL_44:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61);
      goto LABEL_45;
    }
    v28 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
    if ( *(int *)(v28 + 2328) < 0x2000 )
      v29 = 1LL;
    else
      v29 = *(unsigned int *)(v28 + 280);
    PagedPoolArray<unsigned int,4>::AllocateElements(v62, v29);
    v32 = (const D3DKMT_HANDLE *)v62[0];
    if ( !v62[0] )
    {
      v33 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v33 + 24) = 3437LL;
      WdLogEvent5_WdError(v33);
      LODWORD(v26) = -1073741801;
      goto LABEL_17;
    }
    v34 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 26));
    v35 = (v34 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v35 < *((_DWORD *)v13 + 64) )
    {
      v36 = v13[30];
      v37 = *((_DWORD *)v36 + 4 * v35 + 2);
      if ( ((v34 >> 25) & 0x60) == (*((_BYTE *)v36 + 16 * v35 + 8) & 0x60) && (v37 & 0x2000) == 0 && (v37 & 0x1F) != 0 )
      {
        v38 = v37 & 0x1F;
        if ( (_BYTE)v38 == 5 )
        {
          v40 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v36 + 2 * (unsigned int)v35);
          goto LABEL_25;
        }
        v39 = WdLogNewEntry5_WdError(v38, 2LL * (unsigned int)v35);
        *(_QWORD *)(v39 + 24) = 316LL;
        WdLogEvent5_WdError(v39);
      }
    }
    v40 = 0LL;
LABEL_25:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v55, v40);
    ExReleasePushLockSharedEx(v13 + 26, 0LL);
    KeLeaveCriticalRegion();
    ResidentInternal = -1073741811;
    if ( !v55 )
    {
      v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v44 + 24) = *a3->AllocationList;
      *(_QWORD *)(v44 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v44);
LABEL_43:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55, v45);
      goto LABEL_44;
    }
    Count = v55[5].Count;
    v47 = 0LL;
    if ( Count )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v56, (struct DXGFASTMUTEX *const)(Count + 80), 0);
      if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v32;
          a3->NumAllocations = v47;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
          goto LABEL_36;
        }
        if ( (unsigned int)v47 >= v63 )
          break;
        v32[v47] = *(_DWORD *)(i + 16);
        v47 = (unsigned int)(v47 + 1);
      }
      v54 = WdLogNewEntry5_WdError(v48, i);
      *(_QWORD *)(v54 + 24) = 3469LL;
      WdLogEvent5_WdError(v54);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
      goto LABEL_43;
    }
LABEL_36:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55, v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v61);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v57);
LABEL_37:
    ResidentInternal = DxgkMakeResidentInternal(a3, 0, a4);
    goto LABEL_38;
  }
  ResidentInternal = -1073741811;
  v15 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v15 + 24) = -1073741811LL;
  *(_QWORD *)(v15 + 32) = PsGetCurrentProcess(v17, v16);
  WdLogEvent5_WdError(v15);
LABEL_38:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v50);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v58);
  return ResidentInternal;
}
