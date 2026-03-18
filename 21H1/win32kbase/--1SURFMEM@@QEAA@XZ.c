/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0
 * Callers:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0030584 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     GreCreateBitmap @ 0x1C0090E80 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C009B2E0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C00A9B18 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0008D54 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C00313A0 (EngFreeUserMem.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C007F9C0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C007FA98 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083570 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0131038 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0149230 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C015705C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
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
  __int64 v74; // r8
  int *v75; // rax
  __int64 v76; // rcx
  void *v77; // rsi
  void *v78; // r15
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  int *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdi
  int v87; // eax
  unsigned int v88; // edx
  _DWORD *v89; // rdi
  char v90; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v91; // rdx
  GdiHandleManager *v92; // rbx
  unsigned int v93; // eax
  __int64 v94; // r9
  unsigned __int64 v95; // rdx
  unsigned int v96; // r8d
  __int64 v97; // rcx
  __int64 v98; // r9
  _DWORD *v99; // rdx
  unsigned int v100; // eax
  __int64 v101; // r10
  unsigned int v102; // edx
  unsigned int v103; // r8d
  __int64 v104; // rcx
  __int64 v105; // r10
  __int64 v106; // rcx
  int v107; // ecx
  int v108; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v111; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v114; // rbx
  unsigned int v115; // eax
  __int64 v116; // r9
  unsigned __int64 v117; // rdx
  unsigned int v118; // r8d
  __int64 v119; // rcx
  __int64 v120; // r10
  __int64 v121; // rdx
  __int64 v122; // rdx
  int v123; // ecx
  int v124; // r8d
  struct _ENTRY *v125; // rax
  struct _ENTRY *v126; // rax
  char EtwGdiHandleType; // al
  _QWORD *v128; // r9
  int v129; // ecx
  int v130; // r8d
  unsigned int v131; // r13d
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 ThreadWin32Thread; // r15
  __int64 v135; // rax
  __int64 v136; // rax
  struct _ERESOURCE *v137; // rbx
  _QWORD *v138; // rbx
  _QWORD *v139; // rax
  _QWORD *v140; // rcx
  _QWORD *v141; // rdx
  __int64 v142; // rdx
  int v143; // r8d
  __int64 v144; // rcx
  struct OBJECT *v145; // [rsp+40h] [rbp-C0h] BYREF
  GdiHandleManager *v146; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v147; // [rsp+50h] [rbp-B0h] BYREF
  int v148; // [rsp+58h] [rbp-A8h]
  int v149; // [rsp+5Ch] [rbp-A4h]
  PERESOURCE v150; // [rsp+68h] [rbp-98h] BYREF
  __int64 v151; // [rsp+70h] [rbp-90h] BYREF
  int v152; // [rsp+78h] [rbp-88h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h]
  __int128 v154; // [rsp+98h] [rbp-68h]
  _OWORD v155[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v156; // [rsp+130h] [rbp+30h]
  __int64 v157; // [rsp+130h] [rbp+30h]
  PEPROCESS Process; // [rsp+138h] [rbp+38h] BYREF
  PEPROCESS v159; // [rsp+140h] [rbp+40h] BYREF
  __int64 v160; // [rsp+148h] [rbp+48h] BYREF

  v3 = *(int **)this;
  if ( !*(_QWORD *)this )
    return;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v5 = 0;
    v156 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      v5 = 1;
      v156 = 1;
    }
    v6 = *(GdiHandleManager **)v3;
    v7 = ghsemHmgr;
    v146 = v6;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(this);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    v160 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v160);
    if ( (!(unsigned __int8)KeIsAttachedProcess(v9)
       || (CurrentProcess = PsGetCurrentProcess(v11, v10),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(v111),
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
    v148 = 1;
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
      goto LABEL_242;
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
      v145 = (struct OBJECT *)(8 * ((unsigned __int64)v14 >> 8));
      v159 = (PEPROCESS)(v20 + *(_QWORD *)((char *)v145 + *v21));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v159, 0LL);
      if ( v14 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v145 + **(_QWORD **)(v18 + 24)) + v20 + 8) )
      {
        *(_DWORD *)(24LL * v14 + *(_QWORD *)v18 + 8) |= 1u;
        v19 = (unsigned __int16 *)(24LL * v14 + *(_QWORD *)v18);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v159, 0LL);
        KeLeaveCriticalRegion();
      }
      WORD1(v6) = WORD1(v146);
      v12 = Process;
      v5 = v156;
    }
    v147 = v19;
    if ( v19 )
    {
      _m_prefetchw(v19 + 4);
      v149 = *((_DWORD *)v19 + 2);
      v22 = v149 & 0xFFFFFFFE;
      if ( (v149 & 0xFFFFFFFE) == (v160 & 0xFFFFFFFC) || !v22 || v12 && v22 == *((_DWORD *)v12 + 2) )
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
            v146 = gpHandleManager;
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
            v157 = v30;
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
                    v125 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v26, (unsigned __int16)v31, 1);
                    v30 = v157;
                    v25 = v146;
                    if ( *((unsigned __int8 *)v125 + 13) == HIWORD(v32) )
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
                  v30 = v157;
                }
                if ( v32 >= 0x10000 )
                {
                  if ( *(_DWORD *)v25 > 0x10000u )
                  {
                    v126 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v26, (unsigned __int16)v32, 1);
                    v30 = v157;
                    if ( *((unsigned __int8 *)v126 + 13) == HIWORD(v32) )
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
                  if ( v43 && qword_1C024D3D8 )
                    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                      qword_1C024D3D8,
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
                        v129,
                        (unsigned int)&GdiDestroyHandle,
                        v130,
                        *v128,
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
                      v131 = *(_DWORD *)(v64 + 4LL * (unsigned __int16)v63);
                      if ( v131 )
                      {
                        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v56 + 2), v131, 1) )
                          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v56 + 2), v131, 1);
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
                      v145 = *(struct OBJECT **)(*(_QWORD *)this + 128LL);
                      XEPALOBJ::vUnrefPalette(&v145);
                      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
                    }
                    if ( *((_DWORD *)this + 3) )
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
                    v75 = *(int **)this;
                    v76 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
                    v77 = *(void **)(*(_QWORD *)this + 72LL);
                    v78 = *(void **)(*(_QWORD *)this + 248LL);
                    v79 = *(_OWORD *)(*(_QWORD *)this + 288LL);
                    v155[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
                    v80 = *((_OWORD *)v75 + 19);
                    v155[1] = v79;
                    v81 = *(_OWORD *)(v75 + 146);
                    v155[2] = v80;
                    v82 = *(_OWORD *)(v75 + 150);
                    *(_OWORD *)Object = v81;
                    v154 = v82;
                    if ( (v76 & 8) != 0 )
                    {
                      if ( (v75[28] & 0x40000) != 0 && v77 )
                      {
                        if ( (v76 & 0x80u) != 0LL )
                        {
                          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                          {
                            v135 = PsGetCurrentProcess(v133, v132);
                            MmUnmapViewOfSection(v135);
                            v136 = *(_QWORD *)(ThreadWin32Thread + 72);
                            v159 = 0LL;
                            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v136 + 8), &v159) >= 0 )
                            {
                              MmUnmapViewOfSection(v159);
                              ObfDereferenceObject(v159);
                            }
                          }
                          if ( !Object[0] )
                            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                          ObfDereferenceObject(Object[0]);
                        }
                        else
                        {
                          EngFreeUserMem(v77);
                        }
                      }
                    }
                    else if ( (v76 & 0x800) != 0 )
                    {
                      v137 = ghsemMapRot;
                      v150 = ghsemMapRot;
                      if ( ghsemMapRot )
                      {
                        PsEnterPriorityRegion(v76);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(v137);
                        v75 = *(int **)this;
                      }
                      v138 = (_QWORD *)*((_QWORD *)v75 + 33);
                      if ( v138 )
                      {
                        PsGetCurrentProcessWin32Process(v76);
                        v139 = (_QWORD *)(*(_QWORD *)this + 528LL);
                        v140 = (_QWORD *)*v139;
                        if ( (_QWORD *)*v139 != v139 )
                        {
                          if ( (_QWORD *)v140[1] != v139
                            || (v141 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v141 != v139) )
                          {
                            __fastfail(3u);
                          }
                          *v141 = v140;
                          v140[1] = v141;
                        }
                        if ( v77 && v78 )
                          MmUnmapViewOfSection(*v138);
                      }
                      W32PIDLOCK::vCleanUp((REGION **)v155);
                      if ( v78 )
                        ObfDereferenceObject(v78);
                      SEMOBJ::vUnlock((SEMOBJ *)&v150, v142, v143);
                    }
                    else if ( (v76 & 0x10) != 0 )
                    {
                      vFreeKernelSection(v77);
                    }
                    v83 = *(int **)this;
                    v84 = *(_QWORD *)(*(_QWORD *)this + 680LL);
                    if ( v84 )
                      ReleaseReferenceCountedObjectHandle(0LL);
                    if ( *((_BYTE *)v83 + 688) )
                    {
                      v106 = *((_QWORD *)v83 + 9);
                      if ( v106 )
                      {
                        Win32FreePool(v106, v84, v74);
                        *((_QWORD *)v83 + 9) = 0LL;
                      }
                    }
                    v85 = (__int64)*gpTypeIsolation;
                    if ( *gpTypeIsolation )
                    {
                      memset(v83, 0, 0x2C0uLL);
                      ++*(_DWORD *)(v85 + 76);
                      v86 = v85 + 48;
                      if ( ExQueryDepthSList((PSLIST_HEADER)v86) >= *(_WORD *)(v86 + 16) )
                      {
                        ++*(_DWORD *)(v86 + 32);
                        (*(void (__fastcall **)(int *, __int64))(v86 + 56))(v83, v86);
                      }
                      else
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)v86, (PSLIST_ENTRY)v83);
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
            HANDLELOCK::vUnlock((HANDLELOCK *)&v147);
            if ( v148 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v147);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(v107, (unsigned int)&LockRelease, v108, (__int64)ghsemHmgr);
            if ( ghsemHmgr )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
              PsLeavePriorityRegion(v144);
            }
            goto LABEL_244;
          }
          v114 = gpHandleManager;
          v115 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v19 & 0xFFFFFF);
          v116 = *((_QWORD *)v114 + 2);
          v117 = v115;
          v118 = *(_DWORD *)(v116 + 2056);
          if ( v115 >= v118 + ((*(unsigned __int16 *)(v116 + 2) + 0xFFFF) << 16) )
            goto LABEL_177;
          v119 = ((v115 - v118) >> 16) + 1;
          if ( v115 < v118 )
            v119 = 0LL;
          v120 = *(_QWORD *)(v116 + 8 * v119 + 8);
          if ( (_DWORD)v119 )
            v117 = ((1 - (_DWORD)v119) << 16) - v118 + v115;
          if ( (unsigned int)v117 >= *(_DWORD *)(v120 + 20) )
LABEL_177:
            v121 = 0LL;
          else
            v121 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v120 + 24) + 8 * (v117 >> 8)) + 16LL * (unsigned __int8)v117 + 8);
          if ( *(_WORD *)(v121 + 12) && *(struct _KTHREAD **)(v121 + 16) == KeGetCurrentThread() )
            goto LABEL_181;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v147);
      if ( v148 )
      {
LABEL_181:
        v19 = v147;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_242:
      KeLeaveCriticalRegion();
    }
    GreReleaseHmgrSemaphore(v123, v122, v124);
LABEL_244:
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
    return;
  }
  v87 = *v3;
  v88 = *v3;
  v151 = 0LL;
  v152 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v151, (unsigned __int16)v87 | (v88 >> 8) & 0xFF0000, 0, 0, 1);
  if ( v152 )
  {
    v89 = (_DWORD *)v151;
    v90 = *(_BYTE *)(v151 + 14);
    if ( v90 == 5 )
    {
      v91 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v3 + 85);
      if ( v91 && qword_1C024D3D8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C024D3D8, v91, 0);
    }
    else if ( v90 == 16 )
    {
      TrackObjectReferenceDecrement(
        2u,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 17));
    }
    --v3[2];
    v92 = gpHandleManager;
    v93 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v89 & 0xFFFFFF);
    v94 = *((_QWORD *)v92 + 2);
    v95 = v93;
    v96 = *(_DWORD *)(v94 + 2056);
    if ( v93 >= v96 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16) )
      goto LABEL_157;
    v97 = ((v93 - v96) >> 16) + 1;
    if ( v93 < v96 )
      v97 = 0LL;
    v98 = *(_QWORD *)(v94 + 8 * v97 + 8);
    if ( (_DWORD)v97 )
      v95 = ((1 - (_DWORD)v97) << 16) - v96 + v93;
    if ( (unsigned int)v95 >= *(_DWORD *)(v98 + 20) )
LABEL_157:
      v99 = 0LL;
    else
      v99 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v98 + 24) + 8 * (v95 >> 8)) + 16LL * (unsigned __int8)v95 + 8);
    v100 = GdiHandleManager::DecodeIndex(
             (GdiHandleEntryDirectory **)v92,
             (unsigned __int16)*v99 | (*v99 >> 8) & 0xFF0000u);
    v101 = *((_QWORD *)v92 + 2);
    v102 = v100;
    v103 = *(_DWORD *)(v101 + 2056);
    if ( v100 < v103 + ((*(unsigned __int16 *)(v101 + 2) + 0xFFFF) << 16) )
    {
      v104 = ((v100 - v103) >> 16) + 1;
      if ( v100 < v103 )
        v104 = 0LL;
      v105 = *(_QWORD *)(v101 + 8 * v104 + 8);
      if ( (_DWORD)v104 )
        v102 = ((1 - (_DWORD)v104) << 16) - v103 + v100;
      *(_DWORD *)(*(_QWORD *)v105 + 24LL * v102 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v105 + 24) + 8 * ((unsigned __int64)v102 >> 8)) + 16LL * (unsigned __int8)v102,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
