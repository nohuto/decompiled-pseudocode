/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0015380 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C003EF64 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     GreCreateBitmap @ 0x1C0099480 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     Win32CreateSection @ 0x1C000A968 (Win32CreateSection.c)
 *     EngAllocUserMemEx @ 0x1C003E848 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C003FF60 (EngFreeUserMem.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0044558 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C004F3B4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EtwTraceGdiCreateHandle @ 0x1C00808EC (EtwTraceGdiCreateHandle.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0083740 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0083920 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00864EC (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0086970 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0096E60 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0096EB0 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00A68C4 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00C00B4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF930 (HmgIncProcessHandleCountEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0142C1C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0142CD8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0142EE0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C0151000 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  PVOID v12; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // r8d
  __int64 v18; // r9
  int v19; // r13d
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  int v25; // r13d
  unsigned int v26; // r14d
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  PSLIST_ENTRY v30; // r14
  void *v31; // rax
  char v32; // bl
  PSLIST_ENTRY v33; // rcx
  struct _KTHREAD *v34; // r13
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // ebx
  int v44; // eax
  GdiHandleManager *v45; // r13
  unsigned int v46; // ebx
  __int64 v47; // r13
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r13
  unsigned __int16 *v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // ecx
  char v55; // al
  GdiHandleManager *v56; // rbx
  unsigned int v57; // eax
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // r10
  __int64 v63; // rdx
  unsigned int v64; // ebx
  __int64 v65; // r8
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // r9
  __int64 v69; // r13
  unsigned int v70; // ebx
  GdiHandleManager *v71; // r14
  __int64 v72; // r8
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // r9
  _DWORD *v76; // rdx
  unsigned int v77; // ebx
  bool v78; // cc
  __int64 v79; // r8
  unsigned int v80; // edx
  __int64 v81; // rcx
  __int64 v82; // r10
  int v83; // ecx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int CurrentProcessId; // eax
  void *v87; // r13
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v96; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  struct HOBJ__ *v106; // r13
  __int64 v107; // r14
  unsigned int v108; // eax
  unsigned int v109; // esi
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rax
  int v114; // ebx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  GdiHandleManager *v118; // rcx
  int v119; // r8d
  __int64 *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  struct _ERESOURCE *v123; // rbx
  int v124; // ebx
  __int64 v125; // rdx
  int v126; // r8d
  unsigned __int16 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  char EtwGdiHandleType; // al
  __int64 v133; // rdx
  int v134; // eax
  __int64 v135; // rcx
  struct _EPROCESS *v136; // rax
  __int128 v137; // xmm0
  _OWORD *v138; // rax
  __int128 v139; // xmm1
  __int128 v140; // xmm0
  int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdi
  PVOID v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rax
  PVOID v148; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v150; // [rsp+58h] [rbp-A8h]
  unsigned int v151[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v152; // [rsp+68h] [rbp-98h]
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  __int64 v154; // [rsp+78h] [rbp-88h]
  void *v155; // [rsp+80h] [rbp-80h] BYREF
  __int64 v156; // [rsp+88h] [rbp-78h] BYREF
  struct _KTHREAD *v157; // [rsp+90h] [rbp-70h]
  int v158; // [rsp+98h] [rbp-68h]
  int v159; // [rsp+9Ch] [rbp-64h]
  __int64 v160; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v161; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v162; // [rsp+B8h] [rbp-48h]
  __int128 v163; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v164; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v165; // [rsp+E0h] [rbp-20h] BYREF
  int v166; // [rsp+E8h] [rbp-18h]
  int v167; // [rsp+ECh] [rbp-14h]
  char v168; // [rsp+150h] [rbp+50h]
  int v169; // [rsp+158h] [rbp+58h]
  PVOID pv; // [rsp+160h] [rbp+60h] BYREF
  void *v171; // [rsp+168h] [rbp+68h]

  v171 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v12 = a3;
  LOWORD(v169) = 0;
  v14 = 1;
  v15 = 0;
  v16 = 0;
  v17 = *((_DWORD *)a2 + 1);
  if ( v17 > 0x7FFFFFFF )
    return 0LL;
  v18 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v18 > 0x7FFFFFFF )
    return 0LL;
  if ( *(_DWORD *)a2 == 6 )
  {
    if ( v17 >= 0x3FFFFFFF )
      return 0LL;
    v16 = 4 * v17;
  }
  else
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v16 = ((v17 + 31) >> 3) & 0x1FFFFFFC;
        break;
      case 2:
        v16 = ((v17 + 7) >> 1) & 0x7FFFFFFC;
        break;
      case 3:
        v16 = (v17 + 3) & 0xFFFFFFFC;
        break;
      case 4:
        if ( v17 + 1 >= 0x7FFFFFFF )
          return 0LL;
        v16 = (2 * v17 + 2) & 0xFFFFFFFC;
        break;
      case 5:
        if ( v17 >= 0x55555554 )
          return 0LL;
        v16 = (3 * (v17 + 1)) & 0xFFFFFFFC;
        break;
      case 7:
      case 8:
      case 9:
      case 0xA:
        v15 = 1;
        break;
      default:
        return 0LL;
    }
  }
  v19 = SURFACE::tSize;
  v151[0] = SURFACE::tSize;
  Object = 0LL;
  v150 = 0;
  v155 = 0LL;
  v168 = 0;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  if ( v12 )
  {
    if ( !a9 || (!v15 ? (v27 = v16 * v18) : (v27 = *((unsigned int *)a2 + 3)), v27 <= 0x7FFFFFFF) )
    {
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_60;
      W32PIDLOCK::vInit((W32PIDLOCK *)&v161);
      if ( *((_QWORD *)&v163 + 1) )
      {
        v12 = pv;
        LOWORD(v169) = 2048;
        v150 = 1;
        goto LABEL_60;
      }
    }
    return 0LL;
  }
  if ( v15 )
    v20 = *((unsigned int *)a2 + 3);
  else
    v20 = v16 * v18;
  v21 = v20 + (unsigned int)SURFACE::tSize;
  if ( v21 < v20 || (unsigned __int64)v21 > 0x7FFFFFFF )
    return 0LL;
  v22 = *((_DWORD *)a2 + 6);
  if ( (v22 & 0x40000) != 0 && v21 > 4096 )
  {
    v22 |= 8u;
    *((_DWORD *)a2 + 6) = v22;
  }
  if ( (v22 & 8) != 0 )
  {
    if ( (v22 & 0x80u) == 0 )
      v23 = EngAllocUserMemEx((int)v21, v15, &pv);
    else
      v23 = AllocateSharedSection(v21, v15, &Object, &v155, &pv);
    if ( v23 >= 0 )
    {
      v12 = pv;
LABEL_40:
      if ( v12 || Object )
        goto LABEL_60;
      goto LABEL_42;
    }
    return 0LL;
  }
  if ( (v22 & 0x810) != 0 )
  {
    if ( (v22 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)&v161);
      if ( !*((_QWORD *)&v163 + 1) )
        return 0LL;
      v159 = 0;
      v158 = v21 - v19;
      Win32CreateSection(&Object, 6LL);
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((REGION **)&v161);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v21, v15, &pv);
    }
    v12 = pv;
    if ( pv || Object )
    {
      v169 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
      goto LABEL_40;
    }
  }
LABEL_42:
  v12 = 0LL;
  v25 = *((_DWORD *)a2 + 6) & 2;
  v168 = 1;
  v26 = v21 - v151[0];
  if ( v26 && qword_1C0252C10 && (int)qword_1C0252C10() >= 0 )
  {
    if ( qword_1C0252C18 )
      v12 = (PVOID)qword_1C0252C18(33LL, v26, 1835167815LL);
    if ( v12 && !v25 )
      memset(v12, 0, v26);
  }
  pv = v12;
  if ( !v12 )
    return 0LL;
LABEL_60:
  v28 = (__int64)*gpTypeIsolation;
  if ( !*gpTypeIsolation )
  {
LABEL_222:
    *(_QWORD *)this = 0LL;
    goto LABEL_223;
  }
  ++*(_DWORD *)(v28 + 68);
  v29 = v28 + 48;
  v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v28 + 48));
  if ( !v30 )
  {
    ++*(_DWORD *)(v29 + 24);
    v30 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v29 + 48))(
                          *(unsigned int *)(v29 + 36),
                          *(unsigned int *)(v29 + 44),
                          *(unsigned int *)(v29 + 40),
                          v29);
  }
  if ( !v30 )
  {
    v12 = pv;
    goto LABEL_222;
  }
  if ( qword_1C02473D8 )
  {
    v31 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(qword_1C02473D8, v30);
    if ( !v31 )
    {
      v32 = 0;
      FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(v30);
      goto LABEL_70;
    }
    *((_QWORD *)&v30[42].Next + 1) = v31;
  }
  else
  {
    *((_QWORD *)&v30[42].Next + 1) = 0LL;
  }
  v32 = 1;
LABEL_70:
  v33 = 0LL;
  if ( v32 )
    v33 = v30;
  *(_QWORD *)this = v33;
  if ( v33 )
  {
    v154 = *(_QWORD *)((char *)a2 + 4);
    *((_QWORD *)&v33[3].Next + 1) = v154;
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
    v34 = (struct _KTHREAD *)*((_QWORD *)a2 + 2);
    v157 = v34;
    if ( !v34 )
    {
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
LABEL_165:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
      v85 = *(_QWORD *)this;
      pv = 0LL;
      *(_BYTE *)(v85 + 688) = v168;
      *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
      *(_WORD *)(*(_QWORD *)this + 102LL) = v169 | *((_WORD *)a2 + 12) & 0x89;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v87 = a6;
      v88 = CurrentProcessId;
      v89 = *(_QWORD *)this;
      v154 = 0LL;
      *(_DWORD *)(v89 + 208) = v88 & 0xFFFFFFFC;
      *(_QWORD *)(*(_QWORD *)this + 184LL) = v171;
      *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
      *(_QWORD *)(*(_QWORD *)this + 192LL) = v87;
      *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
      *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
      *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
      v90 = *(_QWORD *)this;
      *(_QWORD *)(v90 + 152) = v154;
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v90)
        || (CurrentProcess = PsGetCurrentProcess(v93, v92),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v96),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v99 = *ThreadWin32Thread;
          if ( v99 )
            *(_QWORD *)(v99 + 304) = 0LL;
        }
      }
      *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
      v100 = (_QWORD *)(*(_QWORD *)this + 232LL);
      v100[1] = v100;
      *v100 = v100;
      *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
      v101 = (_QWORD *)(*(_QWORD *)this + 528LL);
      v101[1] = v101;
      *v101 = v101;
      *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
      if ( v150 )
        *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
      if ( v87 && !a10 )
        *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
      v102 = *(_QWORD *)this;
      if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
      {
        *(_WORD *)(v102 + 102) &= ~0x800u;
        *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
        if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
          *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
        else
          *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      }
      else
      {
        *(_DWORD *)(v102 + 64) = v16 * *((_DWORD *)a2 + 2);
        v103 = *(_QWORD *)this;
        if ( (*((_DWORD *)a2 + 6) & 1) != 0 )
        {
          *(_DWORD *)(v103 + 88) = v16;
          *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
        }
        else
        {
          *(_DWORD *)(v103 + 88) = -v16;
          *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                              + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                              - v16;
        }
      }
      if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
        *(_QWORD *)(*(_QWORD *)this + 592LL) = v155;
        *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v155
                                             + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                             - *(_QWORD *)(*(_QWORD *)this + 72LL);
        *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
        v104 = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( v104 && (v105 = *(_QWORD *)(v104 + 72)) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v105 + 8);
          *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
        }
      }
      v106 = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = _InterlockedIncrement((volatile signed __int32 *)&_ulGlobalSurfaceUnique);
      v107 = *(_QWORD *)this;
      v108 = (unsigned int)PsGetCurrentProcessId();
      v157 = KeGetCurrentThread();
      v109 = v108 & 0xFFFFFFFC;
      if ( !(unsigned __int8)KeIsAttachedProcess(v110)
        || (v113 = PsGetCurrentProcess(v112, v111),
            v114 = PsGetProcessSessionIdEx(v113),
            v116 = PsGetCurrentThreadProcess(v115),
            v114 == (unsigned int)PsGetProcessSessionIdEx(v116)) )
      {
        v120 = (__int64 *)PsGetThreadWin32Thread(v157);
        if ( v120 )
        {
          v121 = *v120;
          if ( v121 )
          {
            v122 = *(_QWORD *)(v121 + 72);
            if ( v122 )
              v109 = *(_DWORD *)(v122 + 8);
          }
        }
      }
      v123 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(v118);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v123);
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer((_DWORD)v118, v117, v119, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
      v124 = a8;
      if ( a8 || (unsigned int)HmgIncProcessHandleCountEx(v109, v117, 0LL) )
      {
        v151[0] = 0;
        if ( GdiHandleManager::AcquireEntryIndex(v118, v151) )
        {
          v127 = 11;
          if ( !v124 )
            v127 = 3;
          v106 = ENTRYOBJ::hSetup((struct OBJECT *)v107, 5u, v127, v151[0]);
          TrackObjectReferenceInitialization(
            0,
            *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v107 + 680),
            *(_DWORD *)(v107 + 8));
          LOBYTE(v131) = 5;
          if ( v124 )
            v109 = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(v131, v128, v129, v130);
          EtwTraceGdiCreateHandle((int)v106, EtwGdiHandleType, v109);
        }
        else if ( !v124 )
        {
          HmgDecProcessHandleCount(v109);
        }
      }
      GreReleaseHmgrSemaphore((int)v118, v125, v126);
      if ( v106 )
      {
        v134 = a11;
        *((_DWORD *)this + 3) = a11;
        if ( v134 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        v135 = *(_QWORD *)this;
        *(_QWORD *)(v135 + 32) = **(_QWORD **)this;
        v136 = (struct _EPROCESS *)PsGetCurrentProcess(v135, v133);
        SURFACE::vAppContainerOwner(*(SURFACE **)this, v136);
        if ( v107 )
          _InterlockedDecrement((volatile signed __int32 *)(v107 + 12));
        if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v163 + 1) )
        {
          v137 = v161;
          *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
          v138 = *(_OWORD **)this;
          v139 = v162;
          v138[17] = v137;
          v140 = v163;
          v138[18] = v139;
          v138[19] = v140;
          *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
          return 1LL;
        }
        return v14;
      }
      if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        v156 = *(_QWORD *)(*(_QWORD *)this + 128LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v156);
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      SURFACE::Free(*(PSLIST_ENTRY *)this);
      v12 = pv;
      goto LABEL_222;
    }
    v152 = 0LL;
    v160 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v160);
    if ( (!(unsigned __int8)KeIsAttachedProcess(v36)
       || (v39 = PsGetCurrentProcess(v38, v37),
           v40 = PsGetProcessSessionIdEx(v39),
           v42 = PsGetCurrentThreadProcess(v41),
           v40 == (unsigned int)PsGetProcessSessionIdEx(v42)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      *(_QWORD *)v151 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      *(_QWORD *)v151 = 0LL;
    }
    v43 = (unsigned int)v34;
    v44 = (unsigned __int16)v34;
    v45 = gpHandleManager;
    v166 = 1;
    v46 = v44 | (v43 >> 8) & 0xFF0000;
    if ( v46 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v46,
                                    1)
             + 13) == HIWORD(v46) )
          v46 = (unsigned __int16)v46;
      }
      else
      {
        v46 = (unsigned __int16)v46;
      }
    }
    v47 = *((_QWORD *)v45 + 2);
    v48 = *(_DWORD *)(v47 + 2056);
    if ( v46 >= v48 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
      goto LABEL_157;
    v49 = ((v46 - v48) >> 16) + 1;
    if ( v46 < v48 )
      v49 = 0LL;
    v50 = *(_QWORD *)(v47 + 8 * v49 + 8);
    if ( (_DWORD)v49 )
      v46 += ((1 - (_DWORD)v49) << 16) - v48;
    v51 = 0LL;
    if ( v46 < *(_DWORD *)(v50 + 20) )
    {
      v156 = 16LL * (unsigned __int8)v46;
      v52 = *(_QWORD **)(v50 + 24);
      v164 = 8 * ((unsigned __int64)v46 >> 8);
      Process = (PEPROCESS)(v156 + *(_QWORD *)(*v52 + v164));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(Process, 0LL);
      if ( v46 < *(_DWORD *)(v50 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v50 + 24) + v164) + v156 + 8) )
      {
        v53 = 24LL * v46;
        *(_DWORD *)(*(_QWORD *)v50 + v53 + 8) |= 1u;
        v51 = (unsigned __int16 *)(v53 + *(_QWORD *)v50);
      }
      else
      {
        ExReleasePushLockExclusiveEx(Process, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v165 = v51;
    if ( v51 )
    {
      _m_prefetchw(v51 + 4);
      v167 = *((_DWORD *)v51 + 2);
      v54 = v167 & 0xFFFFFFFE;
      if ( (v167 & 0xFFFFFFFE) == (v160 & 0xFFFFFFFC)
        || !v54
        || *(_QWORD *)v151 && v54 == *(_DWORD *)(*(_QWORD *)v151 + 8LL) )
      {
        v55 = *((_BYTE *)v51 + 15);
        if ( (v55 & 0x20) == 0 )
        {
          if ( (v55 & 0x40) == 0 )
          {
LABEL_114:
            if ( *((_BYTE *)v51 + 14) == 8 && v51[6] == WORD1(v157) )
            {
              v64 = *(_DWORD *)v51 & 0xFFFFFF;
              if ( v64 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              *v51,
                                              1)
                       + 13) == HIWORD(v64) )
                    v64 = (unsigned __int16)v64;
                }
                else
                {
                  v64 = *v51;
                }
              }
              v65 = *((_QWORD *)gpHandleManager + 2);
              v66 = *(_DWORD *)(v65 + 2056);
              if ( v64 >= v66 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16) )
              {
                v69 = 0LL;
                ++MEMORY[8];
              }
              else
              {
                v67 = ((v64 - v66) >> 16) + 1;
                if ( v64 < v66 )
                  v67 = 0LL;
                v68 = *(_QWORD *)(v65 + 8 * v67 + 8);
                if ( (_DWORD)v67 )
                  v64 += ((1 - (_DWORD)v67) << 16) - v66;
                if ( v64 >= *(_DWORD *)(v68 + 20) )
                {
                  ++MEMORY[8];
                  v69 = 0LL;
                }
                else
                {
                  v69 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v68 + 24) + 8 * ((unsigned __int64)v64 >> 8))
                                  + 16LL * (unsigned __int8)v64
                                  + 8);
                  ++*(_DWORD *)(v69 + 8);
                }
              }
            }
            else
            {
              v69 = v152;
            }
            v70 = *(_DWORD *)v51 & 0xFFFFFF;
            if ( v70 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v51,
                                            1)
                     + 13) == HIWORD(v70) )
                  v70 = (unsigned __int16)v70;
              }
              else
              {
                v70 = *v51;
              }
            }
            v71 = gpHandleManager;
            v72 = *((_QWORD *)gpHandleManager + 2);
            v73 = *(_DWORD *)(v72 + 2056);
            if ( v70 >= v73 + ((*(unsigned __int16 *)(v72 + 2) + 0xFFFF) << 16) )
              goto LABEL_143;
            v74 = ((v70 - v73) >> 16) + 1;
            if ( v70 < v73 )
              v74 = 0LL;
            v75 = *(_QWORD *)(v72 + 8 * v74 + 8);
            if ( (_DWORD)v74 )
              v70 += ((1 - (_DWORD)v74) << 16) - v73;
            if ( v70 >= *(_DWORD *)(v75 + 20) )
LABEL_143:
              v76 = 0LL;
            else
              v76 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v75 + 24) + 8 * ((unsigned __int64)v70 >> 8))
                               + 16LL * (unsigned __int8)v70
                               + 8);
            v77 = (unsigned __int16)*v76 | (*v76 >> 8) & 0xFF0000;
            if ( v77 >= 0x10000 )
            {
              v78 = *(_DWORD *)gpHandleManager <= 0x10000u;
              LODWORD(v152) = (unsigned __int16)*v76;
              if ( v78 )
              {
                v77 = (unsigned __int16)v77;
              }
              else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                               (unsigned __int16)v77,
                                               1)
                        + 13) == HIWORD(v77) )
              {
                v77 = v152;
              }
            }
            v79 = *((_QWORD *)v71 + 2);
            v80 = *(_DWORD *)(v79 + 2056);
            if ( v77 < v80 + ((*(unsigned __int16 *)(v79 + 2) + 0xFFFF) << 16) )
            {
              v81 = ((v77 - v80) >> 16) + 1;
              if ( v77 < v80 )
                v81 = 0LL;
              v82 = *(_QWORD *)(v79 + 8 * v81 + 8);
              if ( (_DWORD)v81 )
                v77 += ((1 - (_DWORD)v81) << 16) - v80;
              *(_DWORD *)(*(_QWORD *)v82 + 24LL * v77 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v82 + 24) + 8 * ((unsigned __int64)v77 >> 8)) + 16LL * (unsigned __int8)v77,
                0LL);
              KeLeaveCriticalRegion();
            }
            KeLeaveCriticalRegion();
            if ( v69 )
            {
              v83 = 1;
              goto LABEL_160;
            }
LABEL_159:
            v83 = 0;
LABEL_160:
            v84 = *(_QWORD *)this;
            if ( v83 )
            {
              *(_QWORD *)(v84 + 128) = v69;
            }
            else
            {
              *(_QWORD *)(v84 + 128) = 0LL;
              if ( v69 )
                HmgDecrementShareReferenceCountEx(v69, 0LL);
            }
            goto LABEL_165;
          }
          v56 = gpHandleManager;
          v57 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v51 & 0xFFFFFF);
          v58 = *((_QWORD *)v56 + 2);
          v59 = v57;
          v60 = *(_DWORD *)(v58 + 2056);
          if ( v57 >= v60 + ((*(unsigned __int16 *)(v58 + 2) + 0xFFFF) << 16) )
            goto LABEL_109;
          v61 = ((v57 - v60) >> 16) + 1;
          if ( v57 < v60 )
            v61 = 0LL;
          v62 = *(_QWORD *)(v58 + 8 * v61 + 8);
          if ( (_DWORD)v61 )
            v59 = ((1 - (_DWORD)v61) << 16) - v60 + v57;
          if ( (unsigned int)v59 >= *(_DWORD *)(v62 + 20) )
LABEL_109:
            v63 = 0LL;
          else
            v63 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * (v59 >> 8)) + 16LL * (unsigned __int8)v59 + 8);
          if ( *(_WORD *)(v63 + 12) && *(struct _KTHREAD **)(v63 + 16) == KeGetCurrentThread() )
            goto LABEL_113;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v165);
      if ( v166 )
      {
LABEL_113:
        v51 = v165;
        goto LABEL_114;
      }
    }
    else
    {
LABEL_157:
      KeLeaveCriticalRegion();
    }
    v69 = v152;
    goto LABEL_159;
  }
  v12 = pv;
LABEL_223:
  if ( v12 || (v14 = 0, Object) )
  {
    v141 = *((_DWORD *)a2 + 6);
    if ( (v141 & 8) != 0 )
    {
      if ( (v141 & 0x80u) == 0 )
      {
        EngFreeUserMem(v12);
        return 0LL;
      }
      v144 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !*(_QWORD *)(v144 + 72) )
        return 0LL;
      v145 = pv;
      v146 = PsGetCurrentProcess(v143, v142);
      MmUnmapViewOfSection(v146, v145);
      v147 = *(_QWORD *)(v144 + 72);
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v147 + 8), &Process) >= 0 )
      {
        MmUnmapViewOfSection(Process, v155);
        ObfDereferenceObject(Process);
      }
      v148 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      goto LABEL_237;
    }
    if ( (v169 & 0x800) != 0 )
    {
      W32PIDLOCK::vCleanUp((REGION **)&v161);
      if ( v150 )
        return 0LL;
      v148 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_237:
      ObfDereferenceObject(v148);
      return 0LL;
    }
    if ( (v169 & 0x10) != 0 )
    {
      vFreeKernelSection(v12);
      return 0LL;
    }
    v14 = 0;
    if ( v168 && v12 )
      Win32FreePool(v12);
  }
  return v14;
}
