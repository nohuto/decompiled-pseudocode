/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001D6D4 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C001D8A0 (GreCreateBitmap.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00ADDA4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF3AC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF5B0 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C003EBC8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044BB0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C0063C10 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B0344 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0128CF8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0140A00 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C014E75C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this, int a2, int a3)
{
  int *v3; // rbx
  __int16 v5; // r13
  GdiHandleManager *v6; // r12
  struct _ERESOURCE *v7; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PEPROCESS v11; // r8
  GdiHandleManager *v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 *v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  char v22; // al
  unsigned int v23; // ebx
  GdiHandleManager *v24; // r10
  __int64 v25; // rsi
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // r13
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  char v41; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v42; // rdx
  int v43; // ebx
  signed int v44; // r13d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 CurrentProcessWin32Process; // rax
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rsi
  struct _ERESOURCE *v54; // r12
  __int64 v55; // rcx
  unsigned int v56; // esi
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r9
  unsigned int v62; // ebx
  GdiHandleManager *v63; // rsi
  __int64 v64; // rdx
  unsigned int v65; // r8d
  __int64 v66; // rcx
  __int64 v67; // r9
  _DWORD *v68; // r12
  int v69; // eax
  unsigned int v70; // ebx
  __int64 v71; // r8
  __int64 v72; // r15
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // r8
  _QWORD *v76; // r10
  __int64 v77; // r11
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int *v81; // rax
  __int64 v82; // rcx
  void *v83; // rsi
  void *v84; // r15
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  struct _SLIST_ENTRY *v89; // rbx
  __int64 v90; // rdi
  __int64 v91; // rdi
  int v92; // eax
  unsigned int v93; // edx
  _DWORD *v94; // rdi
  char v95; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v96; // rdx
  GdiHandleManager *v97; // rbx
  unsigned int v98; // eax
  __int64 v99; // r9
  unsigned __int64 v100; // rdx
  unsigned int v101; // r8d
  __int64 v102; // rcx
  __int64 v103; // r9
  _DWORD *v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // r10
  unsigned int v107; // edx
  unsigned int v108; // r8d
  __int64 v109; // rcx
  __int64 v110; // r10
  __int64 v111; // rcx
  int v112; // ecx
  int v113; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v118; // rbx
  unsigned int v119; // eax
  __int64 v120; // r9
  unsigned __int64 v121; // rdx
  unsigned int v122; // r8d
  __int64 v123; // rcx
  __int64 v124; // r10
  __int64 v125; // rdx
  struct _ENTRY *v126; // rax
  struct _ENTRY *v127; // rax
  char EtwGdiHandleType; // al
  _QWORD *v129; // r9
  int v130; // ecx
  int v131; // r8d
  unsigned int v132; // r13d
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 ThreadWin32Thread; // r15
  PVOID v136; // r12
  int v137; // r13d
  PVOID v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rax
  struct _ERESOURCE *v141; // rbx
  _QWORD *v142; // rbx
  _QWORD *v143; // rax
  _QWORD *v144; // rcx
  _QWORD *v145; // rdx
  __int64 v146; // rcx
  unsigned __int64 v147; // [rsp+40h] [rbp-C0h] BYREF
  GdiHandleManager *v148; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v149; // [rsp+50h] [rbp-B0h] BYREF
  int v150; // [rsp+58h] [rbp-A8h]
  int v151; // [rsp+5Ch] [rbp-A4h]
  HSEMAPHORE v152; // [rsp+68h] [rbp-98h] BYREF
  __int64 v153; // [rsp+70h] [rbp-90h] BYREF
  int v154; // [rsp+78h] [rbp-88h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h]
  __int128 v156; // [rsp+98h] [rbp-68h]
  _OWORD v157[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v158; // [rsp+130h] [rbp+30h]
  __int64 v159; // [rsp+130h] [rbp+30h]
  PEPROCESS Process; // [rsp+138h] [rbp+38h] BYREF
  PEPROCESS v161; // [rsp+140h] [rbp+40h] BYREF
  __int64 v162; // [rsp+148h] [rbp+48h] BYREF

  v3 = *(int **)this;
  if ( !*(_QWORD *)this )
    return;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v5 = 0;
    v158 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      v5 = 1;
      v158 = 1;
    }
    v6 = *(GdiHandleManager **)v3;
    v7 = ghsemHmgr;
    v148 = v6;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    v162 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v162);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (CurrentProcess = PsGetCurrentProcess(v10, v9),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v11 = *(PEPROCESS *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = gpHandleManager;
    v13 = (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000;
    Process = v11;
    v150 = 1;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v6,
                  1);
        v11 = Process;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v13) )
          v13 = (unsigned __int16)v6;
      }
      else
      {
        v13 = (unsigned __int16)v6;
      }
    }
    v14 = *((_QWORD *)v12 + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v13 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_257;
    v16 = ((v13 - v15) >> 16) + 1;
    if ( v13 < v15 )
      v16 = 0LL;
    v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v13 += ((1 - (_DWORD)v16) << 16) - v15;
    v18 = 0LL;
    if ( v13 < *(_DWORD *)(v17 + 20) )
    {
      v19 = 16LL * (unsigned __int8)v13;
      v20 = *(_QWORD **)(v17 + 24);
      v147 = 8 * ((unsigned __int64)v13 >> 8);
      v161 = (PEPROCESS)(v19 + *(_QWORD *)(*v20 + v147));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v161, 0LL);
      if ( v13 < *(_DWORD *)(v17 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + v147) + v19 + 8) )
      {
        *(_DWORD *)(24LL * v13 + *(_QWORD *)v17 + 8) |= 1u;
        v18 = (unsigned __int16 *)(24LL * v13 + *(_QWORD *)v17);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v161, 0LL);
        KeLeaveCriticalRegion();
      }
      WORD1(v6) = WORD1(v148);
      v11 = Process;
      v5 = v158;
    }
    v149 = v18;
    if ( v18 )
    {
      _m_prefetchw(v18 + 4);
      v151 = *((_DWORD *)v18 + 2);
      v21 = v151 & 0xFFFFFFFE;
      if ( (v151 & 0xFFFFFFFE) == (v162 & 0xFFFFFFFC) || !v21 || v11 && v21 == *((_DWORD *)v11 + 2) )
      {
        v22 = *((_BYTE *)v18 + 15);
        if ( (v22 & 0x20) == 0 )
        {
          if ( (v22 & 0x40) == 0 )
          {
LABEL_29:
            v23 = *(_DWORD *)v18 & 0xFFFFFF;
            if ( v23 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v18,
                                            1)
                     + 13) == HIWORD(v23) )
                  v23 = (unsigned __int16)v23;
              }
              else
              {
                v23 = *v18;
              }
            }
            v24 = gpHandleManager;
            v148 = gpHandleManager;
            v25 = *((_QWORD *)gpHandleManager + 2);
            v26 = *(_DWORD *)(v25 + 2056);
            if ( v23 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
              goto LABEL_192;
            v27 = ((v23 - v26) >> 16) + 1;
            if ( v23 < v26 )
              v27 = 0LL;
            v28 = *(_QWORD *)(v25 + 8 * v27 + 8);
            if ( (_DWORD)v27 )
              v23 += ((1 - (_DWORD)v27) << 16) - v26;
            if ( v23 >= *(_DWORD *)(v28 + 20) )
LABEL_192:
              v29 = 0LL;
            else
              v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                              + 16LL * (unsigned __int8)v23
                              + 8);
            v159 = v29;
            if ( *((_BYTE *)v18 + 14) == 5 && v18[6] == WORD1(v6) )
            {
              if ( *(_WORD *)(v29 + 12) == v5 && *(_DWORD *)(v29 + 8) == 1 )
              {
                v30 = (unsigned __int16)*(_DWORD *)v29;
                v31 = v30 | (*(_DWORD *)v29 >> 8) & 0xFF0000;
                if ( v31 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v126 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v25, (unsigned __int16)v30, 1);
                    v29 = v159;
                    v24 = v148;
                    if ( *((unsigned __int8 *)v126 + 13) == HIWORD(v31) )
                      v31 = (unsigned __int16)v31;
                  }
                  else
                  {
                    v31 = (unsigned __int16)v30;
                  }
                }
                v32 = *(_DWORD *)(v25 + 2056);
                if ( v31 >= v32 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
                {
                  v36 = 0LL;
                }
                else
                {
                  v33 = ((v31 - v32) >> 16) + 1;
                  if ( v31 < v32 )
                    v33 = 0LL;
                  v34 = *(_QWORD *)(v25 + 8 * v33 + 8);
                  if ( (_DWORD)v33 )
                    v35 = v31 + ((1 - (_DWORD)v33) << 16) - v32;
                  else
                    v35 = v31;
                  v36 = 0LL;
                  if ( v35 < *(_DWORD *)(v34 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                                 + 16LL * (unsigned __int8)v35
                                 + 8) )
                  {
                    v36 = *(_QWORD *)v34 + 24LL * v35;
                  }
                  v29 = v159;
                }
                if ( v31 >= 0x10000 )
                {
                  if ( *(_DWORD *)v24 > 0x10000u )
                  {
                    v127 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v25, (unsigned __int16)v31, 1);
                    v29 = v159;
                    if ( *((unsigned __int8 *)v127 + 13) == HIWORD(v31) )
                      v31 = (unsigned __int16)v31;
                  }
                  else
                  {
                    v31 = (unsigned __int16)v31;
                  }
                }
                v37 = *(_DWORD *)(v25 + 2056);
                if ( v31 >= v37 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
                  goto LABEL_203;
                v38 = ((v31 - v37) >> 16) + 1;
                if ( v31 < v37 )
                  v38 = 0LL;
                v39 = *(_QWORD *)(v25 + 8 * v38 + 8);
                if ( (_DWORD)v38 )
                  v31 += ((1 - (_DWORD)v38) << 16) - v37;
                if ( v31 >= *(_DWORD *)(v39 + 20) )
LABEL_203:
                  v40 = 0LL;
                else
                  v40 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                                  + 16LL * (unsigned __int8)v31
                                  + 8);
                if ( v40 != v29 )
                  v36 = 0LL;
                v41 = *(_BYTE *)(v36 + 14);
                if ( v41 == 5 )
                {
                  v42 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v29 + 680);
                  if ( v42 && qword_1C02453D8 )
                    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                      qword_1C02453D8,
                      v42,
                      0);
                }
                else if ( v41 == 16 )
                {
                  TrackObjectReferenceDecrement(2LL, *(_QWORD *)(v29 + 136));
                }
                v43 = *((_DWORD *)v18 + 2);
                v44 = v43 & 0xFFFFFFFE;
                if ( (v43 & 0xFFFFFFFE) == 0 || v44 == -2147483630 )
                  goto LABEL_80;
                Process = 0LL;
                if ( v44 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v46, v45, v47, v48);
                }
                else
                {
                  if ( PsLookupProcessByProcessId((HANDLE)v44, &Process) < 0 )
                  {
LABEL_78:
                    if ( Process )
                      ObfDereferenceObject(Process);
LABEL_80:
                    v56 = *(_DWORD *)v18 & 0xFFFFFF;
                    if ( v56 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    *v18,
                                                    1)
                             + 13) == HIWORD(v56) )
                          v56 = (unsigned __int16)v56;
                      }
                      else
                      {
                        v56 = *v18;
                      }
                    }
                    v57 = *((_QWORD *)gpHandleManager + 2);
                    v58 = *(unsigned int *)(v57 + 2056);
                    if ( v56 >= (unsigned int)v58 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
                      goto LABEL_217;
                    v59 = ((v56 - (unsigned int)v58) >> 16) + 1;
                    if ( v56 < (unsigned int)v58 )
                      v59 = 0LL;
                    v60 = *(_QWORD *)(v57 + 8 * v59 + 8);
                    if ( (_DWORD)v59 )
                      v56 += ((1 - (_DWORD)v59) << 16) - v58;
                    if ( v56 >= *(_DWORD *)(v60 + 20) )
                    {
LABEL_217:
                      v61 = 0LL;
                    }
                    else
                    {
                      v57 = (unsigned __int64)v56 >> 8;
                      v61 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * v57) + 16LL * (unsigned __int8)v56 + 8);
                    }
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
                    {
                      EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v18 + 14), v57, v58, v61);
                      McTemplateK0pqqq_EtwWriteTransfer(
                        v130,
                        (unsigned int)&GdiDestroyHandle,
                        v131,
                        *v129,
                        EtwGdiHandleType);
                    }
                    *((_BYTE *)v18 + 14) = 0;
                    *((_QWORD *)v18 + 2) = 0LL;
                    *((_DWORD *)v18 + 2) = v43 & 1;
                    v62 = *(_DWORD *)v18 & 0xFFFFFF;
                    if ( v62 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    *v18,
                                                    1)
                             + 13) == HIWORD(v62) )
                          v62 = (unsigned __int16)v62;
                      }
                      else
                      {
                        v62 = *v18;
                      }
                    }
                    v63 = gpHandleManager;
                    v64 = *((_QWORD *)gpHandleManager + 2);
                    v65 = *(_DWORD *)(v64 + 2056);
                    if ( v62 >= v65 + ((*(unsigned __int16 *)(v64 + 2) + 0xFFFF) << 16) )
                      goto LABEL_221;
                    v66 = ((v62 - v65) >> 16) + 1;
                    if ( v62 < v65 )
                      v66 = 0LL;
                    v67 = *(_QWORD *)(v64 + 8 * v66 + 8);
                    if ( (_DWORD)v66 )
                      v62 += ((1 - (_DWORD)v66) << 16) - v65;
                    if ( v62 >= *(_DWORD *)(v67 + 20) )
LABEL_221:
                      v68 = 0LL;
                    else
                      v68 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v67 + 24) + 8 * ((unsigned __int64)v62 >> 8))
                                       + 16LL * (unsigned __int8)v62
                                       + 8);
                    v69 = (unsigned __int16)*v68;
                    v70 = v69 | (*v68 >> 8) & 0xFF0000;
                    if ( v70 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    (unsigned __int16)v69,
                                                    1)
                             + 13) == HIWORD(v70) )
                          v70 = (unsigned __int16)v70;
                      }
                      else
                      {
                        v70 = (unsigned __int16)v69;
                      }
                    }
                    v71 = *((_QWORD *)v63 + 3);
                    v72 = *((_QWORD *)v63 + 2);
                    if ( v71 )
                    {
                      v132 = *(_DWORD *)(v71 + 4LL * (unsigned __int16)v70);
                      if ( v132 )
                      {
                        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v63 + 2), v132, 1) )
                          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v63 + 2), v132, 1);
                        *(_DWORD *)(4LL * (unsigned __int16)v70 + *((_QWORD *)v63 + 3)) = 0;
                        --*((_DWORD *)v63 + 1);
                        v72 = *((_QWORD *)v63 + 2);
                      }
                    }
                    v73 = *(_DWORD *)(v72 + 2056);
                    if ( v70 < v73 + ((*(unsigned __int16 *)(v72 + 2) + 0xFFFF) << 16) )
                    {
                      v74 = ((v70 - v73) >> 16) + 1;
                      if ( v70 < v73 )
                        v74 = 0LL;
                      v75 = *(_QWORD *)(v72 + 8 * v74 + 8);
                      if ( (_DWORD)v74 )
                        v70 += ((1 - (_DWORD)v74) << 16) - v73;
                      v76 = *(_QWORD **)(v75 + 24);
                      if ( v70 < *(_DWORD *)(v75 + 20) )
                      {
                        v77 = *(_QWORD *)(*v76 + 8 * ((unsigned __int64)v70 >> 8));
                        if ( *(_QWORD *)(v77 + 16LL * (unsigned __int8)v70 + 8) )
                        {
                          *(_QWORD *)(v77 + 16LL * (unsigned __int8)v70 + 8) = 0LL;
                          *(_QWORD *)(*(_QWORD *)v75 + 24LL * v70) = *(unsigned int *)(v75 + 12);
                          --*(_DWORD *)(v75 + 16);
                          v76 = *(_QWORD **)(v75 + 24);
                          *(_DWORD *)(v75 + 12) = v70;
                        }
                      }
                      ExReleasePushLockExclusiveEx(
                        *(_QWORD *)(*v76 + 8 * ((unsigned __int64)v70 >> 8)) + 16LL * (unsigned __int8)v70,
                        0LL);
                      KeLeaveCriticalRegion();
                      *(_BYTE *)v72 = 0;
                    }
                    *(_QWORD *)v68 = 0LL;
                    --*((_DWORD *)v63 + 1);
                    KeLeaveCriticalRegion();
                    GreReleaseHmgrSemaphore();
                    if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
                    {
                      v147 = *(_QWORD *)(*(_QWORD *)this + 128LL);
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v147);
                      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
                    }
                    if ( *((_DWORD *)this + 3) )
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
                    v81 = *(int **)this;
                    v82 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
                    v83 = *(void **)(*(_QWORD *)this + 72LL);
                    v84 = *(void **)(*(_QWORD *)this + 248LL);
                    v85 = *(_OWORD *)(*(_QWORD *)this + 288LL);
                    v157[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
                    v86 = *((_OWORD *)v81 + 19);
                    v157[1] = v85;
                    v87 = *(_OWORD *)(v81 + 146);
                    v157[2] = v86;
                    v88 = *(_OWORD *)(v81 + 150);
                    *(_OWORD *)Object = v87;
                    v156 = v88;
                    if ( (v82 & 8) != 0 )
                    {
                      if ( (v81[28] & 0x40000) != 0 && v83 )
                      {
                        if ( (v82 & 0x80u) != 0LL )
                        {
                          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                          {
                            v136 = Object[1];
                            v137 = DWORD2(v156);
                            v138 = Object[1];
                            if ( DWORD2(v156) )
                              v138 = v83;
                            v139 = PsGetCurrentProcess(v134, v133);
                            MmUnmapViewOfSection(v139, v138);
                            v140 = *(_QWORD *)(ThreadWin32Thread + 72);
                            v161 = 0LL;
                            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v140 + 8), &v161) >= 0 )
                            {
                              if ( v137 )
                                v83 = v136;
                              MmUnmapViewOfSection(v161, v83);
                              ObfDereferenceObject(v161);
                            }
                          }
                          if ( !Object[0] )
                            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                          ObfDereferenceObject(Object[0]);
                        }
                        else
                        {
                          EngFreeUserMem(v83);
                        }
                      }
                    }
                    else if ( (v82 & 0x800) != 0 )
                    {
                      v141 = (struct _ERESOURCE *)ghsemMapRot;
                      v152 = ghsemMapRot;
                      if ( ghsemMapRot )
                      {
                        PsEnterPriorityRegion();
                        ExEnterCriticalRegionAndAcquireResourceExclusive(v141);
                        v81 = *(int **)this;
                      }
                      v142 = (_QWORD *)*((_QWORD *)v81 + 33);
                      if ( v142 )
                      {
                        PsGetCurrentProcessWin32Process(v82, v78, v79, v80);
                        v143 = (_QWORD *)(*(_QWORD *)this + 528LL);
                        v144 = (_QWORD *)*v143;
                        if ( (_QWORD *)*v143 != v143 )
                        {
                          if ( (_QWORD *)v144[1] != v143
                            || (v145 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v145 != v143) )
                          {
                            __fastfail(3u);
                          }
                          *v145 = v144;
                          v144[1] = v145;
                        }
                        if ( v83 && v84 )
                          MmUnmapViewOfSection(*v142, v83);
                      }
                      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v157);
                      if ( v84 )
                        ObfDereferenceObject(v84);
                      SEMOBJ::vUnlock((SEMOBJ *)&v152);
                    }
                    else if ( (v82 & 0x10) != 0 )
                    {
                      vFreeKernelSection(v83);
                    }
                    v89 = *(struct _SLIST_ENTRY **)this;
                    if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
                      ReleaseReferenceCountedObjectHandle(0LL);
                    if ( LOBYTE(v89[43].Next) )
                    {
                      v111 = *((_QWORD *)&v89[4].Next + 1);
                      if ( v111 )
                      {
                        Win32FreePool(v111);
                        *((_QWORD *)&v89[4].Next + 1) = 0LL;
                      }
                    }
                    v90 = (__int64)*gpTypeIsolation;
                    if ( *gpTypeIsolation )
                    {
                      memset(v89, 0, 0x2C0uLL);
                      ++*(_DWORD *)(v90 + 76);
                      v91 = v90 + 48;
                      if ( ExQueryDepthSList((PSLIST_HEADER)v91) >= *(_WORD *)(v91 + 16) )
                      {
                        ++*(_DWORD *)(v91 + 32);
                        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v91 + 56))(v89, v91);
                      }
                      else
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)v91, v89);
                      }
                    }
                    return;
                  }
                  CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
                }
                v53 = CurrentProcessWin32Process;
                if ( CurrentProcessWin32Process )
                {
                  v54 = ghsemHmgr;
                  if ( ghsemHmgr )
                  {
                    PsEnterPriorityRegion();
                    ExEnterCriticalRegionAndAcquireResourceExclusive(v54);
                  }
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pqz_EtwWriteTransfer(v51, v50, v52, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
                  --*(_DWORD *)(v53 + 60);
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pz_EtwWriteTransfer(
                      v51,
                      (unsigned int)&LockRelease,
                      v52,
                      (_DWORD)ghsemHmgr,
                      (__int64)L"ghsemHmgr");
                  if ( ghsemHmgr )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
                    PsLeavePriorityRegion(v55);
                  }
                }
                goto LABEL_78;
              }
              *((_BYTE *)v18 + 15) |= 8u;
            }
            HANDLELOCK::vUnlock((HANDLELOCK *)&v149);
            if ( v150 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v149);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v112,
                (unsigned int)&LockRelease,
                v113,
                (_DWORD)ghsemHmgr,
                (__int64)L"ghsemHmgr");
            if ( ghsemHmgr )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
              PsLeavePriorityRegion(v146);
            }
            goto LABEL_259;
          }
          v118 = gpHandleManager;
          v119 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v18 & 0xFFFFFF);
          v120 = *((_QWORD *)v118 + 2);
          v121 = v119;
          v122 = *(_DWORD *)(v120 + 2056);
          if ( v119 >= v122 + ((*(unsigned __int16 *)(v120 + 2) + 0xFFFF) << 16) )
            goto LABEL_184;
          v123 = ((v119 - v122) >> 16) + 1;
          if ( v119 < v122 )
            v123 = 0LL;
          v124 = *(_QWORD *)(v120 + 8 * v123 + 8);
          if ( (_DWORD)v123 )
            v121 = ((1 - (_DWORD)v123) << 16) - v122 + v119;
          if ( (unsigned int)v121 >= *(_DWORD *)(v124 + 20) )
LABEL_184:
            v125 = 0LL;
          else
            v125 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v124 + 24) + 8 * (v121 >> 8)) + 16LL * (unsigned __int8)v121 + 8);
          if ( *(_WORD *)(v125 + 12) && *(struct _KTHREAD **)(v125 + 16) == KeGetCurrentThread() )
            goto LABEL_188;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v149);
      if ( v150 )
      {
LABEL_188:
        v18 = v149;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_257:
      KeLeaveCriticalRegion();
    }
    GreReleaseHmgrSemaphore();
LABEL_259:
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
    return;
  }
  v92 = *v3;
  v93 = *v3;
  v153 = 0LL;
  v154 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v153, (unsigned __int16)v92 | (v93 >> 8) & 0xFF0000, 0, 0, 1);
  if ( v154 )
  {
    v94 = (_DWORD *)v153;
    v95 = *(_BYTE *)(v153 + 14);
    if ( v95 == 5 )
    {
      v96 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v3 + 85);
      if ( v96 && qword_1C02453D8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02453D8, v96, 0);
    }
    else if ( v95 == 16 )
    {
      TrackObjectReferenceDecrement(2LL, *((_QWORD *)v3 + 17));
    }
    --v3[2];
    v97 = gpHandleManager;
    v98 = GdiHandleManager::DecodeIndex(gpHandleManager, *v94 & 0xFFFFFF);
    v99 = *((_QWORD *)v97 + 2);
    v100 = v98;
    v101 = *(_DWORD *)(v99 + 2056);
    if ( v98 >= v101 + ((*(unsigned __int16 *)(v99 + 2) + 0xFFFF) << 16) )
      goto LABEL_164;
    v102 = ((v98 - v101) >> 16) + 1;
    if ( v98 < v101 )
      v102 = 0LL;
    v103 = *(_QWORD *)(v99 + 8 * v102 + 8);
    if ( (_DWORD)v102 )
      v100 = ((1 - (_DWORD)v102) << 16) - v101 + v98;
    if ( (unsigned int)v100 >= *(_DWORD *)(v103 + 20) )
LABEL_164:
      v104 = 0LL;
    else
      v104 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v103 + 24) + 8 * (v100 >> 8)) + 16LL * (unsigned __int8)v100 + 8);
    v105 = GdiHandleManager::DecodeIndex(v97, (unsigned __int16)*v104 | (*v104 >> 8) & 0xFF0000);
    v106 = *((_QWORD *)v97 + 2);
    v107 = v105;
    v108 = *(_DWORD *)(v106 + 2056);
    if ( v105 < v108 + ((*(unsigned __int16 *)(v106 + 2) + 0xFFFF) << 16) )
    {
      v109 = ((v105 - v108) >> 16) + 1;
      if ( v105 < v108 )
        v109 = 0LL;
      v110 = *(_QWORD *)(v106 + 8 * v109 + 8);
      if ( (_DWORD)v109 )
        v107 = ((1 - (_DWORD)v109) << 16) - v108 + v105;
      *(_DWORD *)(*(_QWORD *)v110 + 24LL * v107 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v110 + 24) + 8 * ((unsigned __int64)v107 >> 8)) + 16LL * (unsigned __int8)v107,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
