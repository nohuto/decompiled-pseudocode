/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C011BE40
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00072A4 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B3CC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DriverSupportsWDDM3Features@DXGADAPTER@@QEBAEXZ @ 0x1C0024904 (-DriverSupportsWDDM3Features@DXGADAPTER@@QEBAEXZ.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014C0F4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  struct _D3DKMT_CREATEALLOCATION *v12; // r12
  DXGDEVICE *v13; // r13
  struct _DXGK_ALLOCATIONINFO *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  UINT NumAllocations; // ecx
  UINT v21; // ebx
  struct _DXGK_ALLOCATIONINFO *v22; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v23; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v25; // r8
  void *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  UINT v29; // eax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v35; // rsi
  UINT v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdx
  struct DXGRESOURCE *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v50; // rbx
  __int64 v51; // rdi
  int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v62; // rax
  int CurrentProcessSessionId; // r15d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  void *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  int v75; // r15d
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned __int8 v82; // cl
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  struct _DXGK_ALLOCATIONINFO *v85; // rcx
  __int64 Value; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  UINT v90; // r9d
  struct DXGALLOCATION *v91; // rdi
  struct _DXGK_ALLOCATIONINFO *v92; // r15
  __int64 v93; // r14
  struct _DXGK_ALLOCATIONINFO *v94; // rdx
  _DWORD *pPrivateDriverData; // rcx
  struct _DXGK_ALLOCATIONINFO *v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // r8d
  __int64 v100; // r10
  int v101; // edx
  int v102; // r8d
  UINT v103; // eax
  UINT v104; // eax
  SIZE_T v105; // rax
  __int64 Flags; // rdx
  __int64 v107; // rcx
  DXGADAPTER *v108; // rcx
  __int64 v109; // r8
  int v110; // r9d
  unsigned int v111; // r11d
  __int64 v112; // rdx
  __int64 (__fastcall **v113)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v114; // rcx
  int v115; // eax
  int v116; // r8d
  unsigned int v117; // ecx
  int v118; // ecx
  int v119; // eax
  unsigned int v120; // eax
  int v121; // eax
  int v122; // edx
  unsigned int v123; // ecx
  int v124; // ecx
  int v125; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v126; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v127; // eax
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  _QWORD *v134; // rax
  __int64 v135; // rcx
  _QWORD *v136; // rax
  unsigned int v138; // [rsp+20h] [rbp-B9h]
  struct _D3DDDI_ALLOCATIONINFO2 *v139; // [rsp+28h] [rbp-B1h]
  void *v141; // [rsp+40h] [rbp-99h] BYREF
  UINT Size; // [rsp+48h] [rbp-91h]
  UINT Size_4; // [rsp+4Ch] [rbp-8Dh]
  struct _DXGK_ALLOCATIONINFO *v144; // [rsp+50h] [rbp-89h]
  __int64 v145; // [rsp+58h] [rbp-81h]
  int v146; // [rsp+60h] [rbp-79h]
  int v147; // [rsp+64h] [rbp-75h]
  struct DXGALLOCATION *v148; // [rsp+68h] [rbp-71h]
  struct _DXGK_ALLOCATIONINFO *v149; // [rsp+70h] [rbp-69h]
  int v150; // [rsp+78h] [rbp-61h] BYREF
  __int64 v151; // [rsp+80h] [rbp-59h]
  char v152; // [rsp+88h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION *v153; // [rsp+90h] [rbp-49h]
  char v154[8]; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-39h] BYREF

  v12 = a2;
  v13 = this;
  v14 = a4;
  v153 = a2;
  v148 = a5;
  v15 = *((_QWORD *)this + 2);
  v147 = 0;
  v16 = *(_QWORD *)(v15 + 16);
  v149 = a4;
  v139 = a3;
  v138 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v19 + 24) = 2956LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a3 = v139;
  }
  NumAllocations = v12->NumAllocations;
  v21 = 0;
  v141 = 0LL;
  if ( NumAllocations )
  {
    v22 = v149;
    do
    {
      v23 = &a3[v21];
      if ( v23->pPrivateDriverData )
      {
        PrivateDriverDataSize = v23->PrivateDriverDataSize;
        v25 = v21;
        v22[v25].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&v12->Flags & 0x10000) != 0 )
        {
          v22[v25].pPrivateDriverData = v23->pPrivateDriverData;
        }
        else
        {
          v26 = a7[v21];
          v22[v25].pPrivateDriverData = v26;
          memmove(v26, a8[v21], PrivateDriverDataSize);
        }
        a3 = v139;
      }
      NumAllocations = v12->NumAllocations;
      ++v21;
    }
    while ( v21 < NumAllocations );
    v13 = this;
    v14 = v149;
  }
  v146 = 0;
  if ( a6 )
  {
    v27 = *((_QWORD *)a6 + 7);
    v28 = *((_DWORD *)a6 + 1);
    v146 = 1;
    if ( (v28 & 1) != 0 )
      v145 = *(_QWORD *)(v27 + 16);
    else
      v145 = v27;
  }
  else
  {
    v145 = 0LL;
  }
  v29 = v12->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  v144 = v14;
  if ( v29 && v12->pStandardAllocation )
  {
    Size = v29;
    v30 = operator new[](v29, 0x4B677844u, PagedPool);
    v141 = v30;
    if ( !v30 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v34[3] = v13;
      v34[4] = Size;
      v138 = -1073741801;
      v34[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_225;
    }
    if ( a11 )
      memmove(v30, Src, Size);
    else
      memmove(v30, v12->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
  }
  v35 = a10;
  if ( a10
    && (*(_DWORD *)a10 & 0x3000) != 0
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
    && v12->NumAllocations )
  {
    do
    {
      v37 = v36++;
      v144[v37].Flags.Value |= 0x400u;
    }
    while ( v36 < v12->NumAllocations );
  }
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    *(_DWORD *)&v12->Flags &= ~0x100000u;
  if ( (*(_DWORD *)&v12->Flags & 0x100000) != 0 )
    goto LABEL_96;
  v41 = *((_QWORD *)v13 + 2);
  v150 = -1;
  v151 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v152 = 1;
    v150 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v39, &EventProfilerEnter, v40, 5002);
  }
  else
  {
    v152 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v150, 5002LL);
  CurrentProcess = PsGetCurrentProcess(v43, v42);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v48 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v47, v46)) == 0LL
    || (v50 = *((_QWORD *)Current + 1)) == 0 )
  {
    v50 = v48;
  }
  v51 = v50 + 112;
  v52 = 0;
  if ( !v50 )
    v51 = 0LL;
  if ( v51 && *(struct _KTHREAD **)(v51 + 8) == KeGetCurrentThread() )
  {
    v53 = WdLogNewEntry5_WdAssertion(v47, v46);
    *(_QWORD *)(v53 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( v50 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v51, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v56 = *(_DWORD *)(v51 + 24);
        if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v55, v56);
      }
      ExAcquirePushLockExclusiveEx(v51, 0LL);
    }
    v52 = 2;
    *(_QWORD *)(v51 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v41 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_77;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v62 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v62 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v62);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v58, v57);
  v66 = PsGetCurrentProcess(v65, v64);
  v67 = PsGetProcessDxgProcess(v66);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v67
    && (v68 = *(void **)(v67 + 88)) != 0LL
    && v68 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v71 = PsGetCurrentProcess(v70, v69),
         ProcessSessionId = PsGetProcessSessionIdEx(v71),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
      {
        ThreadProperty = 0LL;
LABEL_77:
        v75 = 0;
        goto LABEL_78;
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( !ThreadProperty )
    goto LABEL_77;
  v75 = *((_DWORD *)ThreadProperty + 8);
LABEL_78:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v154,
    *(struct DXGADAPTER **)(v41 + 16));
  v77 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v41 + 16) + 376LL))(
          *(_QWORD *)(*(_QWORD *)(v41 + 16) + 272LL),
          &v141);
  if ( v154[0] )
    KeUnstackDetachProcess(&ApcState);
  v80 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v80 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v76);
    v81[3] = 275LL;
    v81[4] = 16LL;
    v81[5] = v41;
    v81[6] = CurrentIrql;
    v82 = KeGetCurrentIrql();
    v81[7] = v82;
    WdLogEvent5_WdCriticalError(v81);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v75 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v76);
    v83[3] = 275LL;
    v83[4] = 38LL;
    v83[5] = *((int *)ThreadProperty + 8);
    v83[6] = v75;
    v83[7] = 0LL;
    WdLogEvent5_WdCriticalError(v83);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4364LL));
  v84 = (_QWORD *)WdLogNewEntry5_WdTrace(v80, v76, v78, v79);
  v84[3] = v77;
  v84[4] = v145;
  v84[5] = v144->hAllocation;
  v84[6] = v144->Flags.Value;
  v85 = v144;
  Value = v144->PreferredSegment.Value;
  v84[7] = Value;
  if ( (_DWORD)v77 != -1073741811 && (_DWORD)v77 != -1073741801 && (_DWORD)v77 )
  {
    v87 = WdLogNewEntry5_WdError(v85, Value);
    *(_QWORD *)(v87 + 24) = v77;
    WdLogEvent5_WdError(v87);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v41 + 16));
  if ( v52 == 2 )
  {
    *(_QWORD *)(v51 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v51, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v150, v88);
  if ( v152 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)v39, &EventProfilerExit, v89, v150);
  v138 = v77;
  if ( (int)v77 < 0 )
    goto LABEL_225;
  v13 = this;
  v12 = v153;
  v35 = a10;
LABEL_96:
  v90 = 0;
  v91 = v148;
  if ( v12->NumAllocations )
  {
    v92 = v149;
    while ( 1 )
    {
      v93 = v90;
      if ( (*(_DWORD *)&v12->Flags & 0x100000) != 0 )
      {
        v94 = &v92[v90];
        if ( v94->PrivateDriverDataSize < 0x40 )
        {
          v128 = (_QWORD *)WdLogNewEntry5_WdError(v39, v94);
          v128[3] = 3090LL;
          goto LABEL_207;
        }
        if ( (v139[v90].Flags.Value & 1) != 0 )
        {
          v128 = (_QWORD *)WdLogNewEntry5_WdError(v139, v94);
          v128[3] = 3096LL;
LABEL_207:
          WdLogEvent5_WdError(v128);
          v138 = -1073741811;
          goto LABEL_225;
        }
        *((_DWORD *)v91 + 18) |= 0x200000u;
        *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 0x200000u;
        pPrivateDriverData = v94->pPrivateDriverData;
        v94->Alignment = *(_DWORD *)v94->pPrivateDriverData;
        v94->Size = *((_QWORD *)pPrivateDriverData + 1);
        v94->PitchAlignedSize = *((_QWORD *)pPrivateDriverData + 2);
        v94->HintedBank.Value = pPrivateDriverData[6];
        v94->PreferredSegment.Value = pPrivateDriverData[7];
        v94->SupportedReadSegmentSet = pPrivateDriverData[8];
        v94->SupportedWriteSegmentSet = pPrivateDriverData[9];
        v94->EvictionSegmentSet = pPrivateDriverData[10];
        v94->MaximumRenamingListLength = pPrivateDriverData[11];
        v94->Flags.Value = pPrivateDriverData[12];
        v94->AllocationPriority = pPrivateDriverData[13];
        *(&v94->AllocationPriority + 1) = pPrivateDriverData[14];
      }
      v96 = &v92[v90];
      *(_QWORD *)(*((_QWORD *)v91 + 6) + 16LL) = v96->hAllocation;
      *(_QWORD *)(*((_QWORD *)v91 + 6) + 24LL) = v96->pAllocationUsageHint;
      *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) & 0xFFFFF7FF | ((v96->Flags.Value & 0x30) != 0 ? 0x800 : 0);
      *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) ^ (v96->Flags.Value << 17)) & 0x80000;
      v96->Flags.Value &= 0x807FFFFu;
      if ( DXGADAPTER::DriverSupportsWDDM3Features(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
        && *(&v96->AllocationPriority + 1) >= 2 )
      {
        v128 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97);
        v128[3] = 3151LL;
        goto LABEL_207;
      }
      v101 = v99;
      if ( (*(_DWORD *)(v98 + 2060) & 0x40) != 0 && *(_BYTE *)(v98 + 2630) )
      {
        v101 = v99 | 0x8000;
        v96->Flags.Value = v99 | 0x8000;
      }
      v102 = v101;
      if ( (v101 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2631LL) )
      {
        v102 = v101 | 0x10000;
        v96->Flags.Value = v101 | 0x10000;
      }
      if ( v35 )
      {
        if ( (*(_DWORD *)v35 & 0x1000) != 0 )
          v96->Flags.Value = v102 | 0x20000;
        v103 = *((_DWORD *)v35 + 96);
        if ( v103 )
        {
          v96->SupportedWriteSegmentSet = v103;
          v96->PreferredSegment.Value = *((_DWORD *)v35 + 97);
        }
        v104 = *((_DWORD *)v35 + 98);
        if ( v104 )
          v96->Alignment = v104;
        if ( (*(_DWORD *)v35 & 0x2000) != 0 )
          *(_DWORD *)(*(_QWORD *)(96 * v93 + v100 + 48) + 4LL) |= 0x8000u;
        v105 = *((_QWORD *)v35 + 50);
        if ( v105 )
          v96->Size = v105;
        if ( (*(_DWORD *)v35 & 0x8000) != 0 )
          v92[v93].Flags.Value |= 0x8000u;
        if ( *((_DWORD *)v35 + 4) == 5 )
        {
          *(_DWORD *)(*(_QWORD *)(96 * v93 + v100 + 48) + 4LL) |= 0x10000u;
          v92[v93].Flags.Value |= 0x8000u;
        }
      }
      Flags = (unsigned int)v12->Flags;
      v107 = *(_DWORD *)&v12->Flags & 0x10000;
      if ( (*(_DWORD *)&v12->Flags & 0x10000) != 0 && v96->Size != a12->ExistingHeapData.Size )
      {
        v128 = (_QWORD *)WdLogNewEntry5_WdError(v107, Flags);
        v128[3] = v92[v93].Size;
        v128[4] = a12->ExistingHeapData.Size;
        v128[5] = -1073741811LL;
        goto LABEL_207;
      }
      if ( (_DWORD)v107 && (Flags & 0x20020) != 0 || v35 && (*((_QWORD *)v35 + 42) || *((_QWORD *)v35 + 41)) )
        v96->Flags.Value |= 1u;
      if ( *((_DWORD *)v13 + 108) == 2
        && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) > 1
        && !DXGADAPTER::ReplicateGdiContent(v108)
        && (v139[v93].Flags.Value & 1) == 0 )
      {
        v92[v93].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2724LL);
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
        *((_DWORD *)v91 + 18) ^= (*((_DWORD *)v91 + 18) ^ (v96->MaximumRenamingListLength << 12)) & 0x3F000;
      else
        *((_DWORD *)v91 + 18) &= 0xFFFC0FFF;
      v112 = v96->Flags.Value;
      if ( (v112 & 0x200) != 0
        && (v113 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v13 + 2) + 16LL),
            v113[74] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
        || (v112 & 0x100) != 0
        && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
         || v113[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v113[84] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v113[83] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v113[82] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
      {
        v129 = (_QWORD *)WdLogNewEntry5_WdError(v113, v112);
        v129[3] = v13;
        v129[4] = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
        v129[5] = -1073741637LL;
        WdLogEvent5_WdError(v129);
        v138 = -1073741637;
        goto LABEL_225;
      }
      v114 = (unsigned int)v12->Flags;
      if ( (v114 & 0x100000) == 0 && !*(_QWORD *)(*((_QWORD *)v91 + 6) + 16LL) )
      {
        v128 = (_QWORD *)WdLogNewEntry5_WdError(v114, v112);
        v128[3] = v13;
        v128[4] = v91;
        v128[5] = -1073741811LL;
        goto LABEL_207;
      }
      v38 = 96 * v93;
      v115 = *(_DWORD *)(96 * v93 + v109 + 32);
      if ( (v115 & 2) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 0x1000u;
        LODWORD(v114) = v12->Flags;
        v115 = *(_DWORD *)(v38 + v109 + 32);
      }
      if ( (v115 & 1) == 0 || (v96->Flags.Value & 0x100) != 0 )
      {
        if ( (v114 & 2) != 0 )
          v96->Flags.Value |= 0x20000000u;
        if ( *((_DWORD *)v13 + 108) == 2 && *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
        {
          if ( v35 )
          {
            if ( *((_QWORD *)v35 + 4) )
            {
              if ( *((_QWORD *)v35 + 5) )
              {
                if ( *((_DWORD *)v35 + 4) == 2 )
                {
                  v126 = v12->Flags;
                  if ( (*(_BYTE *)&v126 & 0x20) == 0 && (*(_BYTE *)&v126 & 2) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 2u;
                    *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 4u;
                    v92[v93].Flags.Value = v92[v93].Flags.Value & 0x3DBFFFFF | 0x2400000;
                  }
                }
              }
            }
          }
        }
        goto LABEL_196;
      }
      v116 = *(_DWORD *)(v38 + v109 + 28);
      if ( (v114 & 2) != 0 )
      {
        v121 = *((_DWORD *)v13 + 108);
        if ( v121 == 2 )
        {
          *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 2u;
          v96->Flags.Value |= 0x40000000u;
          goto LABEL_181;
        }
        if ( (v114 & 0x800) != 0 )
        {
          if ( (v114 & 0x400) != 0 )
          {
            if ( v121 != 1 || (v122 = 0x2000, !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2531LL)) )
              v122 = v111;
            *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) = v122 | *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) & 0xFFFFDFFF;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 1u;
            v96->Flags.Value |= 0x80000u;
          }
        }
        else if ( v121 == 1 )
        {
          if ( (v114 & 0x400) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2531LL) )
              *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 0x2000u;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 1u;
          }
        }
        v123 = v111;
        v38 = 0x40000000LL;
        if ( *((_DWORD *)v13 + 108) == 1 )
          v123 = 0x80000000;
        v124 = v96->Flags.Value & 0x7FFFFFFF | v123;
        v125 = v111;
        v96->Flags.Value = v124;
        if ( !*((_DWORD *)v13 + 108) )
          v125 = 0x40000000;
        v120 = v124 & 0xBFFFFFFF | v125 | 0x20000000;
      }
      else
      {
        v117 = v111;
        v38 = 0x40000000LL;
        *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 1u;
        if ( *((_DWORD *)v13 + 108) == 1 )
          v117 = 0x80000000;
        v118 = v96->Flags.Value & 0x7FFFFFFF | v117;
        v119 = v111;
        v96->Flags.Value = v118;
        if ( !*((_DWORD *)v13 + 108) )
          v119 = 0x40000000;
        v120 = v118 & 0xBFFFFFFF | v119;
      }
      v96->Flags.Value = v120;
LABEL_181:
      if ( *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) |= 4u;
        v38 = v96->Flags.Value & 0x3DFFFFFF;
        LODWORD(v38) = v38 | 0x2000000;
        v96->Flags.Value = v38;
        if ( (*(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) & 2) != 0 )
        {
          v38 = (unsigned int)v38 | 0x20400000;
          v96->Flags.Value = v38;
        }
      }
      *(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v91 + 6) + 4LL) ^ (v116 << 6)) & 0x3C0;
LABEL_196:
      v39 = a6;
      if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
        v96->Flags.Value |= 0x88000u;
      v127 = v12->Flags;
      if ( (*(_WORD *)&v127 & 0x1800) != 0 )
      {
        v96->Flags.Value |= 0x20100000u;
        v127 = v12->Flags;
      }
      if ( (*(_WORD *)&v127 & 0x400) != 0 )
        v92[v93].Flags.Value |= 0x200000u;
      v91 = (struct DXGALLOCATION *)*((_QWORD *)v91 + 8);
      v90 = v110 + 1;
      if ( v90 >= v12->NumAllocations )
        goto LABEL_213;
    }
  }
  v39 = a6;
LABEL_213:
  if ( v39 )
  {
    v130 = v145;
    if ( (*(_DWORD *)&v12->Flags & 2) != 0 )
    {
      v131 = *((_QWORD *)v39 + 7);
      v132 = v131;
      v133 = *(_QWORD *)(v131 + 16);
      if ( v133 && v145 && v145 != v133 )
      {
        v134 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v131, v131);
        v134[5] = 0LL;
        v134[6] = 0LL;
        v134[7] = 0LL;
        v134[3] = 275LL;
        v134[4] = 7LL;
        WdLogEvent5_WdCriticalError(v134);
        v130 = v145;
        v132 = *((_QWORD *)a6 + 7);
      }
      *(_QWORD *)(v132 + 16) = v130;
    }
    else
    {
      v135 = *((_QWORD *)v39 + 7);
      if ( v135 && v145 && v135 != v145 )
      {
        v136 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v135, v38);
        v136[5] = 0LL;
        v136[6] = 0LL;
        v136[7] = 0LL;
        v136[3] = 275LL;
        v136[4] = 7LL;
        WdLogEvent5_WdCriticalError(v136);
        v130 = v145;
      }
      *((_QWORD *)a6 + 7) = v130;
    }
  }
LABEL_225:
  operator delete[](v141);
  return v138;
}
