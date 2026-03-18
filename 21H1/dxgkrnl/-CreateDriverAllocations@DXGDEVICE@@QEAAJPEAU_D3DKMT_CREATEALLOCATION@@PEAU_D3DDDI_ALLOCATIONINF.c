/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00F35F0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000A37C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014D7E4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
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
  DXGDEVICE *v12; // r13
  struct DXGRESOURCE *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 NumAllocations; // rcx
  unsigned int v21; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v22; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v24; // r8
  void *v25; // rcx
  SIZE_T v26; // rax
  __int64 v27; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // r12d
  __int64 v42; // rax
  __int64 v43; // rdi
  void *v44; // rax
  __int64 ThreadWin32Thread; // rax
  int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  __int64 v51; // rcx
  _QWORD *v52; // rax
  struct _DXGK_ALLOCATIONINFO *v53; // rcx
  __int64 Value; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // r12d
  struct DXGALLOCATION *v60; // rbx
  __int64 v61; // rdi
  struct DXGRESOURCE *v62; // r14
  DXGDEVICE *v63; // rsi
  const struct _D3DKM_CREATESTANDARDALLOCATION *v64; // r9
  struct _DXGK_ALLOCATIONINFO *v65; // r11
  __int64 v66; // rcx
  struct _DXGK_ALLOCATIONINFO *v67; // r13
  int v68; // edx
  __int64 v69; // r8
  int v70; // r8d
  __int64 Flags; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v78; // eax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  UINT v85; // eax
  UINT v86; // eax
  struct DXGALLOCATION *v87; // rdx
  SIZE_T v88; // rax
  __int64 v89; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  DXGADAPTER *v92; // rcx
  int v93; // r9d
  __int64 v94; // rcx
  __int64 v95; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v96; // eax
  int v97; // r8d
  int v98; // ecx
  unsigned int v99; // ecx
  int v100; // eax
  int v101; // ecx
  unsigned int v102; // eax
  unsigned int v103; // ecx
  int v104; // eax
  int v105; // ecx
  __int64 v106; // rax
  PVOID v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  _QWORD *v111; // rax
  UINT v113; // edx
  __int64 v114; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  _QWORD *v118; // rax
  unsigned __int8 v119; // cl
  _QWORD *v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 (__fastcall **v123)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v127; // [rsp+20h] [rbp-A9h]
  int v129; // [rsp+30h] [rbp-99h]
  void *v130; // [rsp+38h] [rbp-91h] BYREF
  unsigned int Size; // [rsp+40h] [rbp-89h]
  int Size_4; // [rsp+44h] [rbp-85h]
  struct _DXGK_ALLOCATIONINFO *v133; // [rsp+48h] [rbp-81h]
  __int64 v134; // [rsp+50h] [rbp-79h]
  int v135; // [rsp+58h] [rbp-71h]
  int v136; // [rsp+5Ch] [rbp-6Dh]
  DXGDEVICE *v137; // [rsp+60h] [rbp-69h]
  struct DXGALLOCATION *v138; // [rsp+68h] [rbp-61h]
  struct DXGRESOURCE *v139; // [rsp+70h] [rbp-59h]
  int v140; // [rsp+78h] [rbp-51h] BYREF
  __int64 v141; // [rsp+80h] [rbp-49h]
  char v142; // [rsp+88h] [rbp-41h]
  char v143[8]; // [rsp+90h] [rbp-39h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-31h] BYREF

  v12 = this;
  v13 = a6;
  v138 = a5;
  v15 = *((_QWORD *)this + 2);
  v16 = 0LL;
  v136 = 0;
  v137 = this;
  v17 = *(_QWORD *)(v15 + 16);
  v127 = a3;
  v139 = a6;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      v106 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v106 + 24) = 2955LL;
      WdLogEvent5_WdAssertion(v106);
    }
    a3 = v127;
    v16 = 0LL;
  }
  NumAllocations = a2->NumAllocations;
  v21 = 0;
  v130 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    do
    {
      v22 = &a3[v21];
      if ( v22->pPrivateDriverData )
      {
        PrivateDriverDataSize = v22->PrivateDriverDataSize;
        v24 = v21;
        a4[v24].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          a4[v24].pPrivateDriverData = v22->pPrivateDriverData;
        }
        else
        {
          v25 = a7[v21];
          a4[v24].pPrivateDriverData = v25;
          memmove(v25, a8[v21], PrivateDriverDataSize);
        }
        a3 = v127;
      }
      NumAllocations = a2->NumAllocations;
      ++v21;
    }
    while ( v21 < (unsigned int)NumAllocations );
    v12 = v137;
    v16 = 0LL;
    v13 = v139;
  }
  v135 = 0;
  if ( v13 )
  {
    v80 = *((_DWORD *)v13 + 1);
    v81 = *((_QWORD *)v13 + 7);
    v135 = 1;
    if ( (v80 & 1) != 0 )
      v134 = *(_QWORD *)(v81 + 16);
    else
      v134 = v81;
  }
  else
  {
    v134 = 0LL;
  }
  v26 = a2->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  v133 = a4;
  if ( (_DWORD)v26 && a2->pStandardAllocation )
  {
    Size = v26;
    v107 = operator new[](v26, 0x4B677844u, PagedPool);
    v130 = v107;
    if ( !v107 )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v109, v108, v110);
      v59 = -1073741801;
      v111[3] = v12;
      v111[4] = Size;
      v111[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v111);
      goto LABEL_83;
    }
    if ( a11 )
      memmove(v107, Src, Size);
    else
      memmove(v107, a2->pStandardAllocation, Size);
    v16 = 0LL;
  }
  else
  {
    Size = 0;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) )
      {
        v113 = v16;
        if ( a2->NumAllocations )
        {
          do
          {
            v114 = v113++;
            NumAllocations = 88 * v114;
            v133[v114].Flags.Value |= 0x400u;
          }
          while ( v113 < a2->NumAllocations );
        }
      }
    }
  }
  v27 = *((_QWORD *)v12 + 2);
  v140 = -1;
  v141 = v16;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v142 = 1;
    v140 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(NumAllocations, &EventProfilerEnter, (__int64)a3, 5002);
  }
  else
  {
    v142 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v140, 5002LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v32 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v33 = *((_QWORD *)Current + 1)) != 0
    || (v33 = v32) != 0 )
  {
    v32 = v33 + 112;
  }
  v129 = 0;
  if ( v32 && *(struct _KTHREAD **)(v32 + 8) == KeGetCurrentThread() )
  {
    v116 = WdLogNewEntry5_WdAssertion(v31, v30);
    *(_QWORD *)(v116 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v116);
  }
  if ( v33 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v32, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v93 = *(_DWORD *)(v32 + 24);
        if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, &EventBlockThread, v35, v93);
      }
      ExAcquirePushLockExclusiveEx(v32, 0LL);
    }
    *(_QWORD *)(v32 + 8) = KeGetCurrentThread();
    v129 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v27 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 16) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_172;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v117 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v117 + 24) = 496LL;
    WdLogEvent5_WdAssertion(v117);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v37);
  v42 = PsGetCurrentProcess();
  v43 = PsGetProcessDxgProcess(v42);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v43
    && (v44 = *(void **)(v43 + 88)) != 0LL
    && v44 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v89 = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(v89),
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
        goto LABEL_172;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( !ThreadProperty )
  {
LABEL_172:
    v46 = 0;
    goto LABEL_44;
  }
  v46 = *((_DWORD *)ThreadProperty + 8);
LABEL_44:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v143,
    *(struct DXGADAPTER **)(v27 + 16));
  v50 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v27 + 16) + 376LL))(
          *(_QWORD *)(*(_QWORD *)(v27 + 16) + 272LL),
          &v130);
  if ( v143[0] )
    KeUnstackDetachProcess(&ApcState);
  v51 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v51 )
  {
    v118 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v47);
    v118[3] = 275LL;
    v118[4] = 16LL;
    v118[5] = v27;
    v118[6] = CurrentIrql;
    v119 = KeGetCurrentIrql();
    v118[7] = v119;
    WdLogEvent5_WdCriticalError(v118);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v46 )
  {
    v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v47);
    v120[3] = 275LL;
    v120[4] = 38LL;
    v120[5] = *((int *)ThreadProperty + 8);
    v120[6] = v46;
    v120[7] = 0LL;
    WdLogEvent5_WdCriticalError(v120);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 16) + 4324LL));
  v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v47, v48, v49);
  v52[3] = v50;
  v52[4] = v134;
  v52[5] = v133->hAllocation;
  v52[6] = v133->Flags.Value;
  v53 = v133;
  Value = v133->PreferredSegment.Value;
  v52[7] = Value;
  if ( (_DWORD)v50 && (_DWORD)v50 != -1073741811 && (_DWORD)v50 != -1073741801 )
  {
    v121 = WdLogNewEntry5_WdError(v53, Value);
    *(_QWORD *)(v121 + 24) = v50;
    WdLogEvent5_WdError(v121);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v27 + 16));
  if ( v129 == 2 )
  {
    *(_QWORD *)(v32 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v32, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140, v55);
  if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v140);
  v59 = v50;
  if ( (int)v50 < 0 )
    goto LABEL_83;
  v60 = v138;
  v61 = 0LL;
  v62 = v139;
  if ( !a2->NumAllocations )
  {
LABEL_82:
    if ( v62 )
    {
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v82 = v134;
        v83 = *((_QWORD *)v62 + 7);
        v84 = *(_QWORD *)(v83 + 16);
        if ( v84 && v134 && v134 != v84 )
        {
          v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v134, v83);
          v125[3] = 275LL;
          v125[4] = 7LL;
          v125[5] = 0LL;
          v125[6] = 0LL;
          v125[7] = 0LL;
          WdLogEvent5_WdCriticalError(v125);
          v83 = *((_QWORD *)v62 + 7);
          v82 = v134;
        }
        *(_QWORD *)(v83 + 16) = v82;
      }
      else
      {
        v94 = *((_QWORD *)v62 + 7);
        v95 = v134;
        if ( v94 && v134 && v94 != v134 )
        {
          v126 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v56);
          v126[3] = 275LL;
          v126[4] = 7LL;
          v126[5] = 0LL;
          v126[6] = 0LL;
          v126[7] = 0LL;
          WdLogEvent5_WdCriticalError(v126);
          v95 = v134;
        }
        *((_QWORD *)v62 + 7) = v95;
      }
    }
    goto LABEL_83;
  }
  v63 = v137;
  v64 = a10;
  v65 = a4;
  while ( 1 )
  {
    v66 = *((_QWORD *)v60 + 6);
    v137 = (DXGDEVICE *)(unsigned int)v61;
    v67 = &v65[(unsigned int)v61];
    *(_QWORD *)(v66 + 16) = v67->hAllocation;
    *(_QWORD *)(*((_QWORD *)v60 + 6) + 24LL) = v67->pAllocationUsageHint;
    *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 0xFFFFF7FF | ((v67->Flags.Value & 0x30) != 0 ? 0x800 : 0);
    *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^ (v67->Flags.Value << 17)) & 0x80000;
    v67->Flags.Value &= 0x807FFFFu;
    v68 = v67->Flags.Value;
    v69 = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
    if ( (*(_DWORD *)(v69 + 2036) & 0x40) != 0 && *(_BYTE *)(v69 + 2606) )
    {
      v68 |= 0x8000u;
      v67->Flags.Value = v68;
    }
    v70 = v68;
    if ( (v68 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 2607LL) )
    {
      v70 = v68 | 0x10000;
      v67->Flags.Value = v68 | 0x10000;
    }
    if ( v64 )
    {
      if ( (*(_DWORD *)v64 & 0x1000) != 0 )
        v67->Flags.Value = v70 | 0x20000;
      v85 = *((_DWORD *)v64 + 96);
      if ( v85 )
      {
        v67->SupportedWriteSegmentSet = v85;
        v67->PreferredSegment.Value = *((_DWORD *)v64 + 97);
      }
      v86 = *((_DWORD *)v64 + 98);
      if ( v86 )
        v67->Alignment = v86;
      v87 = v138;
      if ( (*(_DWORD *)v64 & 0x2000) != 0 )
        *(_DWORD *)(*((_QWORD *)v138 + 12 * v61 + 6) + 4LL) |= 0x8000u;
      v88 = *((_QWORD *)v64 + 50);
      if ( v88 )
        v67->Size = v88;
      if ( (*(_DWORD *)v64 & 0x8000) != 0 )
        v65[(unsigned int)v61].Flags.Value |= 0x8000u;
      if ( *((_DWORD *)v64 + 4) == 5 )
      {
        *(_DWORD *)(*((_QWORD *)v87 + 12 * v61 + 6) + 4LL) |= 0x10000u;
        v65[(unsigned int)v61].Flags.Value |= 0x8000u;
      }
    }
    Flags = (unsigned int)a2->Flags;
    v72 = *(_DWORD *)&a2->Flags & 0x10000;
    if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 && v67->Size != a12->ExistingHeapData.Size )
    {
      v122 = (_QWORD *)WdLogNewEntry5_WdError(v72, Flags);
      v122[3] = a4[(_QWORD)v137].Size;
      v122[4] = a12->ExistingHeapData.Size;
      goto LABEL_212;
    }
    if ( (_DWORD)v72 && (Flags & 0x20020) != 0 || v64 && (*((_QWORD *)v64 + 42) || *((_QWORD *)v64 + 41)) )
      v67->Flags.Value |= 1u;
    if ( *((_DWORD *)v63 + 108) == 2
      && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v63 + 2) + 16LL)) > 1
      && !DXGADAPTER::ReplicateGdiContent(v92)
      && (v127[v61].Flags.Value & 1) == 0 )
    {
      a4[(unsigned int)v61].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 2700LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v63 + 2) + 16LL)) )
      *((_DWORD *)v60 + 18) ^= (*((_DWORD *)v60 + 18) ^ (v67->MaximumRenamingListLength << 12)) & 0x3F000;
    else
      *((_DWORD *)v60 + 18) &= 0xFFFC0FFF;
    v75 = v67->Flags.Value;
    if ( (v75 & 0x200) != 0
      && (v123 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v63 + 2) + 16LL),
          v123[74] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
      || (v75 & 0x100) != 0
      && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v63 + 2) + 16LL))
       || v123[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v123[84] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v123[83] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v123[82] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
    {
      v124 = (_QWORD *)WdLogNewEntry5_WdError(v123, v75);
      v124[3] = v63;
      v124[4] = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
      v124[5] = -1073741637LL;
      WdLogEvent5_WdError(v124);
      v59 = -1073741637;
      goto LABEL_83;
    }
    v76 = *((_QWORD *)v60 + 6);
    if ( !*(_QWORD *)(v76 + 16) )
      break;
    v56 = 96 * v74;
    v77 = *(_DWORD *)(96 * v74 + v73 + 32);
    if ( (v77 & 2) != 0 )
    {
      *(_DWORD *)(v76 + 4) |= 0x1000u;
      v77 = *(_DWORD *)(v56 + v73 + 32);
    }
    if ( (v77 & 1) == 0 || (v67->Flags.Value & 0x100) != 0 )
    {
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        v67->Flags.Value |= 0x20000000u;
      if ( *((_DWORD *)v63 + 108) == 2
        && *((_QWORD *)v63 + 231) != *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL)
        && v64
        && *((_QWORD *)v64 + 4)
        && *((_QWORD *)v64 + 5)
        && *((_DWORD *)v64 + 4) == 2
        && (*(_DWORD *)&a2->Flags & 0x22) == 2 )
      {
        *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 2u;
        *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 4u;
        v65[v74].Flags.Value = v65[v74].Flags.Value & 0x3DBFFFFF | 0x2400000;
      }
      goto LABEL_76;
    }
    v96 = a2->Flags;
    v97 = *(_DWORD *)(v56 + v73 + 28);
    if ( (*(_BYTE *)&v96 & 2) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 1u;
      if ( *((_DWORD *)v63 + 108) == 1 )
        v103 = 0x80000000;
      else
        v103 = 0;
      v104 = v103 | v67->Flags.Value & 0x7FFFFFFF;
      v67->Flags.Value = v104;
      if ( *((_DWORD *)v63 + 108) )
        v105 = 0;
      else
        v105 = 0x40000000;
      v102 = v105 | v104 & 0xBFFFFFFF;
LABEL_142:
      v67->Flags.Value = v102;
      goto LABEL_143;
    }
    v98 = *((_DWORD *)v63 + 108);
    if ( v98 != 2 )
    {
      if ( (*(_WORD *)&v96 & 0x800) != 0 )
      {
        if ( (*(_WORD *)&v96 & 0x400) != 0 )
        {
          if ( v98 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 2507LL) )
            v56 = 0x2000LL;
          else
            v56 = 0LL;
          *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) = v56 | *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 0xFFFFDFFF;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 1u;
          v67->Flags.Value |= 0x80000u;
        }
      }
      else if ( v98 == 1 )
      {
        if ( (*(_WORD *)&v96 & 0x400) != 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 2507LL) )
            *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 0x2000u;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 1u;
        }
      }
      if ( *((_DWORD *)v63 + 108) == 1 )
        v99 = 0x80000000;
      else
        v99 = 0;
      v100 = v99 | v67->Flags.Value & 0x7FFFFFFF;
      v67->Flags.Value = v100;
      if ( *((_DWORD *)v63 + 108) )
        v101 = 0;
      else
        v101 = 0x40000000;
      v102 = v101 | v100 & 0xBFFFFFFF | 0x20000000;
      goto LABEL_142;
    }
    *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 2u;
    v67->Flags.Value |= 0x40000000u;
LABEL_143:
    if ( *((_QWORD *)v63 + 231) != *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) )
    {
      *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 4u;
      v56 = v67->Flags.Value & 0x3DFFFFFF;
      LODWORD(v56) = v56 | 0x2000000;
      v67->Flags.Value = v56;
      if ( (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 2) != 0 )
      {
        v56 = (unsigned int)v56 | 0x20400000;
        v67->Flags.Value = v56;
      }
    }
    *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^ (v97 << 6)) & 0x3C0;
LABEL_76:
    if ( v62 && (*((_DWORD *)v62 + 1) & 8) != 0 )
      v67->Flags.Value |= 0x88000u;
    v78 = a2->Flags;
    if ( (*(_WORD *)&v78 & 0x1800) != 0 )
    {
      v67->Flags.Value |= 0x20100000u;
      v78 = a2->Flags;
    }
    if ( (*(_WORD *)&v78 & 0x400) != 0 )
      v65[v74].Flags.Value |= 0x200000u;
    v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
    v61 = (unsigned int)(v61 + 1);
    if ( (unsigned int)v61 >= a2->NumAllocations )
      goto LABEL_82;
  }
  v122 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
  v122[3] = v63;
  v122[4] = v60;
LABEL_212:
  v122[5] = -1073741811LL;
  WdLogEvent5_WdError(v122);
  v59 = -1073741811;
LABEL_83:
  operator delete[](v130);
  return v59;
}
