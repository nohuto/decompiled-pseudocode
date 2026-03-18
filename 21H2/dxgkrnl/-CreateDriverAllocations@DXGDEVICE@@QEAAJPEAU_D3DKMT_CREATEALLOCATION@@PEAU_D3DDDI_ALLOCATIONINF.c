/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0173080
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01D0438 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *PrivateDriverDataSize,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  __int64 v12; // rdi
  DXGDEVICE *v13; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 NumAllocations; // rcx
  unsigned int v18; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v19; // rcx
  __int64 v20; // r8
  void *v21; // rcx
  struct DXGRESOURCE *v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  const struct _D3DKM_CREATESTANDARDALLOCATION *v25; // r10
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v33; // rbx
  __int64 v34; // r15
  int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r8
  KIRQL CurrentIrql; // al
  __int64 v39; // r12
  struct DXGTHREAD *v40; // rbx
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // esi
  struct DXGALLOCATION *v48; // r12
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rcx
  int v52; // r9d
  __int64 v53; // r8
  int v54; // edx
  int v55; // r8d
  struct _DXGK_ALLOCATIONINFO *v56; // r12
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 (__fastcall **v60)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v61; // eax
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v67; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v68; // eax
  unsigned int v69; // r12d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  DXGADAPTER *v79; // rcx
  int v80; // r9d
  D3DKMT_CREATEALLOCATIONFLAGS v81; // eax
  int v82; // r8d
  int v83; // ecx
  unsigned int v84; // ecx
  int v85; // eax
  int v86; // ecx
  unsigned int v87; // eax
  void *v88; // rax
  UINT i; // edx
  __int64 v91; // rax
  struct DXGTHREAD *Current; // rax
  KIRQL v93; // al
  __int64 v94; // rdx
  _DWORD *v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rdx
  SIZE_T v99; // r8
  const wchar_t *v100; // r9
  __int64 (__fastcall **v101)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  unsigned int v102; // ecx
  int v103; // ecx
  int v104; // eax
  int v105; // edx
  int v106; // edx
  struct _DXGK_ALLOCATIONINFO *v107; // [rsp+50h] [rbp-B0h]
  struct _D3DDDI_ALLOCATIONINFO2 *v108; // [rsp+58h] [rbp-A8h]
  int v109; // [rsp+68h] [rbp-98h]
  unsigned int v110; // [rsp+70h] [rbp-90h]
  void *v111; // [rsp+78h] [rbp-88h] BYREF
  unsigned int Size; // [rsp+80h] [rbp-80h]
  int Size_4; // [rsp+84h] [rbp-7Ch]
  struct _DXGK_ALLOCATIONINFO *v114; // [rsp+88h] [rbp-78h]
  __int64 v115; // [rsp+90h] [rbp-70h]
  int v116; // [rsp+98h] [rbp-68h]
  int v117; // [rsp+9Ch] [rbp-64h]
  struct DXGTHREAD *DxgThread; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGALLOCATION *v119; // [rsp+A8h] [rbp-58h]
  DXGDEVICE *v120; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v121; // [rsp+B8h] [rbp-48h]
  int v122; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v123; // [rsp+C8h] [rbp-38h]
  char v124; // [rsp+D0h] [rbp-30h]
  char v125[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = this;
  v119 = a5;
  v117 = 0;
  v121 = a12;
  v15 = *((_QWORD *)this + 2);
  v120 = this;
  v107 = PrivateDriverDataSize;
  v108 = a3;
  v16 = *(_QWORD *)(v15 + 16);
  v110 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
    {
      WdLogSingleEntry1(1LL, 3036LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        3036LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a3 = v108;
  }
  NumAllocations = a2->NumAllocations;
  v18 = 0;
  v111 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    do
    {
      v19 = &a3[v18];
      if ( v19->pPrivateDriverData )
      {
        PrivateDriverDataSize = (struct _DXGK_ALLOCATIONINFO *)v19->PrivateDriverDataSize;
        v20 = v18;
        v107[v20].PrivateDriverDataSize = (unsigned int)PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v107[v20].pPrivateDriverData = v19->pPrivateDriverData;
        }
        else
        {
          v21 = a7[v18];
          v107[v20].pPrivateDriverData = v21;
          memmove(v21, a8[v18], (unsigned int)PrivateDriverDataSize);
        }
        a3 = v108;
      }
      NumAllocations = a2->NumAllocations;
      ++v18;
    }
    while ( v18 < (unsigned int)NumAllocations );
    v13 = v120;
    v12 = 0LL;
  }
  v22 = a6;
  v116 = 0;
  if ( a6 )
  {
    v71 = *((_DWORD *)a6 + 1);
    v72 = *((_QWORD *)a6 + 7);
    v116 = 1;
    if ( (v71 & 1) != 0 )
      v115 = *(_QWORD *)(v72 + 16);
    else
      v115 = v72;
  }
  else
  {
    v115 = 0LL;
  }
  v23 = a2->PrivateDriverDataSize;
  v24 = (__int64)v107;
  Size_4 = NumAllocations;
  v114 = v107;
  if ( (_DWORD)v23 && a2->pStandardAllocation )
  {
    Size = v23;
    v88 = (void *)operator new[](v23, 0x4B677844u, 258LL, (__int64)PrivateDriverDataSize);
    v111 = v88;
    if ( !v88 )
    {
      v69 = -1073741801;
      WdLogSingleEntry3(3LL, v13, Size, -1073741801LL);
      goto LABEL_82;
    }
    if ( a11 )
      memmove(v88, Src, Size);
    else
      memmove(v88, a2->pStandardAllocation, Size);
    v22 = a6;
    v24 = (__int64)v107;
  }
  else
  {
    Size = 0;
  }
  v25 = a10;
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
      {
        for ( i = 0; i < a2->NumAllocations; v114[v91].Flags.Value |= 0x400u )
        {
          v91 = i++;
          NumAllocations = 88 * v91;
        }
      }
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
  {
    v26 = *((_QWORD *)v13 + 2);
    v122 = -1;
    v123 = 0LL;
    if ( (qword_1C012F870 & 2) != 0 )
    {
      v124 = 1;
      v122 = 5002;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(NumAllocations, &EventProfilerEnter, v24, 5002);
    }
    else
    {
      v124 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v122, 5002);
    CurrentProcess = PsGetCurrentProcess(v28, v27, v29, v30);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v33 = ProcessDxgProcess;
    if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
      && (Current = DXGTHREAD::GetCurrent()) != 0LL
      && (v34 = *((_QWORD *)Current + 3)) != 0
      || (v34 = v33) != 0 )
    {
      v12 = v34 + 152;
      if ( v34 != -152 && *(struct _KTHREAD **)(v34 + 160) == KeGetCurrentThread() )
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
      v35 = 0;
      if ( v34 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 152, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v80 = *(_DWORD *)(v34 + 176);
            if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v80);
          }
          ExAcquirePushLockExclusiveEx(v34 + 152, 0LL);
        }
        v35 = 2;
        *(_QWORD *)(v34 + 160) = KeGetCurrentThread();
      }
    }
    else
    {
      v35 = 0;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v26 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 16) + 4484LL));
    CurrentIrql = KeGetCurrentIrql();
    v39 = CurrentIrql;
    v40 = 0LL;
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v40 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v40 = DxgThread) != 0LL)) )
    {
      v109 = *((_DWORD *)v40 + 12);
    }
    else
    {
      v109 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v125,
      *(struct DXGADAPTER **)(v26 + 16));
    v41 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v26 + 16) + 464LL))(
            *(_QWORD *)(*(_QWORD *)(v26 + 16) + 280LL),
            &v111);
    if ( v125[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v39 != KeGetCurrentIrql() )
    {
      v93 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v26, v39, v93);
    }
    if ( v40 )
    {
      v43 = *((int *)v40 + 12);
      if ( (_DWORD)v43 != v109 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v40 + 12), v109, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 16) + 4484LL));
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42);
    v44[3] = v41;
    v44[4] = v115;
    v44[5] = v114->hAllocation;
    v44[6] = v114->Flags.Value;
    v44[7] = v114->PreferredSegment.Value;
    if ( (_DWORD)v41 && (_DWORD)v41 != -1073741811 && (_DWORD)v41 != -1073741801 )
    {
      WdLogSingleEntry1(2LL, v41);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v41,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v26 + 16));
    if ( v35 == 2 )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
    if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v122);
    v110 = v41;
    if ( (int)v41 < 0 )
      goto LABEL_81;
    v13 = v120;
    v25 = a10;
    v22 = a6;
    v24 = (__int64)v107;
  }
  v47 = 0;
  v48 = v119;
  v49 = (__int64)v119;
  if ( !a2->NumAllocations )
  {
LABEL_80:
    if ( v22 )
    {
      v73 = *((_QWORD *)v22 + 7);
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v74 = *(_QWORD *)(v73 + 16);
        v75 = *((_QWORD *)v22 + 7);
        if ( v74 && v115 && v115 != v74 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          v75 = *((_QWORD *)a6 + 7);
        }
        *(_QWORD *)(v75 + 16) = v115;
      }
      else
      {
        if ( v73 && v115 && v73 != v115 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          v22 = a6;
        }
        *((_QWORD *)v22 + 7) = v115;
      }
    }
LABEL_81:
    v69 = v110;
    goto LABEL_82;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    {
      v94 = v24 + 88LL * v47;
      if ( *(_DWORD *)(v94 + 8) < 0x40u )
      {
        WdLogSingleEntry1(2LL, 3164LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid private driver data size for NoKmdAccess",
          3164LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_219;
      }
      if ( (v108[v47].Flags.Value & 1) != 0 )
      {
        WdLogSingleEntry1(2LL, 3170LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Primary cannot be used with NoKmdAccess",
          3170LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_219;
      }
      *(_DWORD *)(v49 + 72) |= 0x200000u;
      *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 0x10000000u;
      v95 = *(_DWORD **)v94;
      *(_DWORD *)(v94 + 12) = **(_DWORD **)v94;
      *(_QWORD *)(v94 + 16) = *((_QWORD *)v95 + 1);
      *(_QWORD *)(v94 + 24) = *((_QWORD *)v95 + 2);
      *(_DWORD *)(v94 + 32) = v95[6];
      *(_DWORD *)(v94 + 36) = v95[7];
      *(_DWORD *)(v94 + 40) = v95[8];
      *(_DWORD *)(v94 + 44) = v95[9];
      *(_DWORD *)(v94 + 48) = v95[10];
      *(_DWORD *)(v94 + 52) = v95[11];
      *(_DWORD *)(v94 + 64) = v95[12];
      *(_DWORD *)(v94 + 80) = v95[13];
      *(_DWORD *)(v94 + 84) = v95[14];
    }
    v50 = v24 + 88LL * v47;
    *(_QWORD *)(*(_QWORD *)(v49 + 48) + 16LL) = *(_QWORD *)(v50 + 56);
    *(_QWORD *)(*(_QWORD *)(v49 + 48) + 24LL) = *(_QWORD *)(v50 + 72);
    *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) = *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) & 0xFFFFF7FF | ((*(_DWORD *)(v50 + 64) & 0x30) != 0 ? 0x800 : 0);
    *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) ^ (*(_DWORD *)(v50 + 64) << 17)) & 0x80000;
    *(_DWORD *)(v50 + 64) &= 0x807FFFFu;
    v51 = *((_QWORD *)v13 + 2);
    v52 = *(_DWORD *)(v50 + 64);
    if ( *(int *)(*(_QWORD *)(v51 + 16) + 2424LL) >= 12288 )
    {
      if ( *(_DWORD *)(v50 + 84) >= 2u )
      {
        WdLogSingleEntry1(2LL, 3225LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Flags2.Reserved is not zero",
          3225LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_219;
      }
    }
    else if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      *(_DWORD *)(v50 + 84) = 0;
      v51 = *((_QWORD *)v13 + 2);
    }
    v53 = *(_QWORD *)(v51 + 16);
    v54 = v52;
    if ( (*(_DWORD *)(v53 + 2156) & 0x40) != 0 && *(_BYTE *)(v53 + 2726) )
    {
      v54 = v52 | 0x8000;
      *(_DWORD *)(v50 + 64) = v52 | 0x8000;
    }
    v55 = v54;
    if ( (v54 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2727LL) )
    {
      v55 = v54 | 0x10000;
      *(_DWORD *)(v50 + 64) = v54 | 0x10000;
    }
    if ( v25 )
    {
      if ( (*(_DWORD *)v25 & 0x1000) != 0 )
        *(_DWORD *)(v50 + 64) = v55 | 0x20000;
      v76 = *((_DWORD *)v25 + 96);
      if ( v76 )
      {
        *(_DWORD *)(v50 + 44) = v76;
        *(_DWORD *)(v50 + 36) = *((_DWORD *)v25 + 97);
      }
      v77 = *((_DWORD *)v25 + 98);
      if ( v77 )
        *(_DWORD *)(v50 + 12) = v77;
      if ( (*(_DWORD *)v25 & 0x2000) != 0 )
      {
        v96 = *((_QWORD *)v48 + 12 * v47 + 6);
        *(_DWORD *)(v96 + 4) |= 0x8000u;
      }
      v78 = *((_QWORD *)v25 + 50);
      if ( v78 )
        *(_QWORD *)(v50 + 16) = v78;
      v56 = v107;
      if ( (*(_DWORD *)v25 & 0x8000) != 0 )
        v107[v47].Flags.Value |= 0x8000u;
      if ( *((_DWORD *)v25 + 4) == 5 )
      {
        v97 = *((_QWORD *)v119 + 12 * v47 + 6);
        *(_DWORD *)(v97 + 4) |= 0x10000u;
        v107[v47].Flags.Value |= 0x8000u;
      }
    }
    else
    {
      v56 = v107;
    }
    Flags = a2->Flags;
    if ( (*(_DWORD *)&Flags & 0x10000) == 0 )
      goto LABEL_59;
    v98 = *(_QWORD *)(v50 + 16);
    v99 = v121->ExistingHeapData.Size;
    if ( v98 != v99 )
      break;
    if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
      goto LABEL_176;
LABEL_59:
    if ( v25 && (*((_QWORD *)v25 + 42) || *((_QWORD *)v25 + 41)) )
LABEL_176:
      *(_DWORD *)(v50 + 64) |= 1u;
    if ( *((_DWORD *)v13 + 108) == 2
      && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) > 1
      && !DXGADAPTER::ReplicateGdiContent(v79)
      && (v108[v47].Flags.Value & 1) == 0 )
    {
      v107[v47].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2820LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
    {
      v58 = *(_QWORD *)(v49 + 48);
      *(_DWORD *)(v49 + 72) ^= (*(_DWORD *)(v49 + 72) ^ (*(_DWORD *)(v50 + 52) << 12)) & 0x3F000;
      *(_DWORD *)(v58 + 4) ^= (*(_DWORD *)(v58 + 4) ^ (*(_DWORD *)(v50 + 52) << 21)) & 0x7E00000;
    }
    else
    {
      *(_DWORD *)(v49 + 72) &= 0xFFFC0FFF;
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
    {
      v61 = a2->Flags;
      if ( (*(_DWORD *)&v61 & 0x80000) != 0 && (*(_WORD *)&v61 & 0x800) == 0 )
      {
        WdLogSingleEntry3(2LL, v13, v60, -1073741637LL);
        v100 = L"Device 0x%I64x: Driver tried to create non-cross adapter physically contiguous buffer, adapter 0x%I64x, r"
                "eturning 0x%I64x";
LABEL_190:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v100,
          (__int64)v13,
          *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL),
          -1073741637LL,
          0LL,
          0LL);
        v69 = -1073741637;
        goto LABEL_82;
      }
    }
    v62 = v24 + 88LL * v47;
    v63 = *(_DWORD *)(v62 + 64);
    if ( (v63 & 0x200) != 0 && v60[85] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      WdLogSingleEntry3(2LL, v13, v60, -1073741637LL);
      v100 = L"Device 0x%I64x: Driver tried to create capture buffer but didn't supply StopCapture, adapter 0x%I64x, returning 0x%I64x";
      goto LABEL_190;
    }
    if ( (v63 & 0x100) != 0
      && (!DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v60)
       || v101[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
    {
      WdLogSingleEntry3(2LL, v13, v101, -1073741637LL);
      v100 = L"Device 0x%I64x: Driver tried to create overlay but didn't supply Overlay DDI, adapter 0x%I64x, returning 0x%I64x";
      goto LABEL_190;
    }
    v64 = *(_QWORD *)(v49 + 48);
    if ( !*(_QWORD *)(v64 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry3(2LL, v13, v49, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Driver did not return an allocation handle for 0x%I64x, returning 0x%I64x",
        (__int64)v13,
        v49,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_219;
    }
    v65 = 96LL * v47 + v59;
    v66 = *(_DWORD *)(v65 + 32);
    if ( (v66 & 2) != 0 )
    {
      *(_DWORD *)(v64 + 4) |= 0x1000u;
      v66 = *(_DWORD *)(v65 + 32);
    }
    if ( (v66 & 1) != 0 && (*(_DWORD *)(v62 + 64) & 0x100) == 0 )
    {
      v81 = a2->Flags;
      v82 = *(_DWORD *)(v65 + 28);
      if ( (*(_BYTE *)&v81 & 2) != 0 )
      {
        v83 = *((_DWORD *)v13 + 108);
        if ( v83 != 2 )
        {
          if ( (*(_WORD *)&v81 & 0x800) != 0 )
          {
            if ( (*(_WORD *)&v81 & 0x400) != 0 )
            {
              if ( v83 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2627LL) )
                v105 = 0x2000;
              else
                v105 = 0;
              *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) = v105 | *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) & 0xFFFFDFFF;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 1u;
              *(_DWORD *)(v62 + 64) |= 0x80000u;
            }
          }
          else if ( v83 == 1 )
          {
            if ( (*(_WORD *)&v81 & 0x400) != 0 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2627LL) )
                *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 0x2000u;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 1u;
            }
          }
          if ( *((_DWORD *)v13 + 108) == 1 )
            v84 = 0x80000000;
          else
            v84 = 0;
          v85 = v84 | *(_DWORD *)(v62 + 64) & 0x7FFFFFFF;
          *(_DWORD *)(v62 + 64) = v85;
          if ( *((_DWORD *)v13 + 108) )
            v86 = 0;
          else
            v86 = 0x40000000;
          v87 = v86 | v85 & 0xBFFFFFFF | 0x20000000;
          goto LABEL_137;
        }
        *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 2u;
        *(_DWORD *)(v62 + 64) |= 0x40000000u;
      }
      else
      {
        v102 = 0;
        *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 1u;
        if ( *((_DWORD *)v13 + 108) == 1 )
          v102 = 0x80000000;
        v103 = *(_DWORD *)(v62 + 64) & 0x7FFFFFFF | v102;
        v104 = 0;
        *(_DWORD *)(v62 + 64) = v103;
        if ( !*((_DWORD *)v13 + 108) )
          v104 = 0x40000000;
        v87 = v103 & 0xBFFFFFFF | v104;
LABEL_137:
        *(_DWORD *)(v62 + 64) = v87;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 5) + 424LL) & 0x100) == 0
        && *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 4u;
        v106 = *(_DWORD *)(v62 + 64) & 0x3DFFFFFF | 0x2000000;
        *(_DWORD *)(v62 + 64) = v106;
        if ( (*(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) & 2) != 0 )
          *(_DWORD *)(v62 + 64) = v106 | 0x20400000;
      }
      *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) ^ (v82 << 6)) & 0x3C0;
      v24 = (__int64)v107;
      goto LABEL_74;
    }
    v67 = a2->Flags;
    if ( (*(_BYTE *)&v67 & 2) != 0 )
    {
      *(_DWORD *)(v62 + 64) |= 0x20000000u;
      v67 = a2->Flags;
    }
    if ( *((_DWORD *)v13 + 108) == 2
      && *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL)
      && (*(_DWORD *)(*((_QWORD *)v13 + 5) + 424LL) & 0x100) == 0
      && v25
      && *((_QWORD *)v25 + 4)
      && *((_QWORD *)v25 + 5)
      && *((_DWORD *)v25 + 4) == 2
      && (*(_BYTE *)&v67 & 0x22) == 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 2u;
      *(_DWORD *)(*(_QWORD *)(v49 + 48) + 4LL) |= 4u;
      *(_DWORD *)(88LL * v47 + v24 + 64) = *(_DWORD *)(88LL * v47 + v24 + 64) & 0x3DBFFFFF | 0x2400000;
    }
LABEL_74:
    if ( v22 && (*((_DWORD *)v22 + 1) & 8) != 0 )
      *(_DWORD *)(v62 + 64) |= 0x88000u;
    v68 = a2->Flags;
    if ( (*(_WORD *)&v68 & 0x1800) != 0 )
    {
      *(_DWORD *)(v62 + 64) |= 0x20100000u;
      v68 = a2->Flags;
    }
    if ( (*(_WORD *)&v68 & 0x400) != 0 )
      *(_DWORD *)(88LL * v47 + v24 + 64) |= 0x200000u;
    v49 = *(_QWORD *)(v49 + 64);
    if ( ++v47 >= a2->NumAllocations )
      goto LABEL_80;
    v48 = v119;
  }
  WdLogSingleEntry3(2LL, v98, v99, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Mismatch between Driver returned allocation size:0x%I64x and ExistingSysMem                     buffer size"
              ":0xI64x, returning 0x%I64x",
    v56[v47].Size,
    v121->ExistingHeapData.Size,
    -1073741811LL,
    0LL,
    0LL);
LABEL_219:
  v69 = -1073741811;
LABEL_82:
  operator delete[](v111);
  return v69;
}
