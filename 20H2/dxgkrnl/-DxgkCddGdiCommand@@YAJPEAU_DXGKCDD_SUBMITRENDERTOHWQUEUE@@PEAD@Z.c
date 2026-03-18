/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E8AD0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023AF00 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C00199E8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4130 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00E8900 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00E94E0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBEC0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020BD94 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??A?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z @ 0x1C022B334 (--A-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0245300 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026BCA4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028D6DC (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
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
  volatile signed __int64 **v19; // rax
  volatile signed __int64 *v20; // rdi
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
  volatile signed __int64 *v50; // r14
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
  __int64 v103; // rbx
  _QWORD *v104; // rax
  unsigned int v105; // eax
  __int64 v106; // rax
  _QWORD *v107; // r15
  __int64 *v108; // r10
  int v109; // esi
  int v110; // r11d
  _QWORD *v111; // rax
  __int64 v112; // r9
  __int64 v113; // rax
  _QWORD *v114; // rax
  int v115; // eax
  char *v116; // rcx
  _QWORD *v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rcx
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // r9
  char *v128; // rdx
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rdi
  struct DXGDEVICE *v132; // rbx
  __int64 v133; // rax
  __int64 v134; // r9
  char *v135; // rdx
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // r9
  char *v139; // rdx
  char v140; // [rsp+48h] [rbp-C0h]
  volatile signed __int64 *v141; // [rsp+50h] [rbp-B8h]
  __int64 v142; // [rsp+58h] [rbp-B0h]
  unsigned int v143[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v144; // [rsp+68h] [rbp-A0h]
  void *Base; // [rsp+70h] [rbp-98h]
  _BYTE v146[32]; // [rsp+78h] [rbp-90h] BYREF
  size_t NumOfElements; // [rsp+98h] [rbp-70h]
  char v148; // [rsp+A0h] [rbp-68h]
  char *v149; // [rsp+A8h] [rbp-60h]
  __int64 v150; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTER *v151; // [rsp+B8h] [rbp-50h]
  char v152; // [rsp+C0h] [rbp-48h]
  int v153; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v154; // [rsp+D0h] [rbp-38h]
  char v155; // [rsp+D8h] [rbp-30h]
  void *Src; // [rsp+E0h] [rbp-28h]
  _BYTE v157[32]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v158; // [rsp+108h] [rbp+0h]
  PVOID v159; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v160[32]; // [rsp+118h] [rbp+10h] BYREF
  int v161; // [rsp+138h] [rbp+30h]
  struct _D3DKMT_RENDER *v162; // [rsp+140h] [rbp+38h]
  char v163[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v164; // [rsp+150h] [rbp+48h]
  char v165; // [rsp+158h] [rbp+50h]
  char v166[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v167; // [rsp+168h] [rbp+60h]
  char v168; // [rsp+170h] [rbp+68h]
  char v169[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v170; // [rsp+180h] [rbp+78h]
  char v171; // [rsp+188h] [rbp+80h]
  _QWORD v172[2]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v173[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v174[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  _BYTE v176[256]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v177; // [rsp+2D0h] [rbp+1C8h]
  char v178[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v179[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v180; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v181; // [rsp+2F0h] [rbp+1E8h]
  char v182; // [rsp+2F8h] [rbp+1F0h]
  char *v183; // [rsp+300h] [rbp+1F8h]
  char v184[24]; // [rsp+308h] [rbp+200h] BYREF
  char v185[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v186; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v187; // [rsp+330h] [rbp+228h]
  char v188; // [rsp+338h] [rbp+230h]
  __int64 v189; // [rsp+340h] [rbp+238h]
  unsigned __int64 v190; // [rsp+360h] [rbp+258h]
  char v191; // [rsp+368h] [rbp+260h]
  char v192[8]; // [rsp+378h] [rbp+270h] BYREF
  char v193[64]; // [rsp+380h] [rbp+278h] BYREF
  char v194[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v195[8]; // [rsp+418h] [rbp+310h] BYREF
  char v196[64]; // [rsp+420h] [rbp+318h] BYREF
  char v197[88]; // [rsp+460h] [rbp+358h] BYREF
  char v198[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v199[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  char v200[88]; // [rsp+500h] [rbp+3F8h] BYREF
  char v201[8]; // [rsp+558h] [rbp+450h] BYREF
  char v202[64]; // [rsp+560h] [rbp+458h] BYREF
  char v203[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v153 = -1;
  v149 = a2;
  v154 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v155 = 1;
    v153 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v155 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v153, 3020LL);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v162 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v10 = *((_QWORD *)Current + 1), (v144 = v10) == 0) )
  {
    v10 = v9;
    v144 = v9;
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
    *(_QWORD *)(v94 + 24) = 1571LL;
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
  v19 = (volatile signed __int64 **)(v15 + 16LL * (unsigned int)v14);
  if ( (_BYTE)v18 != 15 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_19;
  }
  v20 = *v19;
  v141 = *v19;
  if ( !*v19 )
    goto LABEL_20;
  _m_prefetchw((const void *)(v20 + 11));
  v96 = *((_QWORD *)v20 + 11);
  if ( !v96 )
  {
LABEL_19:
    v141 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v97 = v96;
    v96 = _InterlockedCompareExchange64(v20 + 11, v96 + 1, v96);
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
    *(_QWORD *)(v98 + 24) = 1571LL;
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
    v142 = v37;
    if ( *(_BYTE *)(v31 + 457) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v201, v37, 0, v36, 0);
      v102 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v201, 0LL);
      v103 = v102;
      if ( v102 >= 0 )
      {
        LODWORD(v103) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 16LL)
                                                       + 4240LL),
                          (struct DXGPROCESS *)v10,
                          (struct DXGCONTEXT *)v31,
                          v4);
      }
      else
      {
        v104 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v104[3] = v103;
        v104[4] = v31;
        v104[5] = v10;
        WdLogEvent5_WdEvent(v104);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v203);
      COREACCESS::~COREACCESS((COREACCESS *)v202);
      v50 = v141;
      v77 = v103;
LABEL_122:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v125 = *(_QWORD *)(v31 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v172,
          (struct DXGDEVICE *)v125);
        v126 = *(_QWORD *)(v31 + 16);
        v165 = 0;
        v164 = *(_QWORD *)(*(_QWORD *)(v126 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v163);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v192, v125, 2, v127, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v192, v128);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v125 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v125, (struct DXGCONTEXT *)v31, (struct COREDEVICEACCESS *)v192);
        COREACCESS::~COREACCESS((COREACCESS *)v194);
        COREACCESS::~COREACCESS((COREACCESS *)v193);
        if ( v165 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v163);
        if ( v172[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v172);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v125 + 16), (struct DXGDEVICE *)v125);
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
    if ( !*(_BYTE *)(v43 + 2614)
      || (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x30) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v43 + 2328) < 0x2000
      || (v105 = *(_DWORD *)(v43 + 280), v105 <= 1) )
    {
      BroadcastContextCount = v4->BroadcastContextCount;
      v45 = 0;
    }
    else
    {
      BroadcastContextCount = v105 - 1;
      v45 = 1;
      v4->BroadcastContextCount = BroadcastContextCount;
    }
    v140 = v45;
    v46 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v106 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      v77 = -1073741811;
      *(_QWORD *)(v106 + 24) = v31;
      *(_QWORD *)(v106 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v106);
      v50 = v141;
LABEL_121:
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
      goto LABEL_122;
    }
    Src = 0LL;
    v158 = 0;
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
      PoolWithTag = v157;
      v48 = 8 * v46;
    }
    Src = PoolWithTag;
    v158 = v46;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v48);
      if ( Src )
      {
        v159 = 0LL;
        v161 = 0;
        if ( (unsigned int)v46 > 4 )
        {
          v39 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v46;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 < 8 )
            goto LABEL_218;
          v49 = ExAllocatePoolWithTag(PagedPool, v48, 0x4B677844u);
        }
        else
        {
          v49 = v160;
        }
        v159 = v49;
        v161 = v46;
        if ( v49 )
        {
          memset(v49, 0, v48);
          if ( v159 )
          {
            v50 = v141;
            *(_QWORD *)Src = v31;
            if ( v141 )
              *(_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v159, 0LL) = v141;
            if ( v45 )
            {
              v107 = Src;
              v108 = *(__int64 **)(v42 + 464);
              v109 = 0;
              v110 = 0;
              while ( v108 != (__int64 *)(v42 + 464) && v108 )
              {
                v39 = *((unsigned int *)v108 + 104);
                if ( (unsigned int)v39 >= (unsigned int)v46 )
                {
                  v113 = WdLogNewEntry5_WdError(v40, v39);
                  *(_QWORD *)(v113 + 32) = 2847LL;
                  goto LABEL_184;
                }
                v40 = (unsigned int)v39;
                if ( ((1 << v39) & v109) != 0 )
                {
                  v113 = WdLogNewEntry5_WdError((unsigned int)v39, v39);
                  *(_QWORD *)(v113 + 32) = 2854LL;
LABEL_184:
                  *(_QWORD *)(v113 + 24) = v31;
                  WdLogEvent5_WdError(v113);
                  v77 = -1073741811;
                  goto LABEL_219;
                }
                v109 |= 1 << v39;
                v107[v39] = v108;
                if ( (*((_DWORD *)v108 + 105) & 0x10) != 0 )
                {
                  v111 = (_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v159, v39);
                  *v111 = v112;
                }
                v108 = (__int64 *)*v108;
                ++v110;
              }
              if ( v110 != (_DWORD)v46 )
              {
                v113 = WdLogNewEntry5_WdError(v40, v39);
                *(_QWORD *)(v113 + 32) = 2877LL;
                goto LABEL_184;
              }
              v50 = v141;
            }
            v51 = v158;
            v52 = 0LL;
            v53 = Src;
            v54 = 0LL;
            Base = 0LL;
            LODWORD(NumOfElements) = 0;
            if ( v158 > 4 )
            {
              v39 = 0xFFFFFFFFFFFFFFFFuLL % v158;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v158 < 8 )
              {
LABEL_57:
                v148 = 1;
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
                  v148 = 0;
                }
                if ( !v52 )
                {
LABEL_215:
                  v122 = WdLogNewEntry5_WdWarning(v52, v39, v54);
                  *(_QWORD *)(v122 + 24) = 2888LL;
                  WdLogEvent5_WdWarning(v122);
                  v77 = -1073741801;
LABEL_111:
                  v81 = Base;
                  if ( Base )
                  {
                    if ( !v148 )
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
                  if ( v81 != (_QWORD *)v146 && v81 )
                    ExFreePoolWithTag(v81, 0);
                  Base = 0LL;
                  LODWORD(NumOfElements) = 0;
LABEL_117:
                  if ( v159 != v160 && v159 )
                    ExFreePoolWithTag(v159, 0);
                  v159 = 0LL;
                  v161 = 0;
                  goto LABEL_119;
                }
                v151 = *(struct DXGADAPTER **)(*(_QWORD *)(v42 + 16) + 16LL);
                _InterlockedIncrement64((volatile signed __int64 *)v151 + 3);
                v56 = v151;
                v150 = -1LL;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx((char *)v56 + 136, 0LL);
                v152 = 1;
                v58 = *(_QWORD *)(v31 + 16);
                v59 = *(volatile signed __int64 **)(*(_QWORD *)(v58 + 16) + 16LL);
                v181 = (struct DXGADAPTER *)v59;
                v182 = 0;
                v183 = 0LL;
                if ( v59 )
                {
                  _InterlockedIncrement64(v59 + 3);
                  v180 = -1LL;
                }
                v60 = *(volatile signed __int64 **)(*(_QWORD *)(v58 + 16) + 16LL);
                v187 = (struct DXGADAPTER *)v60;
                v188 = 0;
                v189 = 0LL;
                if ( v60 )
                {
                  _InterlockedIncrement64(v60 + 3);
                  v186 = -1LL;
                }
                v190 = v58;
                v191 = 0;
                if ( v182 )
                {
                  v114 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v58);
                  v114[5] = v179;
                  v114[3] = 275LL;
                  v114[4] = 4LL;
                  v114[6] = 0LL;
                  v114[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v114);
                }
                if ( KeGetCurrentThread() == *((struct _KTHREAD **)v181 + 23) )
                {
                  v63 = v149;
                }
                else
                {
                  if ( !KeReadStateEvent((PRKEVENT)v181 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v61, &EventBlockThread, v62, 72);
                    KeWaitForSingleObject((char *)v181 + 48, Executive, 0, 0, 0LL);
                  }
                  v63 = v149;
                  DXGADAPTER::AcquireCoreResourceShared(v181, v149);
                }
                v183 = 0LL;
                if ( v63 )
                {
                  v115 = RtlStringCbCopyA(v184, v58, v63);
                  v116 = v184;
                  if ( v115 < 0 )
                    v116 = v183;
                  v183 = v116;
                }
                v182 = 1;
                if ( *(_DWORD *)(v190 + 576) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v179);
                  if ( v191 )
                    COREACCESS::Release((COREACCESS *)v185);
                  v117 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v117[5] = v144;
                  v117[3] = -1073741130LL;
                  v117[4] = v31;
                  WdLogEvent5_WdEvent(v117);
                  v77 = -1073741130;
                  goto LABEL_96;
                }
                v64 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL);
                v65 = *(_QWORD *)(v64 + 16);
                v66 = *(int *)(v65 + 2328) >= 0x2000 || *(_BYTE *)(v65 + 2628);
                v67 = v162;
                if ( (*(_DWORD *)&v162->Flags & 0x20) != 0 )
                  pNewAllocationList = v162->pNewAllocationList;
                else
                  pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v31 + 88);
                AllocationCount = v162->AllocationCount;
                v143[0] = v162->AllocationCount;
                v70 = 0LL;
                P = 0LL;
                v177 = 0;
                if ( !v66 )
                {
LABEL_84:
                  if ( v140 )
                    v76 = DXGCONTEXT::RenderKmLda(
                            v67,
                            (struct COREDEVICEACCESS *)v178,
                            (struct DXGCONTEXT **)Src,
                            v70,
                            (struct DXGHWQUEUE **)v159);
                  else
                    v76 = DXGCONTEXT::Render(
                            (DXGCONTEXT *)v31,
                            v67,
                            (struct COREDEVICEACCESS *)v178,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v150,
                            (struct DXGCONTEXT **)Src,
                            v70,
                            (struct DXGHWQUEUE **)v159);
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
                      v121 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
                      v121[3] = v75;
                      v121[5] = v144;
                      v121[4] = v31;
                      WdLogEvent5_WdError(v121);
                      goto LABEL_93;
                    case -1071775482:
                      v119 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v119[3] = -1071775482LL;
                      break;
                    case -1071774910:
                      goto LABEL_93;
                    default:
                      v119 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v119[3] = v75;
                      break;
                  }
                  v120 = v144;
                  v119[4] = v31;
                  v119[5] = v120;
                  WdLogEvent5_WdEvent(v119);
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
                  v71 = v176;
                  P = v176;
                }
                v177 = AllocationCount;
                if ( v71 )
                {
                  memset(v71, 0, 8 * AllocationCount);
                  v70 = (struct DXGALLOCATION **)P;
                  if ( P )
                  {
                    v72 = DxgkReferenceAllocationList(v143, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                    AllocationCount = v143[0];
                    v75 = v72;
                    if ( v72 < 0 )
                      goto LABEL_87;
                    goto LABEL_84;
                  }
                }
LABEL_205:
                v118 = WdLogNewEntry5_WdWarning(v64, v58, v57);
                *(_QWORD *)(v118 + 24) = 2928LL;
                WdLogEvent5_WdWarning(v118);
                v77 = -1073741801;
LABEL_94:
                if ( P != v176 && P )
                  ExFreePoolWithTag(P, 0);
                v37 = v142;
                v50 = v141;
                P = 0LL;
                v177 = 0;
LABEL_96:
                v78 = v187;
                if ( v187 )
                {
                  if ( v188 )
                  {
                    COREACCESS::Release((COREACCESS *)v185);
                    v78 = v187;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
                }
                v79 = v181;
                if ( v181 )
                {
                  if ( v182 )
                  {
                    v182 = 0;
                    v79 = v181;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v181 + 23) )
                    {
                      DXGADAPTER::ReleaseCoreResource(v181, v183);
                      v79 = v181;
                    }
                    v183 = 0LL;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v79 + 2), v79);
                }
                if ( v152 )
                {
                  v152 = 0;
                  ExReleasePushLockSharedEx((char *)v151 + 136, 0LL);
                  KeLeaveCriticalRegion();
                  v80 = (DXGGLOBAL **)v151;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v151 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(v80[2], (struct DXGADAPTER *)v80);
                }
                goto LABEL_111;
              }
              v52 = ExAllocatePoolWithTag(PagedPool, 8LL * v158, 0x4B677844u);
              Base = v52;
            }
            else
            {
              v52 = v146;
              Base = v146;
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
        v123 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v123 + 24) = 2815LL;
        WdLogEvent5_WdWarning(v123);
        v77 = -1073741801;
LABEL_219:
        v50 = v141;
        goto LABEL_117;
      }
    }
LABEL_222:
    v124 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    *(_QWORD *)(v124 + 24) = 2808LL;
    WdLogEvent5_WdWarning(v124);
    v50 = v141;
    v77 = -1073741801;
LABEL_119:
    if ( Src != v157 && Src )
      ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    v158 = 0;
    goto LABEL_121;
  }
  v77 = -1073741811;
  v101 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
  v101[3] = -1073741811LL;
  v101[4] = PsGetCurrentProcess();
  v101[5] = v4->hDevice;
  WdLogEvent5_WdError(v101);
  v50 = v141;
LABEL_123:
  if ( v50 )
  {
    v129 = _InterlockedDecrement64(v50 + 11);
    if ( v129 < 0 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v85, v84);
      *(_QWORD *)(v130 + 24) = 111LL;
      WdLogEvent5_WdAssertion(v130);
    }
    if ( !v129 )
    {
      v131 = *((_QWORD *)v50 + 2);
      v132 = *(struct DXGDEVICE **)(v131 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v173, v132);
      v133 = *((_QWORD *)v132 + 2);
      v168 = 0;
      v167 = *(_QWORD *)(v133 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v166);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v195, (__int64)v132, 2, v134, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v195, v135);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 2) + 16LL) + 200LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v131, (PVOID)v50, (struct COREDEVICEACCESS *)v195);
      COREACCESS::~COREACCESS((COREACCESS *)v197);
      COREACCESS::~COREACCESS((COREACCESS *)v196);
      if ( v168 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v166);
      if ( v173[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v173);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v131 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v136 = *(_QWORD *)(v131 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v174,
          (struct DXGDEVICE *)v136);
        v137 = *(_QWORD *)(v131 + 16);
        v171 = 0;
        v170 = *(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v169);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v198, v136, 2, v138, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v198, v139);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v136 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v136, (struct DXGCONTEXT *)v131, (struct COREDEVICEACCESS *)v198);
        COREACCESS::~COREACCESS((COREACCESS *)v200);
        COREACCESS::~COREACCESS((COREACCESS *)v199);
        if ( v171 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v169);
        if ( v174[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v136 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v136 + 16), (struct DXGDEVICE *)v136);
      }
    }
  }
LABEL_124:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v153, v84);
  if ( v155 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v86, &EventProfilerExit, v87, v153);
  return v77;
}
