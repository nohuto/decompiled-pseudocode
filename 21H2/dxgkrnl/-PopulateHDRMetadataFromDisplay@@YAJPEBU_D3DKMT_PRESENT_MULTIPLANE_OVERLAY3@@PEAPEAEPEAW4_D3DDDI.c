/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C01A07B0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___ @ 0x1C000F1F0 (DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03B0488 (MonitorGetAdvancedColorMetadataOverride.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  void *v5; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  D3DKMT_HANDLE v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  _QWORD *v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 VidPnSourceId; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _KTHREAD **v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r14
  struct _KTHREAD **v42; // rdi
  int v43; // eax
  int v44; // eax
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v53; // rax
  struct DXGTHREAD *Current; // rax
  int v55; // r9d
  int v56; // eax
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  int AdvancedColorMetadataOverride; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // r9
  char *v74; // rdx
  struct _KTHREAD **v75; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v76; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v78[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v79; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v80; // [rsp+90h] [rbp-78h]
  char v81; // [rsp+98h] [rbp-70h]
  enum _D3DDDI_HDR_METADATA_TYPE *v82; // [rsp+A0h] [rbp-68h]
  unsigned int *v83; // [rsp+A8h] [rbp-60h]
  volatile signed __int64 *v84; // [rsp+B0h] [rbp-58h]
  __int64 v85; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGADAPTER *v86; // [rsp+C0h] [rbp-48h]
  char v87; // [rsp+C8h] [rbp-40h]
  char v88[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-30h]
  char v90; // [rsp+E0h] [rbp-28h]
  __int128 v91; // [rsp+E8h] [rbp-20h] BYREF
  char v92[8]; // [rsp+F8h] [rbp-10h] BYREF
  char v93[64]; // [rsp+100h] [rbp-8h] BYREF
  char v94[88]; // [rsp+140h] [rbp+38h] BYREF

  v83 = a4;
  v82 = a3;
  v78[0] = a2;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v5 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v9 = *((_QWORD *)Current + 3)) == 0 )
  {
    v9 = v8;
  }
  v10 = v9 + 248;
  v11 = *a1->pContextList;
  if ( v9 != -248 && *(struct _KTHREAD **)(v9 + 256) == KeGetCurrentThread() )
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v55 = *(_DWORD *)(v9 + 272);
      if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v55);
    }
    ExAcquirePushLockSharedEx(v9 + 248, 0LL);
  }
  v14 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *(_DWORD *)(v9 + 296) )
    goto LABEL_21;
  v15 = *(_QWORD *)(v9 + 280);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((v11 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
    goto LABEL_21;
  if ( (v16 & 0x1F) != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
  v17 = *(_QWORD **)(v15 + 16LL * (unsigned int)v14);
  if ( !v17 )
    goto LABEL_22;
  _m_prefetchw(v17 + 4);
  v18 = v17[4];
  if ( !v18 )
  {
LABEL_21:
    v17 = 0LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v19 = v18;
    v18 = _InterlockedCompareExchange64(v17 + 4, v18 + 1, v18);
    if ( v19 == v18 )
      break;
    if ( !v18 )
      goto LABEL_21;
  }
LABEL_22:
  v76 = v17;
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17
    || (v20 = v76[2]) == 0
    || (v21 = *(_QWORD *)(v20 + 1848)) == 0
    || (v22 = *(_QWORD *)(v21 + 2792),
        VidPnSourceId = a1->VidPnSourceId,
        *(_DWORD *)(v22 + 96) <= (unsigned int)VidPnSourceId)
    || !*(_BYTE *)(4000 * VidPnSourceId + *(_QWORD *)(v22 + 128) + 760) )
  {
LABEL_68:
    LODWORD(v51) = 0;
    v5 = 0LL;
    goto LABEL_69;
  }
  v84 = *(volatile signed __int64 **)(*(_QWORD *)(v76[2] + 16LL) + 16LL);
  v86 = (struct DXGADAPTER *)v84;
  _InterlockedIncrement64(v84 + 3);
  v85 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v84 + 17, 0LL);
  v77 = 0LL;
  v87 = 1;
  v24 = *(_QWORD *)(v76[2] + 1848LL);
  v25 = 4000LL * a1->VidPnSourceId;
  v26 = *(_QWORD *)(v24 + 2792);
  v27 = *(unsigned int *)(*(_QWORD *)(v26 + 128) + v25 + 1088);
  v28 = WdLogNewEntry5_WdTrace(v25, v26);
  v32 = (unsigned int)v27;
  *(_QWORD *)(v28 + 24) = (unsigned int)v27;
  *(_QWORD *)(v28 + 32) = v24;
  if ( !v24 || (_DWORD)v27 == -1 )
    goto LABEL_74;
  v33 = *(_QWORD *)(v24 + 2792);
  if ( !v33 )
  {
    WdLogSingleEntry0(1LL);
    v33 = *(_QWORD *)(v24 + 2792);
  }
  v34 = *(_QWORD *)(v33 + 112);
  if ( !v34 )
  {
    WdLogSingleEntry1(2LL, v24);
LABEL_74:
    LODWORD(v51) = -1073741811;
LABEL_75:
    v53 = PsGetCurrentProcess(v32, v29, v30, v31);
    WdLogSingleEntry2(3LL, (int)v51, v53);
    goto LABEL_76;
  }
  v75 = (struct _KTHREAD **)(v34 + 80);
  if ( v34 == -80 )
    WdLogSingleEntry0(1LL);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v34 + 104) == KeGetCurrentThread() )
  {
    v56 = *(_DWORD *)(v34 + 112);
    v38 = (struct _KTHREAD **)(v34 + 112);
    if ( v56 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v56 = *(_DWORD *)v38;
    }
    *(_DWORD *)v38 = v56 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *((_DWORD *)v75 + 9);
        if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v57);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v34 + 96));
      ExAcquirePushLockExclusiveEx(v34 + 88, 0LL);
    }
    if ( *(_QWORD *)(v34 + 104) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    v38 = v75 + 4;
    if ( *((_DWORD *)v75 + 8) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v34 + 104) = KeGetCurrentThread();
    *(_DWORD *)v38 = 1;
  }
  v39 = *(_QWORD *)(v34 + 40);
  v40 = v34 + 40;
  if ( v39 == v34 + 40 )
    goto LABEL_100;
  v41 = v39 - 152;
  v35 = 0LL;
  if ( !v39 )
    v41 = 0LL;
  if ( !v41 )
    goto LABEL_100;
  while ( *(_DWORD *)(v41 + 180) != (_DWORD)v27 )
  {
    v58 = *(_QWORD *)(v41 + 152);
    if ( v58 != v40 )
    {
      v41 = v58 - 152;
      if ( !v58 )
        v41 = 0LL;
      if ( v41 )
        continue;
    }
    goto LABEL_100;
  }
  if ( *(_DWORD *)(v41 + 312) != 1 )
    v41 = *(_QWORD *)(v41 + 320);
  if ( !v41 )
  {
LABEL_100:
    v59 = WdLogNewEntry5_WdTrace(v40, v35);
    *(_QWORD *)(v59 + 24) = v27;
    *(_QWORD *)(v59 + 32) = v34;
    MUTEX_LOCK::~MUTEX_LOCK(&v75);
    WdLogSingleEntry2(7LL, v27, v34);
    LODWORD(v51) = -1073741275;
    goto LABEL_75;
  }
  v42 = v75;
  if ( *(struct _KTHREAD **)(v34 + 104) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v75, 0LL, 0LL);
  v43 = *(_DWORD *)v38;
  if ( *(int *)v38 <= 0 )
  {
    WdLogSingleEntry1(1LL, 516LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
    v43 = *(_DWORD *)v38;
  }
  v44 = v43 - 1;
  *(_DWORD *)v38 = v44;
  if ( !v44 )
  {
    *(_QWORD *)(v34 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v42 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v41 + 280), PopulateHDRMetadataFromDisplay, File, 1u, 0x20u) < 0 )
    WdLogSingleEntry0(1LL);
  v77 = v41;
  *(_QWORD *)&v91 = &v76;
  *((_QWORD *)&v91 + 1) = &v77;
  DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)&v79, &v91);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v41 + 24), 1u);
  v45 = (struct _ERESOURCE *)(v41 + 24);
  if ( !*(_BYTE *)(*(_QWORD *)(v41 + 224) + 428LL) )
  {
    ExReleaseResourceLite(v45);
    KeLeaveCriticalRegion();
    goto LABEL_59;
  }
  ExReleaseResourceLite(v45);
  KeLeaveCriticalRegion();
  v61 = operator new[](0x1CuLL, 0x4B677844u, 256LL, v60);
  v5 = (void *)v61;
  if ( v61 )
  {
    AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v77, v61);
    v51 = AdvancedColorMetadataOverride;
    if ( AdvancedColorMetadataOverride >= 0 )
    {
      *v82 = D3DDDI_HDR_METADATA_TYPE_HDR10;
      *v83 = 28;
      *(_QWORD *)v78[0] = v5;
LABEL_59:
      if ( v81 )
      {
        v47 = *v80;
        v48 = *(_QWORD *)(*(_QWORD *)(*v79 + 16LL) + 1848LL);
        v49 = WdLogNewEntry5_WdTrace(*v79, v46);
        *(_QWORD *)(v49 + 24) = v47;
        *(_QWORD *)(v49 + 32) = v48;
        if ( v48 )
        {
          if ( v47 )
          {
            v50 = *(_QWORD *)(v48 + 2792);
            if ( !v50 )
            {
              WdLogSingleEntry0(1LL);
              v50 = *(_QWORD *)(v48 + 2792);
            }
            if ( *(_QWORD *)(v50 + 112) )
              IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v47 + 280), PopulateHDRMetadataFromDisplay, 0x20u);
            else
              WdLogSingleEntry1(2LL, v48);
          }
        }
      }
      ExReleasePushLockSharedEx((char *)v86 + 136, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64(v84 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v86 + 2), v86);
      goto LABEL_68;
    }
    v70 = PsGetCurrentProcess(v67, v46, v68, v69);
  }
  else
  {
    v70 = PsGetCurrentProcess(v63, v62, v64, v65);
    v51 = -1073741801LL;
  }
  WdLogSingleEntry2(3LL, v51, v70);
  if ( v81 )
    MonitorReleaseMonitorHandle(*(_QWORD *)(*(_QWORD *)(*v79 + 16LL) + 1848LL), *v80, PopulateHDRMetadataFromDisplay);
LABEL_76:
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v85);
LABEL_69:
  if ( v17 && _InterlockedExchangeAdd64(v17 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v71 = v17[2];
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v78,
      (struct DXGDEVICE *)v71);
    v72 = v17[2];
    v90 = 0;
    v89 = *(_QWORD *)(*(_QWORD *)(v72 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v88);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, v71, 2, v73, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v92, v74);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v71, (struct DXGCONTEXT *)v17, (struct COREDEVICEACCESS *)v92);
    COREACCESS::~COREACCESS((COREACCESS *)v94);
    COREACCESS::~COREACCESS((COREACCESS *)v93);
    if ( v90 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v88);
    if ( v78[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v78);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v71 + 16), (struct DXGDEVICE *)v71);
  }
  if ( v5 )
    operator delete[](v5);
  return (unsigned int)v51;
}
