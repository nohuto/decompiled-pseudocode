/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001DFD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0172E70 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C033DA14 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0374070 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, __int64 a3)
{
  const struct _D3DKMT_RENDER *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rbx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r14
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  volatile signed __int64 **v23; // rax
  volatile signed __int64 *v24; // rdi
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rdi
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  bool v34; // zf
  __int64 v35; // r14
  struct _KEVENT *v36; // rbx
  __int64 v37; // r12
  __int64 v38; // rbx
  unsigned int BroadcastContextCount; // eax
  char v40; // si
  __int64 v41; // rbx
  __int64 v42; // r9
  unsigned __int64 v43; // r8
  _BYTE *Pool2; // rax
  __int64 v45; // rbx
  void *v46; // rsi
  _BYTE *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r8
  _QWORD *v50; // rcx
  unsigned __int64 v51; // rbx
  struct DXGADAPTER *v52; // rbx
  __int64 v53; // r9
  __int64 v54; // rdx
  volatile signed __int64 *v55; // rcx
  volatile signed __int64 *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  char *v59; // rbx
  __int64 v60; // rax
  bool v61; // r15
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r14
  unsigned __int64 AllocationCount; // rsi
  struct _EX_RUNDOWN_REF **v64; // rbx
  int v65; // eax
  int v66; // r14d
  int v67; // eax
  struct DXGADAPTER *v68; // rcx
  struct DXGADAPTER *v69; // rcx
  DXGGLOBAL **v70; // rcx
  _QWORD *v71; // rcx
  unsigned __int64 i; // rbx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  int v86; // r9d
  signed __int64 v87; // rax
  signed __int64 v88; // rtt
  int v89; // r9d
  D3DKMT_HANDLE v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  unsigned int v96; // esi
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  volatile signed __int64 *v103; // r15
  int v104; // eax
  unsigned int v105; // ebx
  unsigned int v106; // eax
  _QWORD *v107; // r15
  __int64 *v108; // rdx
  int v109; // esi
  int v110; // r11d
  __int64 v111; // r8
  _QWORD *v112; // rcx
  __int64 v113; // rbx
  const wchar_t *v114; // r9
  int v115; // eax
  char *v116; // rcx
  __int64 v117; // rdx
  struct DXGPROCESS *v118; // rsi
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // r9
  char *v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdi
  struct DXGDEVICE *v125; // rbx
  __int64 v126; // rax
  __int64 v127; // r9
  char *v128; // rdx
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // r9
  char *v132; // rdx
  char v133; // [rsp+58h] [rbp-B0h]
  volatile signed __int64 *v134; // [rsp+60h] [rbp-A8h]
  struct _D3DKMT_RENDER *v135; // [rsp+68h] [rbp-A0h]
  char *v136; // [rsp+70h] [rbp-98h] BYREF
  struct DXGPROCESS *v137[2]; // [rsp+78h] [rbp-90h] BYREF
  void *Base; // [rsp+88h] [rbp-80h]
  _BYTE v139[32]; // [rsp+90h] [rbp-78h] BYREF
  size_t NumOfElements; // [rsp+B0h] [rbp-58h]
  __int16 v141; // [rsp+B8h] [rbp-50h]
  __int64 v142; // [rsp+C0h] [rbp-48h]
  __int64 v143; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTER *v144; // [rsp+D0h] [rbp-38h]
  char v145; // [rsp+D8h] [rbp-30h]
  int v146; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v147; // [rsp+E8h] [rbp-20h]
  char v148; // [rsp+F0h] [rbp-18h]
  PVOID v149; // [rsp+F8h] [rbp-10h]
  _BYTE v150[32]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v151; // [rsp+120h] [rbp+18h]
  void *Src; // [rsp+128h] [rbp+20h]
  _BYTE v153[32]; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v154; // [rsp+150h] [rbp+48h]
  char v155[8]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v156; // [rsp+160h] [rbp+58h]
  char v157; // [rsp+168h] [rbp+60h]
  char v158[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v159; // [rsp+178h] [rbp+70h]
  char v160; // [rsp+180h] [rbp+78h]
  char v161[8]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v162; // [rsp+190h] [rbp+88h]
  char v163; // [rsp+198h] [rbp+90h]
  _QWORD v164[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v165[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  struct DXGALLOCATION *v167[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v168; // [rsp+2D0h] [rbp+1C8h]
  char v169[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v170[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v171; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v172; // [rsp+2F0h] [rbp+1E8h]
  char v173; // [rsp+2F8h] [rbp+1F0h]
  char *v174; // [rsp+300h] [rbp+1F8h]
  char v175[24]; // [rsp+308h] [rbp+200h] BYREF
  char v176[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v177; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v178; // [rsp+330h] [rbp+228h]
  char v179; // [rsp+338h] [rbp+230h]
  __int64 v180; // [rsp+340h] [rbp+238h]
  __int64 v181; // [rsp+360h] [rbp+258h]
  char v182; // [rsp+368h] [rbp+260h]
  char v183[8]; // [rsp+378h] [rbp+270h] BYREF
  char v184[64]; // [rsp+380h] [rbp+278h] BYREF
  char v185[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v186[8]; // [rsp+418h] [rbp+310h] BYREF
  char v187[64]; // [rsp+420h] [rbp+318h] BYREF
  char v188[88]; // [rsp+460h] [rbp+358h] BYREF
  char v189[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v190[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  char v191[88]; // [rsp+500h] [rbp+3F8h] BYREF
  char v192[8]; // [rsp+558h] [rbp+450h] BYREF
  char v193[64]; // [rsp+560h] [rbp+458h] BYREF
  char v194[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v136 = a2;
  v146 = -1;
  v147 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v148 = 1;
    v146 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v148 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v146, 3020);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v135 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v15 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v16 = (struct DXGPROCESS *)*((_QWORD *)Current + 3), (v137[0] = v16) == 0LL) )
  {
    v137[0] = v14;
    v16 = v14;
    if ( !v14 )
    {
      v80 = PsGetCurrentProcess(v15, v11, v12, v13);
      v96 = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, v80);
      v85 = PsGetCurrentProcess(v82, v81, v83, v84);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
        -1073741811LL,
        v85,
        0LL,
        0LL,
        0LL);
      goto LABEL_126;
    }
  }
  v17 = *(_DWORD *)a1;
  if ( v16 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v16 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v86 = *((_DWORD *)v16 + 68);
      if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, v86);
    }
    ExAcquirePushLockSharedEx((char *)v16 + 248, 0LL);
  }
  v20 = (v17 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)v16 + 74) )
    goto LABEL_18;
  v21 = *((_QWORD *)v16 + 35);
  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
  if ( ((v17 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_18;
  v23 = (volatile signed __int64 **)(v21 + 16LL * (unsigned int)v20);
  if ( (v22 & 0x1F) != 0xF )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_18;
  }
  v24 = *v23;
  v134 = *v23;
  if ( !*v23 )
    goto LABEL_19;
  _m_prefetchw((const void *)(v24 + 13));
  v87 = *((_QWORD *)v24 + 13);
  if ( !v87 )
  {
LABEL_18:
    v134 = 0LL;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v88 = v87;
    v87 = _InterlockedCompareExchange64(v24 + 13, v87 + 1, v87);
    if ( v88 == v87 )
      break;
    if ( !v87 )
      goto LABEL_18;
  }
LABEL_19:
  ExReleasePushLockSharedEx((char *)v16 + 248, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v16 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v16 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v89 = *((_DWORD *)v16 + 68);
      if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, v89);
    }
    ExAcquirePushLockSharedEx((char *)v16 + 248, 0LL);
  }
  v28 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v28 < *((_DWORD *)v16 + 74) )
  {
    v29 = *((_QWORD *)v16 + 35);
    v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
    {
      if ( (v30 & 0x1F) == 7 )
      {
        v31 = *(_QWORD *)(v29 + 16LL * (unsigned int)v28);
        if ( v31 )
        {
          _m_prefetchw((const void *)(v31 + 32));
          v32 = *(_QWORD *)(v31 + 32);
          if ( v32 )
          {
            while ( 1 )
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 32), v32 + 1, v32);
              if ( v33 == v32 )
                break;
              if ( !v32 )
                goto LABEL_32;
            }
            ExReleasePushLockSharedEx((char *)v16 + 248, 0LL);
            KeLeaveCriticalRegion();
            v34 = *(_BYTE *)(v31 + 441) == 0;
            v35 = *(_QWORD *)(v31 + 16);
            v142 = v35;
            if ( !v34 )
            {
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v192, v35, 0, v76, 0);
              v104 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v192, 0LL);
              v105 = v104;
              if ( v104 >= 0 )
                v105 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 16LL)
                                                      + 4344LL),
                         v137[0],
                         (struct DXGCONTEXT *)v31,
                         v4);
              else
                WdLogSingleEntry3(4LL, v104, v31, v137[0]);
              COREACCESS::~COREACCESS((COREACCESS *)v194);
              COREACCESS::~COREACCESS((COREACCESS *)v193);
              v103 = v134;
              v96 = v105;
LABEL_124:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                v119 = *(_QWORD *)(v31 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v137,
                  (struct DXGDEVICE *)v119);
                v120 = *(_QWORD *)(v31 + 16);
                v157 = 0;
                v156 = *(_QWORD *)(*(_QWORD *)(v120 + 16) + 16LL);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v155);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v183, v119, 2, v121, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v183, v122);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v119 + 16) + 16LL) + 200LL) != 4 )
                  DXGDEVICE::DestroyContext(
                    (DXGDEVICE *)v119,
                    (struct DXGCONTEXT *)v31,
                    (struct COREDEVICEACCESS *)v183);
                COREACCESS::~COREACCESS((COREACCESS *)v185);
                COREACCESS::~COREACCESS((COREACCESS *)v184);
                if ( v157 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v155);
                if ( v137[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v137);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v119 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v119 + 16), (struct DXGDEVICE *)v119);
              }
              goto LABEL_125;
            }
            v36 = *(struct _KEVENT **)(v35 + 16);
            if ( !KeReadStateEvent(v36 + 5) )
              KeWaitForSingleObject(&v36[5], Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v35 + 136), 0) )
            {
              DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v35 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v77, (const EVENT_DESCRIPTOR *)"g", v78, 40);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v35 + 136), 1u);
              DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v35 + 16) + 16LL));
            }
            v37 = *(_QWORD *)(v31 + 16);
            v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
            if ( !*(_BYTE *)(v38 + 2710)
              || (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 0x180) != 0
              || (*(_DWORD *)&v4->Flags & 0x40) != 0
              || *(int *)(v38 + 2424) < 0x2000
              || (v106 = *(_DWORD *)(v38 + 288), v106 <= 1) )
            {
              BroadcastContextCount = v4->BroadcastContextCount;
              v40 = 0;
            }
            else
            {
              BroadcastContextCount = v106 - 1;
              v40 = 1;
              v4->BroadcastContextCount = BroadcastContextCount;
            }
            v133 = v40;
            v41 = BroadcastContextCount + 1;
            if ( BroadcastContextCount > 0x40 )
            {
              v96 = -1073741811;
              WdLogSingleEntry2(3LL, v31, -1073741811LL);
              v103 = v134;
LABEL_123:
              ExReleaseResourceLite(*(PERESOURCE *)(v35 + 136));
              KeLeaveCriticalRegion();
              goto LABEL_124;
            }
            v42 = 0LL;
            Src = 0LL;
            v154 = 0;
            if ( (unsigned int)v41 > 4 )
            {
              v43 = (unsigned int)v41;
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v41 < 8 )
                goto LABEL_45;
              Src = (void *)ExAllocatePool2(256LL, 8 * v41, 1265072196LL, 0LL);
            }
            else
            {
              Src = v153;
              memset(v153, 0, 8 * v41);
            }
            v42 = 0LL;
            v154 = v41;
            v43 = (unsigned int)v41;
LABEL_45:
            if ( !Src )
            {
              WdLogSingleEntry1(3LL, 2871LL);
              v103 = v134;
              v96 = -1073741801;
LABEL_121:
              if ( Src != v153 && Src )
                ExFreePoolWithTag(Src, 0);
              Src = 0LL;
              v154 = 0;
              goto LABEL_123;
            }
            v149 = 0LL;
            v151 = 0;
            if ( (unsigned int)v41 > 4 )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v43 < 8 )
                goto LABEL_173;
              Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v43, 1265072196LL, 0LL);
              v149 = Pool2;
            }
            else
            {
              Pool2 = v150;
              v149 = v150;
              if ( !(_DWORD)v41 )
                goto LABEL_50;
              memset(v150, 0, 8 * v43);
              Pool2 = v149;
            }
            v42 = 0LL;
LABEL_50:
            v151 = v41;
            if ( Pool2 )
            {
              v103 = v134;
              *(_QWORD *)Src = v31;
              if ( v134 )
                *(_QWORD *)v149 = v134;
              if ( v40 )
              {
                v107 = Src;
                v108 = *(__int64 **)(v37 + 464);
                v109 = 0;
                v110 = 0;
                while ( v108 != (__int64 *)(v37 + 464) && v108 )
                {
                  v111 = *((unsigned int *)v108 + 100);
                  if ( (unsigned int)v111 >= (unsigned int)v41 )
                  {
                    v113 = 2910LL;
                    WdLogSingleEntry2(2LL, v31, 2910LL);
                    v114 = L"0x%I64x fails as context physical adapter index is invalid";
                    goto LABEL_190;
                  }
                  if ( ((1 << v111) & v109) != 0 )
                  {
                    v113 = 2917LL;
                    WdLogSingleEntry2(2LL, v31, 2917LL);
                    v114 = L"0x%I64x fails as context for the same physical adapter is specified";
LABEL_190:
                    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v114, v31, v113, 0LL, 0LL, 0LL);
                    v35 = v142;
                    v103 = v134;
                    v96 = -1073741811;
                    goto LABEL_119;
                  }
                  v109 |= 1 << v111;
                  v107[v111] = v108;
                  if ( (*((_DWORD *)v108 + 101) & 0x10) != 0 )
                  {
                    if ( (__int64 *)v108[51] != v108 + 51 )
                      v42 = v108[51];
                    v112 = v149;
                    if ( (unsigned int)v111 < v151 )
                      v112 = (char *)v149 + 8 * v111;
                    *v112 = v42;
                    v42 = 0LL;
                  }
                  v108 = (__int64 *)*v108;
                  ++v110;
                }
                if ( v110 != (_DWORD)v41 )
                {
                  v113 = 2940LL;
                  WdLogSingleEntry2(2LL, v31, 2940LL);
                  v114 = L"0x%I64x fails as to few contexts are in the device";
                  goto LABEL_190;
                }
                v35 = v142;
                v103 = v134;
              }
              v45 = v154;
              v46 = Src;
              v47 = 0LL;
              Base = 0LL;
              LODWORD(NumOfElements) = 0;
              if ( v154 > 4 )
              {
                v48 = 0LL;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v154 < 8 )
                  goto LABEL_58;
                v47 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v154, 1265072196LL, 0LL);
                Base = v47;
              }
              else
              {
                v47 = v139;
                Base = v139;
                if ( v154 )
                {
                  memset(v139, 0, 8LL * v154);
                  v47 = Base;
                }
              }
              LODWORD(NumOfElements) = v45;
              v48 = v45;
LABEL_58:
              v141 = 1;
              if ( !v47 )
                goto LABEL_222;
              memmove(v47, v46, 8 * v48);
              qsort(
                Base,
                (unsigned int)NumOfElements,
                8uLL,
                (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
              v49 = 1LL;
              v50 = Base;
              if ( (unsigned int)NumOfElements > 1uLL )
              {
                while ( *((_QWORD *)Base + v49) != *((_QWORD *)Base + v49 - 1) )
                {
                  if ( ++v49 >= (unsigned __int64)(unsigned int)NumOfElements )
                    goto LABEL_61;
                }
              }
              else
              {
                if ( (_DWORD)NumOfElements )
                {
LABEL_61:
                  v51 = 0LL;
                  while ( 1 )
                  {
                    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v50[v51++] + 448LL));
                    if ( v51 >= (unsigned int)NumOfElements )
                      break;
                    v50 = Base;
                  }
                }
                v50 = Base;
                v141 = 256;
              }
              if ( !v50 )
              {
LABEL_222:
                WdLogSingleEntry1(3LL, 2951LL);
                v96 = -1073741801;
LABEL_112:
                v71 = Base;
                if ( Base )
                {
                  if ( !(_BYTE)v141 )
                  {
                    if ( HIBYTE(v141) )
                    {
                      for ( i = 0LL; i < (unsigned int)NumOfElements; v71 = Base )
                      {
                        v73 = v71[i] + 448LL;
                        *(_QWORD *)(v73 + 8) = 0LL;
                        ExReleasePushLockExclusiveEx(v73, 0LL);
                        KeLeaveCriticalRegion();
                        ++i;
                      }
                    }
                  }
                }
                if ( v71 != (_QWORD *)v139 && v71 )
                  ExFreePoolWithTag(v71, 0);
                Base = 0LL;
                LODWORD(NumOfElements) = 0;
                goto LABEL_119;
              }
              v144 = *(struct DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL);
              _InterlockedIncrement64((volatile signed __int64 *)v144 + 3);
              v52 = v144;
              v143 = -1LL;
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx((char *)v52 + 136, 0LL);
              v145 = 1;
              v54 = *(_QWORD *)(v31 + 16);
              v55 = *(volatile signed __int64 **)(*(_QWORD *)(v54 + 16) + 16LL);
              v172 = (struct DXGADAPTER *)v55;
              v173 = 0;
              v174 = 0LL;
              if ( v55 )
              {
                _InterlockedIncrement64(v55 + 3);
                v171 = -1LL;
              }
              v56 = *(volatile signed __int64 **)(*(_QWORD *)(v54 + 16) + 16LL);
              v178 = (struct DXGADAPTER *)v56;
              v179 = 0;
              v180 = 0LL;
              if ( v56 )
              {
                _InterlockedIncrement64(v56 + 3);
                v177 = -1LL;
              }
              v181 = v54;
              v182 = 0;
              if ( v173 )
                WdLogSingleEntry5(0LL, 275LL, 4LL, v170, 0LL, 0LL);
              if ( KeGetCurrentThread() == *((struct _KTHREAD **)v172 + 23) )
              {
                v59 = v136;
              }
              else
              {
                if ( !KeReadStateEvent((PRKEVENT)v172 + 2) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v57, (const EVENT_DESCRIPTOR *)"g", v58, 72);
                  KeWaitForSingleObject((char *)v172 + 48, Executive, 0, 0, 0LL);
                }
                v59 = v136;
                DXGADAPTER::AcquireCoreResourceShared(v172, v136);
              }
              v174 = 0LL;
              if ( v59 )
              {
                v115 = RtlStringCbCopyA(v175, 17LL, v59);
                v116 = v175;
                if ( v115 < 0 )
                  v116 = v174;
                v174 = v116;
              }
              v173 = 1;
              if ( *(_DWORD *)(v181 + 576) != 1 )
              {
                COREACCESS::Release((COREACCESS *)v170);
                if ( v182 )
                  COREACCESS::Release((COREACCESS *)v176);
                WdLogSingleEntry3(4LL, -1073741130LL, v31, v137[0]);
                v96 = -1073741130;
                goto LABEL_97;
              }
              v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 16LL);
              v61 = *(int *)(v60 + 2424) >= 0x2000 || *(_BYTE *)(v60 + 2724);
              if ( (*(_DWORD *)&v135->Flags & 0x20) != 0 )
                pNewAllocationList = v135->pNewAllocationList;
              else
                pNewAllocationList = *(struct _D3DDDI_ALLOCATIONLIST **)(v31 + 88);
              AllocationCount = v135->AllocationCount;
              v64 = 0LL;
              LODWORD(v136) = v135->AllocationCount;
              P = 0LL;
              v168 = 0;
              if ( !v61 )
                goto LABEL_86;
              if ( (unsigned int)AllocationCount > 0x20 )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
                  goto LABEL_212;
                v64 = (struct _EX_RUNDOWN_REF **)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL, v53);
                P = v64;
              }
              else
              {
                v64 = (struct _EX_RUNDOWN_REF **)v167;
                P = v167;
                if ( (_DWORD)AllocationCount )
                {
                  memset(v167, 0, 8LL * (unsigned int)AllocationCount);
                  v64 = (struct _EX_RUNDOWN_REF **)P;
                }
              }
              v168 = AllocationCount;
              if ( v64 )
              {
                v65 = DxgkReferenceAllocationList(
                        (unsigned int *)&v136,
                        pNewAllocationList,
                        (struct DXGALLOCATION **)v64,
                        0LL);
                AllocationCount = (unsigned int)v136;
                v66 = v65;
                if ( v65 < 0 )
                {
LABEL_89:
                  if ( (_DWORD)AllocationCount )
                  {
                    do
                    {
                      if ( *v64 )
                        ExReleaseRundownProtection(*v64 + 11);
                      ++v64;
                      --AllocationCount;
                    }
                    while ( AllocationCount );
                  }
LABEL_93:
                  if ( v66 < 0 )
                  {
                    switch ( v66 )
                    {
                      case -1073741811:
                      case -1073741592:
                        v118 = v137[0];
                        WdLogSingleEntry3(2LL, v66, v31, v137[0]);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"0x%I64x RenderKm failed 0x%I64x 0x%I64x",
                          v66,
                          v31,
                          (__int64)v118,
                          0LL,
                          0LL);
                        goto LABEL_94;
                      case -1071775482:
                        v117 = -1071775482LL;
                        break;
                      case -1071774910:
                        goto LABEL_94;
                      default:
                        v117 = v66;
                        break;
                    }
                    WdLogSingleEntry3(4LL, v117, v31, v137[0]);
                  }
LABEL_94:
                  v96 = v66;
                  goto LABEL_95;
                }
LABEL_86:
                if ( v133 )
                  v67 = DXGCONTEXT::RenderKmLda(
                          v135,
                          (struct COREDEVICEACCESS *)v169,
                          (struct DXGCONTEXT **)Src,
                          (struct DXGALLOCATION **)v64,
                          (struct DXGHWQUEUE **)v149);
                else
                  v67 = DXGCONTEXT::Render(
                          (DXGCONTEXT *)v31,
                          v135,
                          (struct COREDEVICEACCESS *)v169,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v143,
                          (struct DXGCONTEXT **)Src,
                          (struct DXGALLOCATION **)v64,
                          (struct DXGHWQUEUE **)v149);
                v66 = v67;
                if ( !v61 )
                  goto LABEL_93;
                goto LABEL_89;
              }
LABEL_212:
              WdLogSingleEntry1(3LL, 2991LL);
              v96 = -1073741801;
LABEL_95:
              if ( P != v167 && P )
                ExFreePoolWithTag(P, 0);
              v35 = v142;
              v103 = v134;
              P = 0LL;
              v168 = 0;
LABEL_97:
              v68 = v178;
              if ( v178 )
              {
                if ( v179 )
                {
                  COREACCESS::Release((COREACCESS *)v176);
                  v68 = v178;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v68 + 2), v68);
              }
              v69 = v172;
              if ( v172 )
              {
                if ( v173 )
                {
                  v173 = 0;
                  v69 = v172;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v172 + 23) )
                  {
                    DXGADAPTER::ReleaseCoreResource(v172, v174);
                    v69 = v172;
                  }
                  v174 = 0LL;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v69 + 2), v69);
              }
              if ( v145 )
              {
                v145 = 0;
                ExReleasePushLockSharedEx((char *)v144 + 136, 0LL);
                KeLeaveCriticalRegion();
                v70 = (DXGGLOBAL **)v144;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v144 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v70[2], (struct DXGADAPTER *)v70);
              }
              goto LABEL_112;
            }
LABEL_173:
            WdLogSingleEntry1(3LL, 2878LL);
            v103 = v134;
            v96 = -1073741801;
LABEL_119:
            if ( v149 != v150 && v149 )
              ExFreePoolWithTag(v149, 0);
            v149 = 0LL;
            v151 = 0;
            goto LABEL_121;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_32:
  ExReleasePushLockSharedEx((char *)v16 + 248, 0LL);
  KeLeaveCriticalRegion();
  v90 = v4->hDevice;
  v95 = PsGetCurrentProcess(v92, v91, v93, v94);
  v96 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v95, v90);
  v97 = v4->hDevice;
  v102 = PsGetCurrentProcess(v99, v98, v100, v101);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
    -1073741811LL,
    v102,
    v97,
    0LL,
    0LL);
  v103 = v134;
LABEL_125:
  if ( v103 )
  {
    v123 = _InterlockedDecrement64(v103 + 13);
    if ( v123 >= 0 )
    {
      if ( !v123 )
      {
        v124 = *((_QWORD *)v103 + 2);
        v125 = *(struct DXGDEVICE **)(v124 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v164, v125);
        v126 = *((_QWORD *)v125 + 2);
        v160 = 0;
        v159 = *(_QWORD *)(v126 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v158);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v186, (__int64)v125, 2, v127, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v186, v128);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v124, (PVOID)v103, (struct COREDEVICEACCESS *)v186);
        COREACCESS::~COREACCESS((COREACCESS *)v188);
        COREACCESS::~COREACCESS((COREACCESS *)v187);
        if ( v160 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v158);
        if ( v164[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v164);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v124 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v129 = *(_QWORD *)(v124 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v165,
            (struct DXGDEVICE *)v129);
          v130 = *(_QWORD *)(v124 + 16);
          v163 = 0;
          v162 = *(_QWORD *)(*(_QWORD *)(v130 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v189, v129, 2, v131, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v189, v132);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v129, (struct DXGCONTEXT *)v124, (struct COREDEVICEACCESS *)v189);
          COREACCESS::~COREACCESS((COREACCESS *)v191);
          COREACCESS::~COREACCESS((COREACCESS *)v190);
          if ( v163 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
          if ( v165[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v165);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v129 + 16), (struct DXGDEVICE *)v129);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 128LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 128LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
LABEL_126:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
  if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v74, v146);
  return v96;
}
