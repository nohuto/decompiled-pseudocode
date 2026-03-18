/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0015380 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C003EF64 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     GreCreateBitmap @ 0x1C0099480 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C003FF60 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C004F3B4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0086970 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0086A48 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008A640 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C012B048 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0142EE0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0150D0C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0151198 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this, int a2, int a3)
{
  int *v3; // rbx
  __int16 v5; // r13
  GdiHandleManager *v6; // r12
  struct _ERESOURCE *v7; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PEPROCESS v12; // r8
  GdiHandleManager *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int16 *v19; // r15
  __int64 v20; // r13
  _QWORD *v21; // rax
  unsigned int v22; // ecx
  char v23; // al
  unsigned int v24; // ebx
  GdiHandleManager *v25; // r10
  __int64 v26; // rsi
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // r13
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  char v42; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v43; // rdx
  int v44; // ebx
  signed int v45; // r13d
  __int64 v46; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v48; // edx
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rsi
  struct _ERESOURCE *v52; // r12
  __int64 v53; // rcx
  unsigned int v54; // esi
  unsigned int v55; // ebx
  GdiHandleManager *v56; // rsi
  __int64 v57; // rdx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // r9
  _DWORD *v61; // r12
  int v62; // eax
  unsigned int v63; // ebx
  __int64 v64; // r8
  __int64 v65; // r15
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // r10
  __int64 v70; // r11
  __int64 v71; // rdx
  int v72; // ecx
  int v73; // r8d
  int *v74; // rax
  __int64 v75; // rcx
  void *v76; // rsi
  void *v77; // r15
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  struct _SLIST_ENTRY *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdi
  int v85; // eax
  unsigned int v86; // edx
  _DWORD *v87; // rdi
  char v88; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v89; // rdx
  GdiHandleManager *v90; // rbx
  unsigned int v91; // eax
  __int64 v92; // r9
  unsigned __int64 v93; // rdx
  unsigned int v94; // r8d
  __int64 v95; // rcx
  __int64 v96; // r9
  _DWORD *v97; // rdx
  unsigned int v98; // eax
  __int64 v99; // r10
  unsigned int v100; // edx
  unsigned int v101; // r8d
  __int64 v102; // rcx
  __int64 v103; // r10
  __int64 v104; // rcx
  int v105; // ecx
  int v106; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v109; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v112; // rbx
  unsigned int v113; // eax
  __int64 v114; // r9
  unsigned __int64 v115; // rdx
  unsigned int v116; // r8d
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // rdx
  __int64 v120; // rdx
  int v121; // ecx
  int v122; // r8d
  struct _ENTRY *v123; // rax
  struct _ENTRY *v124; // rax
  char EtwGdiHandleType; // al
  _QWORD *v126; // r9
  int v127; // ecx
  int v128; // r8d
  unsigned int v129; // r13d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 ThreadWin32Thread; // r15
  PVOID v133; // r12
  int v134; // r13d
  PVOID v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rax
  struct _ERESOURCE *v138; // rbx
  _QWORD *v139; // rbx
  _QWORD *v140; // rax
  _QWORD *v141; // rcx
  _QWORD *v142; // rdx
  __int64 v143; // rdx
  int v144; // r8d
  __int64 v145; // rcx
  unsigned __int64 v146; // [rsp+40h] [rbp-C0h] BYREF
  GdiHandleManager *v147; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v148; // [rsp+50h] [rbp-B0h] BYREF
  int v149; // [rsp+58h] [rbp-A8h]
  int v150; // [rsp+5Ch] [rbp-A4h]
  PERESOURCE v151; // [rsp+68h] [rbp-98h] BYREF
  __int64 v152; // [rsp+70h] [rbp-90h] BYREF
  int v153; // [rsp+78h] [rbp-88h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h]
  __int128 v155; // [rsp+98h] [rbp-68h]
  _OWORD v156[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v157; // [rsp+130h] [rbp+30h]
  __int64 v158; // [rsp+130h] [rbp+30h]
  PEPROCESS Process; // [rsp+138h] [rbp+38h] BYREF
  PEPROCESS v160; // [rsp+140h] [rbp+40h] BYREF
  __int64 v161; // [rsp+148h] [rbp+48h] BYREF

  v3 = *(int **)this;
  if ( !*(_QWORD *)this )
    return;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v5 = 0;
    v157 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      v5 = 1;
      v157 = 1;
    }
    v6 = *(GdiHandleManager **)v3;
    v7 = ghsemHmgr;
    v147 = v6;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(this);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    v161 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v161);
    if ( (!(unsigned __int8)KeIsAttachedProcess(v9)
       || (CurrentProcess = PsGetCurrentProcess(v11, v10),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(v109),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v12 = *(PEPROCESS *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = gpHandleManager;
    v14 = (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000;
    Process = v12;
    v149 = 1;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v6,
                  1);
        v12 = Process;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v14) )
          v14 = (unsigned __int16)v6;
      }
      else
      {
        v14 = (unsigned __int16)v6;
      }
    }
    v15 = *((_QWORD *)v13 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      goto LABEL_246;
    v17 = ((v14 - v16) >> 16) + 1;
    if ( v14 < v16 )
      v17 = 0LL;
    v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v14 += ((1 - (_DWORD)v17) << 16) - v16;
    v19 = 0LL;
    if ( v14 < *(_DWORD *)(v18 + 20) )
    {
      v20 = 16LL * (unsigned __int8)v14;
      v21 = *(_QWORD **)(v18 + 24);
      v146 = 8 * ((unsigned __int64)v14 >> 8);
      v160 = (PEPROCESS)(v20 + *(_QWORD *)(*v21 + v146));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v160, 0LL);
      if ( v14 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + v146) + v20 + 8) )
      {
        *(_DWORD *)(24LL * v14 + *(_QWORD *)v18 + 8) |= 1u;
        v19 = (unsigned __int16 *)(24LL * v14 + *(_QWORD *)v18);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v160, 0LL);
        KeLeaveCriticalRegion();
      }
      WORD1(v6) = WORD1(v147);
      v12 = Process;
      v5 = v157;
    }
    v148 = v19;
    if ( v19 )
    {
      _m_prefetchw(v19 + 4);
      v150 = *((_DWORD *)v19 + 2);
      v22 = v150 & 0xFFFFFFFE;
      if ( (v150 & 0xFFFFFFFE) == (v161 & 0xFFFFFFFC) || !v22 || v12 && v22 == *((_DWORD *)v12 + 2) )
      {
        v23 = *((_BYTE *)v19 + 15);
        if ( (v23 & 0x20) == 0 )
        {
          if ( (v23 & 0x40) == 0 )
          {
LABEL_29:
            v24 = *(_DWORD *)v19 & 0xFFFFFF;
            if ( v24 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v19,
                                            1)
                     + 13) == HIWORD(v24) )
                  v24 = (unsigned __int16)v24;
              }
              else
              {
                v24 = *v19;
              }
            }
            v25 = gpHandleManager;
            v147 = gpHandleManager;
            v26 = *((_QWORD *)gpHandleManager + 2);
            v27 = *(_DWORD *)(v26 + 2056);
            if ( v24 >= v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
              goto LABEL_185;
            v28 = ((v24 - v27) >> 16) + 1;
            if ( v24 < v27 )
              v28 = 0LL;
            v29 = *(_QWORD *)(v26 + 8 * v28 + 8);
            if ( (_DWORD)v28 )
              v24 += ((1 - (_DWORD)v28) << 16) - v27;
            if ( v24 >= *(_DWORD *)(v29 + 20) )
LABEL_185:
              v30 = 0LL;
            else
              v30 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                              + 16LL * (unsigned __int8)v24
                              + 8);
            v158 = v30;
            if ( *((_BYTE *)v19 + 14) == 5 && v19[6] == WORD1(v6) )
            {
              if ( *(_WORD *)(v30 + 12) == v5 && *(_DWORD *)(v30 + 8) == 1 )
              {
                v31 = (unsigned __int16)*(_DWORD *)v30;
                v32 = v31 | (*(_DWORD *)v30 >> 8) & 0xFF0000;
                if ( v32 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v123 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v26, (unsigned __int16)v31, 1);
                    v30 = v158;
                    v25 = v147;
                    if ( *((unsigned __int8 *)v123 + 13) == HIWORD(v32) )
                      v32 = (unsigned __int16)v32;
                  }
                  else
                  {
                    v32 = (unsigned __int16)v31;
                  }
                }
                v33 = *(_DWORD *)(v26 + 2056);
                if ( v32 >= v33 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
                {
                  v37 = 0LL;
                }
                else
                {
                  v34 = ((v32 - v33) >> 16) + 1;
                  if ( v32 < v33 )
                    v34 = 0LL;
                  v35 = *(_QWORD *)(v26 + 8 * v34 + 8);
                  if ( (_DWORD)v34 )
                    v36 = v32 + ((1 - (_DWORD)v34) << 16) - v33;
                  else
                    v36 = v32;
                  v37 = 0LL;
                  if ( v36 < *(_DWORD *)(v35 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                                 + 16LL * (unsigned __int8)v36
                                 + 8) )
                  {
                    v37 = *(_QWORD *)v35 + 24LL * v36;
                  }
                  v30 = v158;
                }
                if ( v32 >= 0x10000 )
                {
                  if ( *(_DWORD *)v25 > 0x10000u )
                  {
                    v124 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v26, (unsigned __int16)v32, 1);
                    v30 = v158;
                    if ( *((unsigned __int8 *)v124 + 13) == HIWORD(v32) )
                      v32 = (unsigned __int16)v32;
                  }
                  else
                  {
                    v32 = (unsigned __int16)v32;
                  }
                }
                v38 = *(_DWORD *)(v26 + 2056);
                if ( v32 >= v38 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
                  goto LABEL_196;
                v39 = ((v32 - v38) >> 16) + 1;
                if ( v32 < v38 )
                  v39 = 0LL;
                v40 = *(_QWORD *)(v26 + 8 * v39 + 8);
                if ( (_DWORD)v39 )
                  v32 += ((1 - (_DWORD)v39) << 16) - v38;
                if ( v32 >= *(_DWORD *)(v40 + 20) )
LABEL_196:
                  v41 = 0LL;
                else
                  v41 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v32 >> 8))
                                  + 16LL * (unsigned __int8)v32
                                  + 8);
                if ( v41 != v30 )
                  v37 = 0LL;
                v42 = *(_BYTE *)(v37 + 14);
                if ( v42 == 5 )
                {
                  v43 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v30 + 680);
                  if ( v43 && qword_1C02473D8 )
                    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                      qword_1C02473D8,
                      v43,
                      0);
                }
                else if ( v42 == 16 )
                {
                  TrackObjectReferenceDecrement(
                    2u,
                    *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v30 + 136));
                }
                v44 = *((_DWORD *)v19 + 2);
                v45 = v44 & 0xFFFFFFFE;
                if ( (v44 & 0xFFFFFFFE) == 0 || v45 == -2147483630 )
                  goto LABEL_80;
                Process = 0LL;
                if ( v45 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v46);
                }
                else
                {
                  if ( PsLookupProcessByProcessId((HANDLE)v45, &Process) < 0 )
                  {
LABEL_78:
                    if ( Process )
                      ObfDereferenceObject(Process);
LABEL_80:
                    v54 = *(_DWORD *)v19 & 0xFFFFFF;
                    if ( v54 >= 0x10000 && *(_DWORD *)gpHandleManager > 0x10000u )
                      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)gpHandleManager + 2), *v19, 1);
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
                    {
                      EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v19 + 14));
                      McTemplateK0pqqq_EtwWriteTransfer(
                        v127,
                        (unsigned int)&GdiDestroyHandle,
                        v128,
                        *v126,
                        EtwGdiHandleType);
                    }
                    *((_BYTE *)v19 + 14) = 0;
                    *((_QWORD *)v19 + 2) = 0LL;
                    *((_DWORD *)v19 + 2) = v44 & 1;
                    v55 = *(_DWORD *)v19 & 0xFFFFFF;
                    if ( v55 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    *v19,
                                                    1)
                             + 13) == HIWORD(v55) )
                          v55 = (unsigned __int16)v55;
                      }
                      else
                      {
                        v55 = *v19;
                      }
                    }
                    v56 = gpHandleManager;
                    v57 = *((_QWORD *)gpHandleManager + 2);
                    v58 = *(_DWORD *)(v57 + 2056);
                    if ( v55 >= v58 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
                      goto LABEL_210;
                    v59 = ((v55 - v58) >> 16) + 1;
                    if ( v55 < v58 )
                      v59 = 0LL;
                    v60 = *(_QWORD *)(v57 + 8 * v59 + 8);
                    if ( (_DWORD)v59 )
                      v55 += ((1 - (_DWORD)v59) << 16) - v58;
                    if ( v55 >= *(_DWORD *)(v60 + 20) )
LABEL_210:
                      v61 = 0LL;
                    else
                      v61 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * ((unsigned __int64)v55 >> 8))
                                       + 16LL * (unsigned __int8)v55
                                       + 8);
                    v62 = (unsigned __int16)*v61;
                    v63 = v62 | (*v61 >> 8) & 0xFF0000;
                    if ( v63 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    (unsigned __int16)v62,
                                                    1)
                             + 13) == HIWORD(v63) )
                          v63 = (unsigned __int16)v63;
                      }
                      else
                      {
                        v63 = (unsigned __int16)v62;
                      }
                    }
                    v64 = *((_QWORD *)v56 + 3);
                    v65 = *((_QWORD *)v56 + 2);
                    if ( v64 )
                    {
                      v129 = *(_DWORD *)(v64 + 4LL * (unsigned __int16)v63);
                      if ( v129 )
                      {
                        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v56 + 2), v129, 1) )
                          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v56 + 2), v129, 1);
                        *(_DWORD *)(4LL * (unsigned __int16)v63 + *((_QWORD *)v56 + 3)) = 0;
                        --*((_DWORD *)v56 + 1);
                        v65 = *((_QWORD *)v56 + 2);
                      }
                    }
                    v66 = *(_DWORD *)(v65 + 2056);
                    if ( v63 < v66 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16) )
                    {
                      v67 = ((v63 - v66) >> 16) + 1;
                      if ( v63 < v66 )
                        v67 = 0LL;
                      v68 = *(_QWORD *)(v65 + 8 * v67 + 8);
                      if ( (_DWORD)v67 )
                        v63 += ((1 - (_DWORD)v67) << 16) - v66;
                      v69 = *(_QWORD **)(v68 + 24);
                      if ( v63 < *(_DWORD *)(v68 + 20) )
                      {
                        v70 = *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v63 >> 8));
                        if ( *(_QWORD *)(v70 + 16LL * (unsigned __int8)v63 + 8) )
                        {
                          *(_QWORD *)(v70 + 16LL * (unsigned __int8)v63 + 8) = 0LL;
                          *(_QWORD *)(*(_QWORD *)v68 + 24LL * v63) = *(unsigned int *)(v68 + 12);
                          --*(_DWORD *)(v68 + 16);
                          v69 = *(_QWORD **)(v68 + 24);
                          *(_DWORD *)(v68 + 12) = v63;
                        }
                      }
                      ExReleasePushLockExclusiveEx(
                        *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v63 >> 8)) + 16LL * (unsigned __int8)v63,
                        0LL);
                      KeLeaveCriticalRegion();
                      *(_BYTE *)v65 = 0;
                    }
                    *(_QWORD *)v61 = 0LL;
                    --*((_DWORD *)v56 + 1);
                    KeLeaveCriticalRegion();
                    GreReleaseHmgrSemaphore(v72, v71, v73);
                    if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
                    {
                      v146 = *(_QWORD *)(*(_QWORD *)this + 128LL);
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v146);
                      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
                    }
                    if ( *((_DWORD *)this + 3) )
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
                    v74 = *(int **)this;
                    v75 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
                    v76 = *(void **)(*(_QWORD *)this + 72LL);
                    v77 = *(void **)(*(_QWORD *)this + 248LL);
                    v78 = *(_OWORD *)(*(_QWORD *)this + 288LL);
                    v156[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
                    v79 = *((_OWORD *)v74 + 19);
                    v156[1] = v78;
                    v80 = *(_OWORD *)(v74 + 146);
                    v156[2] = v79;
                    v81 = *(_OWORD *)(v74 + 150);
                    *(_OWORD *)Object = v80;
                    v155 = v81;
                    if ( (v75 & 8) != 0 )
                    {
                      if ( (v74[28] & 0x40000) != 0 && v76 )
                      {
                        if ( (v75 & 0x80u) != 0LL )
                        {
                          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                          {
                            v133 = Object[1];
                            v134 = DWORD2(v155);
                            v135 = Object[1];
                            if ( DWORD2(v155) )
                              v135 = v76;
                            v136 = PsGetCurrentProcess(v131, v130);
                            MmUnmapViewOfSection(v136, v135);
                            v137 = *(_QWORD *)(ThreadWin32Thread + 72);
                            v160 = 0LL;
                            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v137 + 8), &v160) >= 0 )
                            {
                              if ( v134 )
                                v76 = v133;
                              MmUnmapViewOfSection(v160, v76);
                              ObfDereferenceObject(v160);
                            }
                          }
                          if ( !Object[0] )
                            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                          ObfDereferenceObject(Object[0]);
                        }
                        else
                        {
                          EngFreeUserMem(v76);
                        }
                      }
                    }
                    else if ( (v75 & 0x800) != 0 )
                    {
                      v138 = ghsemMapRot;
                      v151 = ghsemMapRot;
                      if ( ghsemMapRot )
                      {
                        PsEnterPriorityRegion(v75);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(v138);
                        v74 = *(int **)this;
                      }
                      v139 = (_QWORD *)*((_QWORD *)v74 + 33);
                      if ( v139 )
                      {
                        PsGetCurrentProcessWin32Process(v75);
                        v140 = (_QWORD *)(*(_QWORD *)this + 528LL);
                        v141 = (_QWORD *)*v140;
                        if ( (_QWORD *)*v140 != v140 )
                        {
                          if ( (_QWORD *)v141[1] != v140
                            || (v142 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v142 != v140) )
                          {
                            __fastfail(3u);
                          }
                          *v142 = v141;
                          v141[1] = v142;
                        }
                        if ( v76 && v77 )
                          MmUnmapViewOfSection(*v139, v76);
                      }
                      W32PIDLOCK::vCleanUp((REGION **)v156);
                      if ( v77 )
                        ObfDereferenceObject(v77);
                      SEMOBJ::vUnlock((SEMOBJ *)&v151, v143, v144);
                    }
                    else if ( (v75 & 0x10) != 0 )
                    {
                      vFreeKernelSection(v76);
                    }
                    v82 = *(struct _SLIST_ENTRY **)this;
                    if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
                      ReleaseReferenceCountedObjectHandle(0LL);
                    if ( LOBYTE(v82[43].Next) )
                    {
                      v104 = *((_QWORD *)&v82[4].Next + 1);
                      if ( v104 )
                      {
                        Win32FreePool(v104);
                        *((_QWORD *)&v82[4].Next + 1) = 0LL;
                      }
                    }
                    v83 = (__int64)*gpTypeIsolation;
                    if ( *gpTypeIsolation )
                    {
                      memset(v82, 0, 0x2C0uLL);
                      ++*(_DWORD *)(v83 + 76);
                      v84 = v83 + 48;
                      if ( ExQueryDepthSList((PSLIST_HEADER)v84) >= *(_WORD *)(v84 + 16) )
                      {
                        ++*(_DWORD *)(v84 + 32);
                        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v84 + 56))(v82, v84);
                      }
                      else
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)v84, v82);
                      }
                    }
                    return;
                  }
                  CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
                }
                v51 = CurrentProcessWin32Process;
                if ( CurrentProcessWin32Process )
                {
                  v52 = ghsemHmgr;
                  if ( ghsemHmgr )
                  {
                    PsEnterPriorityRegion(v49);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(v52);
                  }
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pqz_EtwWriteTransfer(v49, v48, v50, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
                  --*(_DWORD *)(v51 + 60);
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pz_EtwWriteTransfer(v49, (unsigned int)&LockRelease, v50, (__int64)ghsemHmgr);
                  if ( ghsemHmgr )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
                    PsLeavePriorityRegion(v53);
                  }
                }
                goto LABEL_78;
              }
              *((_BYTE *)v19 + 15) |= 8u;
            }
            HANDLELOCK::vUnlock((HANDLELOCK *)&v148);
            if ( v149 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v148);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(v105, (unsigned int)&LockRelease, v106, (__int64)ghsemHmgr);
            if ( ghsemHmgr )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
              PsLeavePriorityRegion(v145);
            }
            goto LABEL_248;
          }
          v112 = gpHandleManager;
          v113 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v19 & 0xFFFFFF);
          v114 = *((_QWORD *)v112 + 2);
          v115 = v113;
          v116 = *(_DWORD *)(v114 + 2056);
          if ( v113 >= v116 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
            goto LABEL_177;
          v117 = ((v113 - v116) >> 16) + 1;
          if ( v113 < v116 )
            v117 = 0LL;
          v118 = *(_QWORD *)(v114 + 8 * v117 + 8);
          if ( (_DWORD)v117 )
            v115 = ((1 - (_DWORD)v117) << 16) - v116 + v113;
          if ( (unsigned int)v115 >= *(_DWORD *)(v118 + 20) )
LABEL_177:
            v119 = 0LL;
          else
            v119 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v118 + 24) + 8 * (v115 >> 8)) + 16LL * (unsigned __int8)v115 + 8);
          if ( *(_WORD *)(v119 + 12) && *(struct _KTHREAD **)(v119 + 16) == KeGetCurrentThread() )
            goto LABEL_181;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v148);
      if ( v149 )
      {
LABEL_181:
        v19 = v148;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_246:
      KeLeaveCriticalRegion();
    }
    GreReleaseHmgrSemaphore(v121, v120, v122);
LABEL_248:
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
    return;
  }
  v85 = *v3;
  v86 = *v3;
  v152 = 0LL;
  v153 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v152, (unsigned __int16)v85 | (v86 >> 8) & 0xFF0000, 0, 0, 1);
  if ( v153 )
  {
    v87 = (_DWORD *)v152;
    v88 = *(_BYTE *)(v152 + 14);
    if ( v88 == 5 )
    {
      v89 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v3 + 85);
      if ( v89 && qword_1C02473D8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02473D8, v89, 0);
    }
    else if ( v88 == 16 )
    {
      TrackObjectReferenceDecrement(
        2u,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 17));
    }
    --v3[2];
    v90 = gpHandleManager;
    v91 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v87 & 0xFFFFFF);
    v92 = *((_QWORD *)v90 + 2);
    v93 = v91;
    v94 = *(_DWORD *)(v92 + 2056);
    if ( v91 >= v94 + ((*(unsigned __int16 *)(v92 + 2) + 0xFFFF) << 16) )
      goto LABEL_157;
    v95 = ((v91 - v94) >> 16) + 1;
    if ( v91 < v94 )
      v95 = 0LL;
    v96 = *(_QWORD *)(v92 + 8 * v95 + 8);
    if ( (_DWORD)v95 )
      v93 = ((1 - (_DWORD)v95) << 16) - v94 + v91;
    if ( (unsigned int)v93 >= *(_DWORD *)(v96 + 20) )
LABEL_157:
      v97 = 0LL;
    else
      v97 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + 8 * (v93 >> 8)) + 16LL * (unsigned __int8)v93 + 8);
    v98 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v90,
            (unsigned __int16)*v97 | (*v97 >> 8) & 0xFF0000u);
    v99 = *((_QWORD *)v90 + 2);
    v100 = v98;
    v101 = *(_DWORD *)(v99 + 2056);
    if ( v98 < v101 + ((*(unsigned __int16 *)(v99 + 2) + 0xFFFF) << 16) )
    {
      v102 = ((v98 - v101) >> 16) + 1;
      if ( v98 < v101 )
        v102 = 0LL;
      v103 = *(_QWORD *)(v99 + 8 * v102 + 8);
      if ( (_DWORD)v102 )
        v100 = ((1 - (_DWORD)v102) << 16) - v101 + v98;
      *(_DWORD *)(*(_QWORD *)v103 + 24LL * v100 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v103 + 24) + 8 * ((unsigned __int64)v100 >> 8)) + 16LL * (unsigned __int8)v100,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
