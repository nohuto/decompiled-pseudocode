/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4170
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0237D50 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0019858 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC6B8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F3FA0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??A?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z @ 0x1C02282A4 (--A-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C02420D0 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026890C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028A21C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, __int64 a3)
{
  const struct _D3DKMT_RENDER *v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGHWQUEUE **v19; // rax
  struct DXGHWQUEUE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdi
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r12
  struct _KEVENT *v38; // rbx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r13
  __int64 v43; // rbx
  unsigned int BroadcastContextCount; // eax
  char v45; // r15
  __int64 v46; // rbx
  _BYTE *PoolWithTag; // rax
  size_t v48; // rsi
  _BYTE *v49; // rax
  struct DXGHWQUEUE *v50; // r14
  __int64 v51; // rbx
  _BYTE *v52; // rcx
  void *v53; // rsi
  __int64 v54; // r8
  unsigned __int64 i; // rbx
  struct DXGADAPTER *v56; // rbx
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  volatile signed __int64 *v59; // rcx
  volatile signed __int64 *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  char *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  bool v66; // r15
  struct _D3DKMT_RENDER *v67; // r13
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 AllocationCount; // rsi
  struct DXGALLOCATION **v70; // rbx
  _BYTE *v71; // rbx
  int v72; // eax
  __int64 v73; // rdx
  struct DXGALLOCATION *v74; // rcx
  int v75; // r14d
  int v76; // eax
  unsigned int v77; // esi
  struct DXGADAPTER *v78; // rcx
  struct DXGADAPTER *v79; // rcx
  DXGGLOBAL **v80; // rcx
  _QWORD *v81; // rcx
  unsigned __int64 j; // rbx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v89; // rcx
  unsigned __int8 v90; // bl
  __int64 v91; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  int v95; // r9d
  signed __int64 v96; // rax
  signed __int64 v97; // rtt
  __int64 v98; // rax
  int v99; // r9d
  __int64 v100; // rax
  _QWORD *v101; // rbx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rbx
  _QWORD *v106; // rax
  unsigned int v107; // eax
  __int64 v108; // rax
  _QWORD *v109; // r15
  __int64 *v110; // r10
  int v111; // esi
  int v112; // r11d
  _QWORD *v113; // rax
  __int64 v114; // r9
  __int64 v115; // rax
  _QWORD *v116; // rax
  int v117; // eax
  char *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  _QWORD *v121; // rax
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rcx
  _QWORD *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // r9
  char *v132; // rdx
  __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rdi
  struct DXGDEVICE *v136; // rbx
  __int64 v137; // rax
  __int64 v138; // r9
  char *v139; // rdx
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // r9
  char *v143; // rdx
  char v144; // [rsp+48h] [rbp-C0h]
  struct DXGHWQUEUE *v145; // [rsp+50h] [rbp-B8h]
  __int64 v146; // [rsp+58h] [rbp-B0h]
  unsigned int v147[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+68h] [rbp-A0h]
  void *Base; // [rsp+70h] [rbp-98h]
  _BYTE v150[32]; // [rsp+78h] [rbp-90h] BYREF
  size_t NumOfElements; // [rsp+98h] [rbp-70h]
  char v152; // [rsp+A0h] [rbp-68h]
  char *v153; // [rsp+A8h] [rbp-60h]
  __int64 v154; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTER *v155; // [rsp+B8h] [rbp-50h]
  char v156; // [rsp+C0h] [rbp-48h]
  int v157; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v158; // [rsp+D0h] [rbp-38h]
  char v159; // [rsp+D8h] [rbp-30h]
  void *Src; // [rsp+E0h] [rbp-28h]
  _BYTE v161[32]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v162; // [rsp+108h] [rbp+0h]
  PVOID v163; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v164[32]; // [rsp+118h] [rbp+10h] BYREF
  int v165; // [rsp+138h] [rbp+30h]
  struct _D3DKMT_RENDER *v166; // [rsp+140h] [rbp+38h]
  char v167[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v168; // [rsp+150h] [rbp+48h]
  char v169; // [rsp+158h] [rbp+50h]
  char v170[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v171; // [rsp+168h] [rbp+60h]
  char v172; // [rsp+170h] [rbp+68h]
  char v173[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v174; // [rsp+180h] [rbp+78h]
  char v175; // [rsp+188h] [rbp+80h]
  _QWORD v176[2]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v177[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v178[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  _BYTE v180[256]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v181; // [rsp+2D0h] [rbp+1C8h]
  char v182[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v183[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v184; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v185; // [rsp+2F0h] [rbp+1E8h]
  char v186; // [rsp+2F8h] [rbp+1F0h]
  char *v187; // [rsp+300h] [rbp+1F8h]
  char v188[24]; // [rsp+308h] [rbp+200h] BYREF
  char v189[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v190; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v191; // [rsp+330h] [rbp+228h]
  char v192; // [rsp+338h] [rbp+230h]
  __int64 v193; // [rsp+340h] [rbp+238h]
  unsigned __int64 v194; // [rsp+360h] [rbp+258h]
  char v195; // [rsp+368h] [rbp+260h]
  char v196[8]; // [rsp+378h] [rbp+270h] BYREF
  char v197[64]; // [rsp+380h] [rbp+278h] BYREF
  char v198[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v199[8]; // [rsp+418h] [rbp+310h] BYREF
  char v200[64]; // [rsp+420h] [rbp+318h] BYREF
  char v201[88]; // [rsp+460h] [rbp+358h] BYREF
  char v202[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v203[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  char v204[88]; // [rsp+500h] [rbp+3F8h] BYREF
  char v205[8]; // [rsp+558h] [rbp+450h] BYREF
  char v206[64]; // [rsp+560h] [rbp+458h] BYREF
  char v207[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v157 = -1;
  v153 = a2;
  v158 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v159 = 1;
    v157 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v159 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v157, 3020LL);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v166 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v10 = *((_QWORD *)Current + 1), (v148 = v10) == 0) )
  {
    v10 = v9;
    v148 = v9;
  }
  if ( !v10 )
  {
    v77 = -1073741811;
    v93 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v93 + 24) = -1073741811LL;
    *(_QWORD *)(v93 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v93);
    goto LABEL_124;
  }
  v11 = *(_DWORD *)a1;
  if ( v10 != -208 && *(struct _KTHREAD **)(v10 + 216) == KeGetCurrentThread() )
  {
    v94 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v94 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v94);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v95 = *(_DWORD *)(v10 + 232);
      if ( v95 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventBlockThread, v13, v95);
    }
    ExAcquirePushLockSharedEx(v10 + 208, 0LL);
  }
  v14 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *(_DWORD *)(v10 + 256) )
    goto LABEL_19;
  v15 = *(_QWORD *)(v10 + 240);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((v11 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
    goto LABEL_19;
  v17 = 2LL * (unsigned int)v14;
  v18 = v16 & 0x1F;
  v19 = (struct DXGHWQUEUE **)(v15 + 16LL * (unsigned int)v14);
  if ( (_BYTE)v18 != 15 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_19;
  }
  v20 = *v19;
  v145 = *v19;
  if ( !*v19 )
    goto LABEL_20;
  _m_prefetchw((char *)v20 + 88);
  v96 = *((_QWORD *)v20 + 11);
  if ( !v96 )
  {
LABEL_19:
    v145 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v97 = v96;
    v96 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 11, v96 + 1, v96);
    if ( v97 == v96 )
      break;
    if ( !v96 )
      goto LABEL_19;
  }
LABEL_20:
  ExReleasePushLockSharedEx(v10 + 208, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v10 != -208 && *(struct _KTHREAD **)(v10 + 216) == KeGetCurrentThread() )
  {
    v98 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v98 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v98);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v99 = *(_DWORD *)(v10 + 232);
      if ( v99 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v99);
    }
    ExAcquirePushLockSharedEx(v10 + 208, 0LL);
  }
  v27 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 >= *(_DWORD *)(v10 + 256) )
    goto LABEL_33;
  v28 = *(_QWORD *)(v10 + 240);
  v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60) || (v29 & 0x2000) != 0 || (v29 & 0x1F) == 0 )
    goto LABEL_33;
  v30 = v29 & 0x1F;
  if ( (_BYTE)v30 != 7 )
  {
    v100 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27);
    *(_QWORD *)(v100 + 24) = 267LL;
    WdLogEvent5_WdError(v100);
LABEL_33:
    v31 = 0LL;
    goto LABEL_34;
  }
  v31 = *(_QWORD *)(v28 + 16LL * (unsigned int)v27);
  if ( !v31 )
    goto LABEL_34;
  _m_prefetchw((const void *)(v31 + 32));
  v32 = *(_QWORD *)(v31 + 32);
  if ( !v32 )
    goto LABEL_33;
  while ( 1 )
  {
    v33 = v32;
    v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 32), v32 + 1, v32);
    if ( v33 == v32 )
      break;
    if ( !v32 )
      goto LABEL_33;
  }
LABEL_34:
  ExReleasePushLockSharedEx(v10 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v31 )
  {
    v37 = *(_QWORD *)(v31 + 16);
    v146 = v37;
    if ( *(_BYTE *)(v31 + 457) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v205, v37, 0, v36, 0);
      v102 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v205, 0LL);
      v105 = v102;
      if ( v102 >= 0 )
      {
        LODWORD(v105) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 16LL)
                                                       + 4208LL),
                          (struct DXGPROCESS *)v10,
                          (struct DXGCONTEXT *)v31,
                          v4);
      }
      else
      {
        v106 = (_QWORD *)WdLogNewEntry5_WdEvent(v104, v103);
        v106[3] = v105;
        v106[4] = v31;
        v106[5] = v10;
        WdLogEvent5_WdEvent(v106);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v207);
      COREACCESS::~COREACCESS((COREACCESS *)v206);
      v50 = v145;
      v77 = v105;
LABEL_122:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v129 = *(_QWORD *)(v31 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v176,
          (struct DXGDEVICE *)v129);
        v130 = *(_QWORD *)(v31 + 16);
        v169 = 0;
        v168 = *(_QWORD *)(*(_QWORD *)(v130 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v167);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v196, v129, 2, v131, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v196, v132);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v129, (struct DXGCONTEXT *)v31, (struct COREDEVICEACCESS *)v196);
        COREACCESS::~COREACCESS((COREACCESS *)v198);
        COREACCESS::~COREACCESS((COREACCESS *)v197);
        if ( v169 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v167);
        if ( v176[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v129 + 16), (struct DXGDEVICE *)v129);
      }
      goto LABEL_123;
    }
    v38 = *(struct _KEVENT **)(v37 + 16);
    if ( !KeReadStateEvent(v38 + 5) )
      KeWaitForSingleObject(&v38[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 136), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 104LL));
      v90 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v89, &EventBlockThread, v91, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 136), 1u);
      if ( v90 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v42 = *(_QWORD *)(v31 + 16);
    v43 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
    if ( !*(_BYTE *)(v43 + 2590)
      || (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x30) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v43 + 2304) < 0x2000
      || (v107 = *(_DWORD *)(v43 + 280), v107 <= 1) )
    {
      BroadcastContextCount = v4->BroadcastContextCount;
      v45 = 0;
    }
    else
    {
      BroadcastContextCount = v107 - 1;
      v45 = 1;
      v4->BroadcastContextCount = BroadcastContextCount;
    }
    v144 = v45;
    v46 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v108 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      v77 = -1073741811;
      *(_QWORD *)(v108 + 24) = v31;
      *(_QWORD *)(v108 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v108);
      v50 = v145;
LABEL_121:
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
      goto LABEL_122;
    }
    Src = 0LL;
    v162 = 0;
    if ( (unsigned int)v46 > 4 )
    {
      v39 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v46;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 < 8 )
        goto LABEL_222;
      v48 = 8 * v46;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v161;
      v48 = 8 * v46;
    }
    Src = PoolWithTag;
    v162 = v46;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v48);
      if ( Src )
      {
        v163 = 0LL;
        v165 = 0;
        if ( (unsigned int)v46 > 4 )
        {
          v39 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v46;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 < 8 )
            goto LABEL_218;
          v49 = ExAllocatePoolWithTag(PagedPool, v48, 0x4B677844u);
        }
        else
        {
          v49 = v164;
        }
        v163 = v49;
        v165 = v46;
        if ( v49 )
        {
          memset(v49, 0, v48);
          if ( v163 )
          {
            v50 = v145;
            *(_QWORD *)Src = v31;
            if ( v145 )
              *(_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v163, 0LL) = v145;
            if ( v45 )
            {
              v109 = Src;
              v110 = *(__int64 **)(v42 + 464);
              v111 = 0;
              v112 = 0;
              while ( v110 != (__int64 *)(v42 + 464) && v110 )
              {
                v39 = *((unsigned int *)v110 + 104);
                if ( (unsigned int)v39 >= (unsigned int)v46 )
                {
                  v115 = WdLogNewEntry5_WdError(v40, v39);
                  *(_QWORD *)(v115 + 32) = 2847LL;
                  goto LABEL_184;
                }
                v40 = (unsigned int)v39;
                if ( ((1 << v39) & v111) != 0 )
                {
                  v115 = WdLogNewEntry5_WdError((unsigned int)v39, v39);
                  *(_QWORD *)(v115 + 32) = 2854LL;
LABEL_184:
                  *(_QWORD *)(v115 + 24) = v31;
                  WdLogEvent5_WdError(v115);
                  v77 = -1073741811;
                  goto LABEL_219;
                }
                v111 |= 1 << v39;
                v109[v39] = v110;
                if ( (*((_DWORD *)v110 + 105) & 0x10) != 0 )
                {
                  v113 = (_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v163, v39);
                  *v113 = v114;
                }
                v110 = (__int64 *)*v110;
                ++v112;
              }
              if ( v112 != (_DWORD)v46 )
              {
                v115 = WdLogNewEntry5_WdError(v40, v39);
                *(_QWORD *)(v115 + 32) = 2877LL;
                goto LABEL_184;
              }
              v50 = v145;
            }
            v51 = v162;
            v52 = 0LL;
            v53 = Src;
            v54 = 0LL;
            Base = 0LL;
            LODWORD(NumOfElements) = 0;
            if ( v162 > 4 )
            {
              v39 = 0xFFFFFFFFFFFFFFFFuLL % v162;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v162 < 8 )
              {
LABEL_57:
                v152 = 1;
                if ( !v52 )
                  goto LABEL_215;
                memmove(v52, v53, 8 * v54);
                qsort(
                  Base,
                  (unsigned int)NumOfElements,
                  8uLL,
                  (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
                v39 = (unsigned int)NumOfElements;
                v54 = 1LL;
                v52 = Base;
                if ( (unsigned int)NumOfElements > 1uLL )
                {
                  while ( *((_QWORD *)Base + v54) != *((_QWORD *)Base + v54 - 1) )
                  {
                    if ( ++v54 >= (unsigned __int64)(unsigned int)NumOfElements )
                      goto LABEL_59;
                  }
                }
                else
                {
LABEL_59:
                  for ( i = 0LL; i < (unsigned int)NumOfElements; v52 = Base )
                    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v52[8 * i++] + 464LL));
                  v152 = 0;
                }
                if ( !v52 )
                {
LABEL_215:
                  v126 = WdLogNewEntry5_WdWarning(v52, v39, v54);
                  *(_QWORD *)(v126 + 24) = 2888LL;
                  WdLogEvent5_WdWarning(v126);
                  v77 = -1073741801;
LABEL_111:
                  v81 = Base;
                  if ( Base )
                  {
                    if ( !v152 )
                    {
                      for ( j = 0LL; j < (unsigned int)NumOfElements; v81 = Base )
                      {
                        v83 = v81[j] + 464LL;
                        *(_QWORD *)(v83 + 8) = 0LL;
                        ExReleasePushLockExclusiveEx(v83, 0LL);
                        KeLeaveCriticalRegion();
                        ++j;
                      }
                    }
                  }
                  if ( v81 != (_QWORD *)v150 && v81 )
                    ExFreePoolWithTag(v81, 0);
                  Base = 0LL;
                  LODWORD(NumOfElements) = 0;
LABEL_117:
                  if ( v163 != v164 && v163 )
                    ExFreePoolWithTag(v163, 0);
                  v163 = 0LL;
                  v165 = 0;
                  goto LABEL_119;
                }
                v155 = *(struct DXGADAPTER **)(*(_QWORD *)(v42 + 16) + 16LL);
                _InterlockedIncrement64((volatile signed __int64 *)v155 + 3);
                v56 = v155;
                v154 = -1LL;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx((char *)v56 + 136, 0LL);
                v156 = 1;
                v58 = *(_QWORD *)(v31 + 16);
                v59 = *(volatile signed __int64 **)(*(_QWORD *)(v58 + 16) + 16LL);
                v185 = (struct DXGADAPTER *)v59;
                v186 = 0;
                v187 = 0LL;
                if ( v59 )
                {
                  _InterlockedIncrement64(v59 + 3);
                  v184 = -1LL;
                }
                v60 = *(volatile signed __int64 **)(*(_QWORD *)(v58 + 16) + 16LL);
                v191 = (struct DXGADAPTER *)v60;
                v192 = 0;
                v193 = 0LL;
                if ( v60 )
                {
                  _InterlockedIncrement64(v60 + 3);
                  v190 = -1LL;
                }
                v194 = v58;
                v195 = 0;
                if ( v186 )
                {
                  v116 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v58);
                  v116[5] = v183;
                  v116[3] = 275LL;
                  v116[4] = 4LL;
                  v116[6] = 0LL;
                  v116[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v116);
                }
                if ( KeGetCurrentThread() == *((struct _KTHREAD **)v185 + 23) )
                {
                  v63 = v153;
                }
                else
                {
                  if ( !KeReadStateEvent((PRKEVENT)v185 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v61, &EventBlockThread, v62, 72);
                    KeWaitForSingleObject((char *)v185 + 48, Executive, 0, 0, 0LL);
                  }
                  v63 = v153;
                  DXGADAPTER::AcquireCoreResourceShared(v185, v153);
                }
                v187 = 0LL;
                if ( v63 )
                {
                  v117 = RtlStringCbCopyA(v188, v58, v63);
                  v118 = v188;
                  if ( v117 < 0 )
                    v118 = v187;
                  v187 = v118;
                }
                v186 = 1;
                if ( *(_DWORD *)(v194 + 576) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v183);
                  if ( v195 )
                    COREACCESS::Release((COREACCESS *)v189);
                  v121 = (_QWORD *)WdLogNewEntry5_WdEvent(v120, v119);
                  v121[5] = v148;
                  v121[3] = -1073741130LL;
                  v121[4] = v31;
                  WdLogEvent5_WdEvent(v121);
                  v77 = -1073741130;
                  goto LABEL_96;
                }
                v64 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL);
                v65 = *(_QWORD *)(v64 + 16);
                v66 = *(int *)(v65 + 2304) >= 0x2000 || *(_BYTE *)(v65 + 2604);
                v67 = v166;
                if ( (*(_DWORD *)&v166->Flags & 0x20) != 0 )
                  pNewAllocationList = v166->pNewAllocationList;
                else
                  pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v31 + 88);
                AllocationCount = v166->AllocationCount;
                v147[0] = v166->AllocationCount;
                v70 = 0LL;
                P = 0LL;
                v181 = 0;
                if ( !v66 )
                {
LABEL_84:
                  if ( v144 )
                    v76 = DXGCONTEXT::RenderKmLda(
                            v67,
                            (struct COREDEVICEACCESS *)v182,
                            (struct DXGCONTEXT **)Src,
                            v70,
                            (struct DXGHWQUEUE **)v163);
                  else
                    v76 = DXGCONTEXT::Render(
                            (DXGCONTEXT *)v31,
                            v67,
                            (struct COREDEVICEACCESS *)v182,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v154,
                            (struct DXGCONTEXT **)Src,
                            v70,
                            (struct DXGHWQUEUE **)v163);
                  v75 = v76;
LABEL_87:
                  if ( v66 && (_DWORD)AllocationCount )
                  {
                    do
                    {
                      v74 = *v70;
                      if ( *v70 )
                        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v74 + 11);
                      ++v70;
                      --AllocationCount;
                    }
                    while ( AllocationCount );
                  }
                  if ( v75 >= 0 )
                    goto LABEL_93;
                  switch ( v75 )
                  {
                    case -1073741811:
                    case -1073741592:
                      v125 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
                      v125[3] = v75;
                      v125[5] = v148;
                      v125[4] = v31;
                      WdLogEvent5_WdError(v125);
                      goto LABEL_93;
                    case -1071775482:
                      v123 = (_QWORD *)WdLogNewEntry5_WdEvent(v74, v73);
                      v123[3] = -1071775482LL;
                      break;
                    case -1071774910:
                      goto LABEL_93;
                    default:
                      v123 = (_QWORD *)WdLogNewEntry5_WdEvent(v74, v73);
                      v123[3] = v75;
                      break;
                  }
                  v124 = v148;
                  v123[4] = v31;
                  v123[5] = v124;
                  WdLogEvent5_WdEvent(v123);
LABEL_93:
                  v77 = v75;
                  goto LABEL_94;
                }
                if ( (unsigned int)AllocationCount > 0x20 )
                {
                  v58 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)AllocationCount;
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)AllocationCount < 8 )
                    goto LABEL_205;
                  v71 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                  P = v71;
                }
                else
                {
                  v71 = v180;
                  P = v180;
                }
                v181 = AllocationCount;
                if ( v71 )
                {
                  memset(v71, 0, 8 * AllocationCount);
                  v70 = (struct DXGALLOCATION **)P;
                  if ( P )
                  {
                    v72 = DxgkReferenceAllocationList(v147, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                    AllocationCount = v147[0];
                    v75 = v72;
                    if ( v72 < 0 )
                      goto LABEL_87;
                    goto LABEL_84;
                  }
                }
LABEL_205:
                v122 = WdLogNewEntry5_WdWarning(v64, v58, v57);
                *(_QWORD *)(v122 + 24) = 2928LL;
                WdLogEvent5_WdWarning(v122);
                v77 = -1073741801;
LABEL_94:
                if ( P != v180 && P )
                  ExFreePoolWithTag(P, 0);
                v37 = v146;
                v50 = v145;
                P = 0LL;
                v181 = 0;
LABEL_96:
                v78 = v191;
                if ( v191 )
                {
                  if ( v192 )
                  {
                    COREACCESS::Release((COREACCESS *)v189);
                    v78 = v191;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
                }
                v79 = v185;
                if ( v185 )
                {
                  if ( v186 )
                  {
                    v186 = 0;
                    v79 = v185;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v185 + 23) )
                    {
                      DXGADAPTER::ReleaseCoreResource(v185, v187);
                      v79 = v185;
                    }
                    v187 = 0LL;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v79 + 2), v79);
                }
                if ( v156 )
                {
                  v156 = 0;
                  ExReleasePushLockSharedEx((char *)v155 + 136, 0LL);
                  KeLeaveCriticalRegion();
                  v80 = (DXGGLOBAL **)v155;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v155 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(v80[2], (struct DXGADAPTER *)v80);
                }
                goto LABEL_111;
              }
              v52 = ExAllocatePoolWithTag(PagedPool, 8LL * v162, 0x4B677844u);
              Base = v52;
            }
            else
            {
              v52 = v150;
              Base = v150;
            }
            LODWORD(NumOfElements) = v51;
            v54 = v51;
            if ( v52 )
            {
              memset(v52, 0, 8 * v51);
              v54 = (unsigned int)NumOfElements;
              v52 = Base;
            }
            goto LABEL_57;
          }
        }
LABEL_218:
        v127 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v127 + 24) = 2815LL;
        WdLogEvent5_WdWarning(v127);
        v77 = -1073741801;
LABEL_219:
        v50 = v145;
        goto LABEL_117;
      }
    }
LABEL_222:
    v128 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    *(_QWORD *)(v128 + 24) = 2808LL;
    WdLogEvent5_WdWarning(v128);
    v50 = v145;
    v77 = -1073741801;
LABEL_119:
    if ( Src != v161 && Src )
      ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    v162 = 0;
    goto LABEL_121;
  }
  v77 = -1073741811;
  v101 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
  v101[3] = -1073741811LL;
  v101[4] = PsGetCurrentProcess();
  v101[5] = v4->hDevice;
  WdLogEvent5_WdError(v101);
  v50 = v145;
LABEL_123:
  if ( v50 )
  {
    v133 = _InterlockedDecrement64((volatile signed __int64 *)v50 + 11);
    if ( v133 < 0 )
    {
      v134 = WdLogNewEntry5_WdAssertion(v85, v84);
      *(_QWORD *)(v134 + 24) = 111LL;
      WdLogEvent5_WdAssertion(v134);
    }
    if ( !v133 )
    {
      v135 = *((_QWORD *)v50 + 2);
      v136 = *(struct DXGDEVICE **)(v135 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v177, v136);
      v137 = *((_QWORD *)v136 + 2);
      v172 = 0;
      v171 = *(_QWORD *)(v137 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v199, (__int64)v136, 2, v138, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v199, v139);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v136 + 2) + 16LL) + 200LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v135, v50, (struct COREDEVICEACCESS *)v199);
      COREACCESS::~COREACCESS((COREACCESS *)v201);
      COREACCESS::~COREACCESS((COREACCESS *)v200);
      if ( v172 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
      if ( v177[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v177);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v135 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v140 = *(_QWORD *)(v135 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v178,
          (struct DXGDEVICE *)v140);
        v141 = *(_QWORD *)(v135 + 16);
        v175 = 0;
        v174 = *(_QWORD *)(*(_QWORD *)(v141 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v173);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v202, v140, 2, v142, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v202, v143);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v140 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v140, (struct DXGCONTEXT *)v135, (struct COREDEVICEACCESS *)v202);
        COREACCESS::~COREACCESS((COREACCESS *)v204);
        COREACCESS::~COREACCESS((COREACCESS *)v203);
        if ( v175 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v173);
        if ( v178[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v178);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v140 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v140 + 16), (struct DXGDEVICE *)v140);
      }
    }
  }
LABEL_124:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v157, v84);
  if ( v159 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v86, &EventProfilerExit, v87, v157);
  return v77;
}
