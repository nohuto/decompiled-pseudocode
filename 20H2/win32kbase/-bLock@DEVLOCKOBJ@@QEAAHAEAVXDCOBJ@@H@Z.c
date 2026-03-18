/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370
 * Callers:
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 * Callees:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0040B20 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0044FB0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C013E110 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  __int64 v3; // r13
  int v7; // eax
  int v8; // r15d
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rdi
  int v16; // r8d
  int v17; // ecx
  DC *v18; // r9
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r8
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  int v26; // r8d
  __int64 v27; // rax
  struct _KTHREAD *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rax
  struct _KTHREAD *v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  DC *v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rdi
  int v51; // ecx
  int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // rax
  struct _KTHREAD *v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 v60; // rax
  struct _KTHREAD *v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rax
  int v66; // r12d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  GdiHandleManager *v71; // r15
  unsigned int v72; // edi
  __int64 v73; // r15
  unsigned int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // r15
  unsigned __int16 *v77; // rsi
  int v78; // ecx
  unsigned int v79; // ecx
  struct _KTHREAD *v80; // rbp
  unsigned int v81; // edi
  __int64 v82; // rdx
  unsigned int v83; // r8d
  __int64 v84; // rcx
  __int64 v85; // r9
  __int16 v86; // ax
  unsigned int v87; // edi
  GdiHandleManager *v88; // rsi
  __int64 v89; // rdx
  unsigned int v90; // r8d
  __int64 v91; // rcx
  __int64 v92; // r9
  _DWORD *v93; // rdx
  int v94; // eax
  unsigned int v95; // edi
  __int64 v96; // rdx
  unsigned int v97; // r8d
  __int64 v98; // rcx
  __int64 v99; // r10
  DC *v100; // rdi
  int v101; // eax
  __int64 v102; // rcx
  int v103; // ecx
  HSEMAPHORE v104; // r8
  struct _ERESOURCE *v105; // rdi
  __int64 v106; // r8
  int v107; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v111; // rax
  int v112; // edi
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // edi
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // edi
  __int64 v119; // rax
  struct _ERESOURCE *v120; // rcx
  struct _ERESOURCE *v121; // rcx
  __int64 v122; // rax
  int v123; // edi
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // edi
  __int64 v127; // rax
  __int64 v128; // rax
  int v129; // edi
  __int64 v130; // rax
  __int64 v131; // rax
  int v132; // edi
  __int64 v133; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v135; // rdi
  unsigned int v136; // eax
  __int64 v137; // r9
  unsigned __int64 v138; // rdx
  unsigned int v139; // r8d
  __int64 v140; // rcx
  __int64 v141; // r10
  __int64 v142; // rdx
  int v143; // edi
  struct _DC_ATTR *UserAttr; // rax
  unsigned __int64 v145; // [rsp+30h] [rbp-78h]
  __int64 v146; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v147; // [rsp+40h] [rbp-68h] BYREF
  int v148; // [rsp+48h] [rbp-60h]
  int v149; // [rsp+4Ch] [rbp-5Ch]
  __int64 v150; // [rsp+B0h] [rbp+8h]
  __int64 v151; // [rsp+B8h] [rbp+10h]
  __int64 v152; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0LL;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( !qword_1C024F780
      || (int)qword_1C024F780() < 0
      || !qword_1C024F788
      || (v7 = qword_1C024F788(a2, (char *)this + 64, (char *)this + 56, (char *)this + 28), v7 != 1) )
    {
      LOBYTE(v7) = 0;
    }
    if ( !(_BYTE)v7 )
      return 0LL;
  }
  if ( qword_1C024F210 && (int)qword_1C024F210() >= 0 && qword_1C024F218 )
    qword_1C024F218(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v9 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v9,
        (unsigned int)&LockAcquireShared,
        a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (CurrentProcess = PsGetCurrentProcess(v12, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess))
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v14 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v14 + 104) )
    {
      v15 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v15) )
      {
        v17 = (int)ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v17,
            (unsigned int)&LockAcquireShared,
            v16,
            (_DWORD)ghsemGreLock,
            (__int64)L"ghsemGreLock");
        v8 = 1;
      }
    }
    v18 = *a2;
    v19 = *((_QWORD *)*a2 + 6);
    if ( (**((_DWORD **)*a2 + 122) & 1) == 0 && (*((_DWORD *)v18 + 9) & 0x8000) == 0
      || (v20 = *(_DWORD *)(v19 + 40), (v20 & 1) == 0)
      || (v20 & 0x1000000) != 0
      || *(_DWORD *)(v19 + 2612) != 5
      && (v20 & 0x20000) == 0
      && ((v21 = *(_QWORD *)(v19 + 2576), ((v21 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v21 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v19 + 2128) & 0x400) != 0
      || (v20 & 0x48000000) != 0
      || (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v19 + 24) + 40LL) & 0x1000000) != 0 )
    {
      v104 = (HSEMAPHORE)*((_QWORD *)v18 + 8);
      *(_QWORD *)this = v104;
      v105 = (struct _ERESOURCE *)v104;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      if ( v8 == 1 && v104 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v105 = *(struct _ERESOURCE **)this;
        v8 = 0;
      }
      if ( v105 )
      {
        PsEnterPriorityRegion();
        ExEnterCriticalRegionAndAcquireResourceExclusive(v105);
        v105 = *(struct _ERESOURCE **)this;
      }
      v106 = 11LL;
      if ( v105 == (struct _ERESOURCE *)ghsemGreLock )
        v106 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v105, v106);
      v107 = *((_DWORD *)this + 6);
      if ( (v107 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v107 | 0x200;
    }
    v22 = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (v111 = PsGetCurrentProcess(v24, v23),
          v112 = PsGetProcessSessionIdEx(v111),
          v113 = PsGetCurrentThreadProcess(),
          v112 != (unsigned int)PsGetProcessSessionIdEx(v113))
      || (v25 = (__int64 *)PsGetThreadWin32Thread(v22)) == 0LL
      || (v27 = *v25) == 0
      || !*(_DWORD *)(v27 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v28 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v114 = PsGetCurrentProcess(v30, v29),
            v115 = PsGetProcessSessionIdEx(v114),
            v116 = PsGetCurrentThreadProcess(),
            v115 == (unsigned int)PsGetProcessSessionIdEx(v116)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v31 )
        {
          v32 = *v31;
          if ( v32 )
          {
            *(_QWORD *)(v32 + 320) = 0LL;
            *(_QWORD *)(v32 + 312) = 0LL;
          }
        }
      }
      v33 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v117 = PsGetCurrentProcess(v35, v34),
            v118 = PsGetProcessSessionIdEx(v117),
            v119 = PsGetCurrentThreadProcess(),
            v118 == (unsigned int)PsGetProcessSessionIdEx(v119)) )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(v33);
        if ( v36 )
        {
          v37 = *v36;
          if ( v37 )
            ++*(_DWORD *)(v37 + 104);
        }
      }
      v38 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v38,
          (unsigned int)&LockAcquireShared,
          v26,
          (_DWORD)ghsemDCVisRgn,
          (__int64)L"ghsemDCVisRgn");
    }
    v39 = *((_DWORD *)*a2 + 9);
    if ( (v39 & 0x1000) != 0 && (v39 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v120 = (struct _ERESOURCE *)ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
          goto LABEL_211;
      }
      goto LABEL_212;
    }
  }
  else
  {
    v56 = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (v122 = PsGetCurrentProcess(v58, v57),
          v123 = PsGetProcessSessionIdEx(v122),
          v124 = PsGetCurrentThreadProcess(),
          v123 != (unsigned int)PsGetProcessSessionIdEx(v124))
      || (v59 = (__int64 *)PsGetThreadWin32Thread(v56)) == 0LL
      || (v60 = *v59) == 0
      || !*(_DWORD *)(v60 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v61 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v125 = PsGetCurrentProcess(v63, v62),
            v126 = PsGetProcessSessionIdEx(v125),
            v127 = PsGetCurrentThreadProcess(),
            v126 == (unsigned int)PsGetProcessSessionIdEx(v127)) )
      {
        v64 = (__int64 *)PsGetThreadWin32Thread(v61);
        if ( v64 )
        {
          v65 = *v64;
          if ( v65 )
            ++*(_DWORD *)(v65 + 104);
        }
      }
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v120 = (struct _ERESOURCE *)ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
LABEL_211:
          ExReleaseResourceAndLeaveCriticalRegion(v120);
          PsLeavePriorityRegion();
        }
      }
LABEL_212:
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      v121 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ghsemGreLock )
        return 0LL;
      goto LABEL_227;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_57;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( ghsemDCVisRgn )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    v121 = (struct _ERESOURCE *)ghsemGreLock;
    if ( !ghsemGreLock )
      return 0LL;
LABEL_227:
    ExReleaseResourceAndLeaveCriticalRegion(v121);
    PsLeavePriorityRegion();
    return 0LL;
  }
LABEL_57:
  v40 = *((_DWORD *)this + 6);
  if ( (v40 & 0x20000) == 0 )
  {
    v41 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (v40 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v42 = *((_DWORD *)v41 + 10);
        v43 = 1016LL;
        if ( (v42 & 1) != 0 )
          v43 = 1024LL;
        v44 = (*((_DWORD *)v41 + 9) & 0x4000) == 0;
        *((_DWORD *)v41 + 256) = *(_DWORD *)((char *)v41 + v43);
        *((_DWORD *)v41 + 257) = *(_DWORD *)((char *)v41 + v43 + 4);
        *((_DWORD *)v41 + 262) = *((_DWORD *)v41 + 258);
        *((_DWORD *)v41 + 263) = *((_DWORD *)v41 + 259);
        *((_DWORD *)v41 + 264) = *((_DWORD *)v41 + 260);
        *((_DWORD *)v41 + 265) = *((_DWORD *)v41 + 261);
        *((_DWORD *)v41 + 10) = v42 | 1;
        if ( !v44 )
        {
          v45 = *((_QWORD *)v41 + 62);
          if ( *(_QWORD *)(v45 + 248) || (*(_DWORD *)(v45 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v45 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v41 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v41 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v46 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v128 = PsGetCurrentProcess(v48, v47),
            v129 = PsGetProcessSessionIdEx(v128),
            v130 = PsGetCurrentThreadProcess(),
            v129 == (unsigned int)PsGetProcessSessionIdEx(v130)) )
      {
        v49 = (__int64 *)PsGetThreadWin32Thread(v46);
        if ( v49 )
        {
          v50 = *v49;
          if ( *v49 )
          {
            *(_QWORD *)(v50 + 312) = (char *)this + 32;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v50 + 328) |= 1u;
              *((_QWORD *)*a2 + 245) = 0LL;
              v103 = (int)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v103,
                  (unsigned int)&LockAcquireShared,
                  v26,
                  (_DWORD)ghsemVisRgnUniqueness,
                  (__int64)L"ghsemVisRgnUniqueness");
              *(_DWORD *)(v50 + 336) = giVisRgnUniqueness;
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v103,
                  (unsigned int)&LockRelease,
                  v26,
                  (_DWORD)ghsemVisRgnUniqueness,
                  (__int64)L"ghsemVisRgnUniqueness");
              v40 = (int)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
                PsLeavePriorityRegion();
              }
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v40,
        (unsigned int)&LockRelease,
        v26,
        (_DWORD)ghsemDCVisRgn,
        (__int64)L"ghsemDCVisRgn");
    v40 = (int)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v40,
        (unsigned int)&LockRelease,
        v26,
        (_DWORD)ghsemGreLock,
        (__int64)L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  if ( qword_1C024F210 && (int)qword_1C024F210() >= 0 && qword_1C024F218 )
    v51 = qword_1C024F218(this, a2);
  else
    v51 = 0;
  v52 = *((_DWORD *)this + 6);
  if ( v51 )
  {
    if ( (v52 & 0x1000) == 0 && (v52 & 0x800000) == 0 )
      return 1LL;
    v53 = *(_QWORD *)*a2;
    v54 = *((_QWORD *)this + 4);
    if ( v54 )
      goto LABEL_88;
    v66 = *((_DWORD *)this + 11);
    v152 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v152);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v131 = PsGetCurrentProcess(v69, v68),
           v132 = PsGetProcessSessionIdEx(v131),
           v133 = PsGetCurrentThreadProcess(),
           v132 == (unsigned int)PsGetProcessSessionIdEx(v133)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v70 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v70 = 0LL;
    }
    v71 = gpHandleManager;
    v72 = (unsigned __int16)v53 | ((unsigned int)v53 >> 8) & 0xFF0000;
    v150 = v70;
    v148 = 1;
    if ( v72 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v53,
                  1);
        v70 = v150;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v72) )
          v72 = (unsigned __int16)v53;
      }
      else
      {
        v72 = (unsigned __int16)v53;
      }
    }
    v73 = *((_QWORD *)v71 + 2);
    v74 = *(_DWORD *)(v73 + 2056);
    if ( v72 >= v74 + ((*(unsigned __int16 *)(v73 + 2) + 0xFFFF) << 16) )
      goto LABEL_286;
    v75 = ((v72 - v74) >> 16) + 1;
    if ( v72 < v74 )
      v75 = 0LL;
    v76 = *(_QWORD *)(v73 + 8 * v75 + 8);
    if ( (_DWORD)v75 )
      v72 += ((1 - (_DWORD)v75) << 16) - v74;
    v77 = 0LL;
    if ( v72 < *(_DWORD *)(v76 + 20) )
    {
      v146 = 16LL * (unsigned __int8)v72;
      v145 = 8 * ((unsigned __int64)v72 >> 8);
      v151 = v146 + *(_QWORD *)(**(_QWORD **)(v76 + 24) + v145);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v151, 0LL);
      if ( v72 < *(_DWORD *)(v76 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v76 + 24) + v145) + v146 + 8) )
      {
        *(_DWORD *)(*(_QWORD *)v76 + 24LL * v72 + 8) |= 1u;
        v77 = (unsigned __int16 *)(24LL * v72 + *(_QWORD *)v76);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v151, 0LL);
        KeLeaveCriticalRegion();
      }
      v70 = v150;
    }
    v147 = v77;
    if ( !v77 )
    {
LABEL_286:
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 4) = 0LL;
      goto LABEL_287;
    }
    _m_prefetchw(v77 + 4);
    v78 = *((_DWORD *)v77 + 2);
    v149 = v78;
    if ( !v66 )
    {
      v79 = v78 & 0xFFFFFFFE;
      if ( v79 != (v152 & 0xFFFFFFFC) && v79 && (!v70 || v79 != *(_DWORD *)(v70 + 8)) )
        goto LABEL_260;
      if ( (*((_BYTE *)v77 + 15) & 0x20) != 0 )
        goto LABEL_260;
    }
    if ( (*((_BYTE *)v77 + 15) & 0x40) == 0 )
      goto LABEL_126;
    v135 = gpHandleManager;
    v136 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v77 & 0xFFFFFF);
    v137 = *((_QWORD *)v135 + 2);
    v138 = v136;
    v139 = *(_DWORD *)(v137 + 2056);
    if ( v136 >= v139 + ((*(unsigned __int16 *)(v137 + 2) + 0xFFFF) << 16) )
      goto LABEL_257;
    v140 = ((v136 - v139) >> 16) + 1;
    if ( v136 < v139 )
      v140 = 0LL;
    v141 = *(_QWORD *)(v137 + 8 * v140 + 8);
    if ( (_DWORD)v140 )
      v138 = ((1 - (_DWORD)v140) << 16) - v139 + v136;
    if ( (unsigned int)v138 >= *(_DWORD *)(v141 + 20) )
LABEL_257:
      v142 = 0LL;
    else
      v142 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v141 + 24) + 8 * (v138 >> 8)) + 16LL * (unsigned __int8)v138 + 8);
    if ( !*(_WORD *)(v142 + 12) || *(struct _KTHREAD **)(v142 + 16) != KeGetCurrentThread() )
    {
LABEL_260:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v147);
      if ( !v148 )
        goto LABEL_162;
    }
    v77 = v147;
LABEL_126:
    if ( *((_BYTE *)v77 + 14) == 1 && v77[6] == WORD1(v53) && (!v66 || (*((_BYTE *)v77 + 15) & 0x20) != 0) )
    {
      v80 = KeGetCurrentThread();
      v77 = v147;
      v81 = *(_DWORD *)v147 & 0xFFFFFF;
      if ( v81 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v147,
                                      1)
               + 13) == HIWORD(v81) )
            v81 = (unsigned __int16)v81;
        }
        else
        {
          v81 = *v147;
        }
      }
      v82 = *((_QWORD *)gpHandleManager + 2);
      v83 = *(_DWORD *)(v82 + 2056);
      if ( v81 >= v83 + ((*(unsigned __int16 *)(v82 + 2) + 0xFFFF) << 16) )
        goto LABEL_267;
      v84 = ((v81 - v83) >> 16) + 1;
      if ( v81 < v83 )
        v84 = 0LL;
      v85 = *(_QWORD *)(v82 + 8 * v84 + 8);
      if ( (_DWORD)v84 )
        v81 += ((1 - (_DWORD)v84) << 16) - v83;
      if ( v81 >= *(_DWORD *)(v85 + 20) )
LABEL_267:
        v3 = 0LL;
      else
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v85 + 24) + 8 * ((unsigned __int64)v81 >> 8))
                       + 16LL * (unsigned __int8)v81
                       + 8);
      v86 = *(_WORD *)(v3 + 12);
      if ( v86 && *(struct _KTHREAD **)(v3 + 16) != v80 )
      {
        v3 = 0LL;
      }
      else
      {
        *(_QWORD *)(v3 + 16) = v80;
        *(_WORD *)(v3 + 12) = v86 + 1;
      }
    }
    v87 = *(_DWORD *)v77 & 0xFFFFFF;
    if ( v87 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v77,
                                    1)
             + 13) == HIWORD(v87) )
          v87 = (unsigned __int16)v87;
      }
      else
      {
        v87 = *v77;
      }
    }
    v88 = gpHandleManager;
    v89 = *((_QWORD *)gpHandleManager + 2);
    v90 = *(_DWORD *)(v89 + 2056);
    if ( v87 >= v90 + ((*(unsigned __int16 *)(v89 + 2) + 0xFFFF) << 16) )
      goto LABEL_272;
    v91 = ((v87 - v90) >> 16) + 1;
    if ( v87 < v90 )
      v91 = 0LL;
    v92 = *(_QWORD *)(v89 + 8 * v91 + 8);
    if ( (_DWORD)v91 )
      v87 += ((1 - (_DWORD)v91) << 16) - v90;
    if ( v87 >= *(_DWORD *)(v92 + 20) )
LABEL_272:
      v93 = 0LL;
    else
      v93 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v92 + 24) + 8 * ((unsigned __int64)v87 >> 8))
                       + 16LL * (unsigned __int8)v87
                       + 8);
    v94 = (unsigned __int16)*v93;
    v95 = v94 | (*v93 >> 8) & 0xFF0000;
    if ( v95 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v94,
                                    1)
             + 13) == HIWORD(v95) )
          v95 = (unsigned __int16)v95;
      }
      else
      {
        v95 = (unsigned __int16)v94;
      }
    }
    v96 = *((_QWORD *)v88 + 2);
    v97 = *(_DWORD *)(v96 + 2056);
    if ( v95 < v97 + ((*(unsigned __int16 *)(v96 + 2) + 0xFFFF) << 16) )
    {
      v98 = ((v95 - v97) >> 16) + 1;
      if ( v95 < v97 )
        v98 = 0LL;
      v99 = *(_QWORD *)(v96 + 8 * v98 + 8);
      if ( (_DWORD)v98 )
        v95 += ((1 - (_DWORD)v98) << 16) - v97;
      *(_DWORD *)(*(_QWORD *)v99 + 24LL * v95 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v99 + 24) + 8 * ((unsigned __int64)v95 >> 8)) + 16LL * (unsigned __int8)v95,
        0LL);
      KeLeaveCriticalRegion();
    }
    v148 = 0;
    v147 = 0LL;
    KeLeaveCriticalRegion();
LABEL_162:
    *((_QWORD *)this + 4) = v3;
    if ( v3 )
    {
      if ( !*((_DWORD *)this + 11) )
        goto LABEL_164;
      if ( (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 40LL) & 0x8000) != 0 )
      {
        v143 = *(_DWORD *)(v3 + 2096);
        if ( v143 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
LABEL_164:
          v100 = (DC *)*((_QWORD *)this + 4);
          if ( (*((_DWORD *)v100 + 11) & 2) == 0 )
          {
            if ( !*((_DWORD *)this + 11) )
            {
              UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
              if ( UserAttr )
              {
                if ( !(unsigned int)DC::SaveAttributes(v100, UserAttr) )
                {
                  v101 = 0;
                  goto LABEL_166;
                }
              }
            }
            *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
            *((_DWORD *)this + 10) = 1;
          }
          v101 = 1;
LABEL_166:
          v102 = *((_QWORD *)this + 4);
          if ( !v101 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v102 + 12));
            *((_QWORD *)this + 4) = 0LL;
            return 1LL;
          }
          if ( (*(_DWORD *)(v102 + 520) & 4) != 0 )
            DC::vMarkTransformDirty((DC *)v102);
          goto LABEL_169;
        }
        v3 = *((_QWORD *)this + 4);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
      *((_QWORD *)this + 4) = 0LL;
      return 1LL;
    }
LABEL_287:
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_169:
    v54 = *((_QWORD *)this + 4);
    if ( !v54 )
      return 1LL;
    *((_BYTE *)this + 49) = 0;
LABEL_88:
    *(_DWORD *)(v54 + 40) |= 2u;
    *((_BYTE *)this + 48) = 1;
    return 1LL;
  }
  *((_DWORD *)this + 6) = v52 & 0xFFFFFFFE;
  return 0LL;
}
