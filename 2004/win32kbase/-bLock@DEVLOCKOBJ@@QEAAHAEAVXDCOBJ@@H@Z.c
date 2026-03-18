/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C007D350
 * Callers:
 *     GreGetClipBox @ 0x1C007C550 (GreGetClipBox.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0086DD0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C008AA40 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0140460 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  __int64 v3; // r13
  int v7; // eax
  int v8; // r15d
  PERESOURCE v9; // rcx
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
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rax
  struct _KTHREAD *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _KTHREAD *v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  int v42; // edx
  __int64 v43; // rcx
  DC *v44; // rdi
  int v45; // edx
  bool v46; // zf
  struct _KTHREAD *v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  int v55; // eax
  __int64 v56; // rbp
  __int64 v57; // rax
  struct _KTHREAD *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rax
  struct _KTHREAD *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rax
  int v69; // r12d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  GdiHandleManager *v75; // r15
  unsigned int v76; // edi
  __int64 v77; // r15
  unsigned int v78; // edx
  __int64 v79; // rcx
  __int64 v80; // r15
  unsigned __int16 *v81; // rsi
  int v82; // ecx
  unsigned int v83; // ecx
  struct _KTHREAD *v84; // rbp
  unsigned int v85; // edi
  __int64 v86; // rdx
  unsigned int v87; // r8d
  __int64 v88; // rcx
  __int64 v89; // r9
  __int16 v90; // ax
  unsigned int v91; // edi
  GdiHandleManager *v92; // rsi
  __int64 v93; // rdx
  unsigned int v94; // r8d
  __int64 v95; // rcx
  __int64 v96; // r9
  _DWORD *v97; // rdx
  int v98; // eax
  unsigned int v99; // edi
  __int64 v100; // rdx
  unsigned int v101; // r8d
  __int64 v102; // rcx
  __int64 v103; // r10
  __int64 v104; // rcx
  DC *v105; // rdi
  int v106; // eax
  __int64 v107; // rcx
  int v108; // ecx
  __int64 v109; // rcx
  HSEMAPHORE v110; // r8
  struct _ERESOURCE *v111; // rdi
  HSEMAPHORE v112; // rcx
  __int64 v113; // rcx
  int v114; // r8d
  int v115; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v118; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v120; // rax
  int v121; // edi
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // edi
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  int v129; // edi
  __int64 v130; // rcx
  __int64 v131; // rax
  struct _ERESOURCE *v132; // rcx
  __int64 v133; // rcx
  struct _ERESOURCE *v134; // rcx
  __int64 v135; // rax
  int v136; // edi
  __int64 v137; // rax
  __int64 v138; // rax
  int v139; // edi
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // edi
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rax
  int v148; // edi
  __int64 v149; // rcx
  __int64 v150; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v152; // rdi
  unsigned int v153; // eax
  __int64 v154; // r9
  unsigned __int64 v155; // rdx
  unsigned int v156; // r8d
  __int64 v157; // rcx
  __int64 v158; // r10
  __int64 v159; // rdx
  int v160; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v162; // rcx
  unsigned __int64 v163; // [rsp+30h] [rbp-78h]
  __int64 v164; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v165; // [rsp+40h] [rbp-68h] BYREF
  int v166; // [rsp+48h] [rbp-60h]
  int v167; // [rsp+4Ch] [rbp-5Ch]
  __int64 v168; // [rsp+B0h] [rbp+8h]
  __int64 v169; // [rsp+B8h] [rbp+10h]
  __int64 v170; // [rsp+C8h] [rbp+20h] BYREF

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
    if ( !qword_1C0251780
      || (int)qword_1C0251780() < 0
      || !qword_1C0251788
      || (v7 = qword_1C0251788(a2, (char *)this + 64, (char *)this + 56, (char *)this + 28), v7 != 1) )
    {
      LOBYTE(v7) = 0;
    }
    if ( !(_BYTE)v7 )
      return 0LL;
  }
  if ( qword_1C0251210 && (int)((__int64 (*)(void))qword_1C0251210)() >= 0 && qword_1C0251218 )
    qword_1C0251218(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v9 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ((void (*)(void))ExEnterPriorityRegionAndAcquireResourceShared)();
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer((_DWORD)v9, (unsigned int)&LockAcquireShared, a3, (__int64)ghsemDynamicModeChange);
    *((_DWORD *)this + 6) |= 8u;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess(v9)
      && (CurrentProcess = PsGetCurrentProcess(v12, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v118),
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
          McTemplateK0pz_EtwWriteTransfer(v17, (unsigned int)&LockAcquireShared, v16, (__int64)ghsemGreLock);
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
      || (v22 = *(_QWORD *)(v19 + 24), (*(_DWORD *)(v22 + 40) & 0x1000000) != 0) )
    {
      v110 = (HSEMAPHORE)*((_QWORD *)v18 + 8);
      *(_QWORD *)this = v110;
      v111 = (struct _ERESOURCE *)v110;
      v112 = (HSEMAPHORE)*((_QWORD *)*a2 + 6);
      *((_QWORD *)this + 2) = v112;
      if ( v8 == 1 && v110 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, (int)v110);
        v112 = ghsemGreLock;
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion(v113);
        }
        v111 = *(struct _ERESOURCE **)this;
        v8 = 0;
      }
      if ( v111 )
      {
        PsEnterPriorityRegion(v112);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v111);
        v111 = *(struct _ERESOURCE **)this;
      }
      v114 = 11;
      if ( v111 == (struct _ERESOURCE *)ghsemGreLock )
        v114 = 2;
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", (int)v111, v114);
      v115 = *((_DWORD *)this + 6);
      if ( (v115 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v115 | 0x200;
    }
    v23 = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess(v22)
      && (v120 = PsGetCurrentProcess(v25, v24),
          v121 = PsGetProcessSessionIdEx(v120),
          v123 = PsGetCurrentThreadProcess(v122),
          v121 != (unsigned int)PsGetProcessSessionIdEx(v123))
      || (v26 = (__int64 *)PsGetThreadWin32Thread(v23)) == 0LL
      || (v29 = *v26) == 0
      || !*(_DWORD *)(v29 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v30 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v27)
        || (v124 = PsGetCurrentProcess(v32, v31),
            v125 = PsGetProcessSessionIdEx(v124),
            v127 = PsGetCurrentThreadProcess(v126),
            v125 == (unsigned int)PsGetProcessSessionIdEx(v127)) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v30);
        if ( v33 )
        {
          v35 = *v33;
          if ( v35 )
          {
            *(_QWORD *)(v35 + 320) = 0LL;
            *(_QWORD *)(v35 + 312) = 0LL;
          }
        }
      }
      v36 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v34)
        || (v128 = PsGetCurrentProcess(v38, v37),
            v129 = PsGetProcessSessionIdEx(v128),
            v131 = PsGetCurrentThreadProcess(v130),
            v129 == (unsigned int)PsGetProcessSessionIdEx(v131)) )
      {
        v39 = (__int64 *)PsGetThreadWin32Thread(v36);
        if ( v39 )
        {
          v40 = *v39;
          if ( v40 )
            ++*(_DWORD *)(v40 + 104);
        }
      }
      v41 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v41, (unsigned int)&LockAcquireShared, v28, (__int64)ghsemDCVisRgn);
    }
    v42 = *((_DWORD *)*a2 + 9);
    if ( (v42 & 0x1000) != 0 && (v42 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v28);
        v132 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
          goto LABEL_211;
      }
      goto LABEL_212;
    }
  }
  else
  {
    v59 = KeGetCurrentThread();
    if ( (unsigned __int8)((__int64 (*)(void))KeIsAttachedProcess)()
      && (v135 = PsGetCurrentProcess(v61, v60),
          v136 = PsGetProcessSessionIdEx(v135),
          v137 = ((__int64 (*)(void))PsGetCurrentThreadProcess)(),
          v136 != (unsigned int)PsGetProcessSessionIdEx(v137))
      || (v62 = (__int64 *)PsGetThreadWin32Thread(v59)) == 0LL
      || (v63 = *v62) == 0
      || !*(_DWORD *)(v63 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v64 = KeGetCurrentThread();
      if ( !(unsigned __int8)((__int64 (*)(void))KeIsAttachedProcess)()
        || (v138 = PsGetCurrentProcess(v66, v65),
            v139 = PsGetProcessSessionIdEx(v138),
            v140 = ((__int64 (*)(void))PsGetCurrentThreadProcess)(),
            v139 == (unsigned int)PsGetProcessSessionIdEx(v140)) )
      {
        v67 = (__int64 *)PsGetThreadWin32Thread(v64);
        if ( v67 )
        {
          v68 = *v67;
          if ( v68 )
            ++*(_DWORD *)(v68 + 104);
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
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v28);
        v132 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
LABEL_211:
          ExReleaseResourceAndLeaveCriticalRegion(v132);
          PsLeavePriorityRegion(v133);
        }
      }
LABEL_212:
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v28);
      v134 = (struct _ERESOURCE *)ghsemGreLock;
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
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v28);
      if ( ghsemDCVisRgn )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
        PsLeavePriorityRegion(v141);
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v28);
    v134 = (struct _ERESOURCE *)ghsemGreLock;
    if ( !ghsemGreLock )
      return 0LL;
LABEL_227:
    ExReleaseResourceAndLeaveCriticalRegion(v134);
    PsLeavePriorityRegion(v142);
    return 0LL;
  }
LABEL_57:
  v43 = *((unsigned int *)this + 6);
  if ( (v43 & 0x20000) == 0 )
  {
    v44 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (v43 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v45 = *((_DWORD *)v44 + 10);
        v43 = 1016LL;
        if ( (v45 & 1) != 0 )
          v43 = 1024LL;
        v46 = (*((_DWORD *)v44 + 9) & 0x4000) == 0;
        *((_DWORD *)v44 + 256) = *(_DWORD *)((char *)v44 + v43);
        *((_DWORD *)v44 + 257) = *(_DWORD *)((char *)v44 + v43 + 4);
        *((_DWORD *)v44 + 262) = *((_DWORD *)v44 + 258);
        *((_DWORD *)v44 + 263) = *((_DWORD *)v44 + 259);
        *((_DWORD *)v44 + 264) = *((_DWORD *)v44 + 260);
        *((_DWORD *)v44 + 265) = *((_DWORD *)v44 + 261);
        *((_DWORD *)v44 + 10) = v45 | 1;
        if ( !v46 )
        {
          v43 = *((_QWORD *)v44 + 62);
          if ( *(_QWORD *)(v43 + 248) || (*(_DWORD *)(v43 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v43 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v44 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v44 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v47 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v43)
        || (v143 = PsGetCurrentProcess(v49, v48),
            v144 = PsGetProcessSessionIdEx(v143),
            v146 = PsGetCurrentThreadProcess(v145),
            v144 == (unsigned int)PsGetProcessSessionIdEx(v146)) )
      {
        v50 = (__int64 *)PsGetThreadWin32Thread(v47);
        if ( v50 )
        {
          v51 = *v50;
          if ( *v50 )
          {
            *(_QWORD *)(v51 + 312) = (char *)this + 32;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v51 + 328) |= 1u;
              *((_QWORD *)*a2 + 245) = 0LL;
              v108 = (int)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v108,
                  (unsigned int)&LockAcquireShared,
                  v28,
                  (__int64)ghsemVisRgnUniqueness);
              *(_DWORD *)(v51 + 336) = giVisRgnUniqueness;
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(v108, (unsigned int)&LockRelease, v28, (__int64)ghsemVisRgnUniqueness);
              v43 = (__int64)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
                PsLeavePriorityRegion(v109);
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
      McTemplateK0pz_EtwWriteTransfer(v43, (unsigned int)&LockRelease, v28, (__int64)ghsemDCVisRgn);
    v43 = (__int64)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v52);
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v43, (unsigned int)&LockRelease, v28, (__int64)ghsemGreLock);
    v43 = (__int64)ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion(v53);
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  if ( qword_1C0251210 && (int)qword_1C0251210(v43) >= 0 && qword_1C0251218 )
    v54 = qword_1C0251218(this, a2);
  else
    v54 = 0;
  v55 = *((_DWORD *)this + 6);
  if ( v54 )
  {
    if ( (v55 & 0x1000) == 0 && (v55 & 0x800000) == 0 )
      return 1LL;
    v56 = *(_QWORD *)*a2;
    v57 = *((_QWORD *)this + 4);
    if ( v57 )
      goto LABEL_88;
    v69 = *((_DWORD *)this + 11);
    v170 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v170);
    if ( (!(unsigned __int8)KeIsAttachedProcess(v71)
       || (v147 = PsGetCurrentProcess(v73, v72),
           v148 = PsGetProcessSessionIdEx(v147),
           v150 = PsGetCurrentThreadProcess(v149),
           v148 == (unsigned int)PsGetProcessSessionIdEx(v150)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v74 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v74 = 0LL;
    }
    v75 = gpHandleManager;
    v76 = (unsigned __int16)v56 | ((unsigned int)v56 >> 8) & 0xFF0000;
    v168 = v74;
    v166 = 1;
    if ( v76 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v56,
                  1);
        v74 = v168;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v76) )
          v76 = (unsigned __int16)v56;
      }
      else
      {
        v76 = (unsigned __int16)v56;
      }
    }
    v77 = *((_QWORD *)v75 + 2);
    v78 = *(_DWORD *)(v77 + 2056);
    if ( v76 >= v78 + ((*(unsigned __int16 *)(v77 + 2) + 0xFFFF) << 16) )
      goto LABEL_286;
    v79 = ((v76 - v78) >> 16) + 1;
    if ( v76 < v78 )
      v79 = 0LL;
    v80 = *(_QWORD *)(v77 + 8 * v79 + 8);
    if ( (_DWORD)v79 )
      v76 += ((1 - (_DWORD)v79) << 16) - v78;
    v81 = 0LL;
    if ( v76 < *(_DWORD *)(v80 + 20) )
    {
      v164 = 16LL * (unsigned __int8)v76;
      v163 = 8 * ((unsigned __int64)v76 >> 8);
      v169 = v164 + *(_QWORD *)(**(_QWORD **)(v80 + 24) + v163);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v169, 0LL);
      if ( v76 < *(_DWORD *)(v80 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v80 + 24) + v163) + v164 + 8) )
      {
        *(_DWORD *)(*(_QWORD *)v80 + 24LL * v76 + 8) |= 1u;
        v81 = (unsigned __int16 *)(24LL * v76 + *(_QWORD *)v80);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v169, 0LL);
        KeLeaveCriticalRegion();
      }
      v74 = v168;
    }
    v165 = v81;
    if ( !v81 )
    {
LABEL_286:
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 4) = 0LL;
      goto LABEL_287;
    }
    _m_prefetchw(v81 + 4);
    v82 = *((_DWORD *)v81 + 2);
    v167 = v82;
    if ( !v69 )
    {
      v83 = v82 & 0xFFFFFFFE;
      if ( v83 != (v170 & 0xFFFFFFFC) && v83 && (!v74 || v83 != *(_DWORD *)(v74 + 8)) )
        goto LABEL_260;
      if ( (*((_BYTE *)v81 + 15) & 0x20) != 0 )
        goto LABEL_260;
    }
    if ( (*((_BYTE *)v81 + 15) & 0x40) == 0 )
      goto LABEL_126;
    v152 = gpHandleManager;
    v153 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v81 & 0xFFFFFF);
    v154 = *((_QWORD *)v152 + 2);
    v155 = v153;
    v156 = *(_DWORD *)(v154 + 2056);
    if ( v153 >= v156 + ((*(unsigned __int16 *)(v154 + 2) + 0xFFFF) << 16) )
      goto LABEL_257;
    v157 = ((v153 - v156) >> 16) + 1;
    if ( v153 < v156 )
      v157 = 0LL;
    v158 = *(_QWORD *)(v154 + 8 * v157 + 8);
    if ( (_DWORD)v157 )
      v155 = ((1 - (_DWORD)v157) << 16) - v156 + v153;
    if ( (unsigned int)v155 >= *(_DWORD *)(v158 + 20) )
LABEL_257:
      v159 = 0LL;
    else
      v159 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v158 + 24) + 8 * (v155 >> 8)) + 16LL * (unsigned __int8)v155 + 8);
    if ( !*(_WORD *)(v159 + 12) || *(struct _KTHREAD **)(v159 + 16) != KeGetCurrentThread() )
    {
LABEL_260:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v165);
      if ( !v166 )
        goto LABEL_162;
    }
    v81 = v165;
LABEL_126:
    if ( *((_BYTE *)v81 + 14) == 1 && v81[6] == WORD1(v56) && (!v69 || (*((_BYTE *)v81 + 15) & 0x20) != 0) )
    {
      v84 = KeGetCurrentThread();
      v81 = v165;
      v85 = *(_DWORD *)v165 & 0xFFFFFF;
      if ( v85 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v165,
                                      1)
               + 13) == HIWORD(v85) )
            v85 = (unsigned __int16)v85;
        }
        else
        {
          v85 = *v165;
        }
      }
      v86 = *((_QWORD *)gpHandleManager + 2);
      v87 = *(_DWORD *)(v86 + 2056);
      if ( v85 >= v87 + ((*(unsigned __int16 *)(v86 + 2) + 0xFFFF) << 16) )
        goto LABEL_267;
      v88 = ((v85 - v87) >> 16) + 1;
      if ( v85 < v87 )
        v88 = 0LL;
      v89 = *(_QWORD *)(v86 + 8 * v88 + 8);
      if ( (_DWORD)v88 )
        v85 += ((1 - (_DWORD)v88) << 16) - v87;
      if ( v85 >= *(_DWORD *)(v89 + 20) )
LABEL_267:
        v3 = 0LL;
      else
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v89 + 24) + 8 * ((unsigned __int64)v85 >> 8))
                       + 16LL * (unsigned __int8)v85
                       + 8);
      v90 = *(_WORD *)(v3 + 12);
      if ( v90 && *(struct _KTHREAD **)(v3 + 16) != v84 )
      {
        v3 = 0LL;
      }
      else
      {
        *(_QWORD *)(v3 + 16) = v84;
        *(_WORD *)(v3 + 12) = v90 + 1;
      }
    }
    v91 = *(_DWORD *)v81 & 0xFFFFFF;
    if ( v91 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v81,
                                    1)
             + 13) == HIWORD(v91) )
          v91 = (unsigned __int16)v91;
      }
      else
      {
        v91 = *v81;
      }
    }
    v92 = gpHandleManager;
    v93 = *((_QWORD *)gpHandleManager + 2);
    v94 = *(_DWORD *)(v93 + 2056);
    if ( v91 >= v94 + ((*(unsigned __int16 *)(v93 + 2) + 0xFFFF) << 16) )
      goto LABEL_272;
    v95 = ((v91 - v94) >> 16) + 1;
    if ( v91 < v94 )
      v95 = 0LL;
    v96 = *(_QWORD *)(v93 + 8 * v95 + 8);
    if ( (_DWORD)v95 )
      v91 += ((1 - (_DWORD)v95) << 16) - v94;
    if ( v91 >= *(_DWORD *)(v96 + 20) )
LABEL_272:
      v97 = 0LL;
    else
      v97 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + 8 * ((unsigned __int64)v91 >> 8))
                       + 16LL * (unsigned __int8)v91
                       + 8);
    v98 = (unsigned __int16)*v97;
    v99 = v98 | (*v97 >> 8) & 0xFF0000;
    if ( v99 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v98,
                                    1)
             + 13) == HIWORD(v99) )
          v99 = (unsigned __int16)v99;
      }
      else
      {
        v99 = (unsigned __int16)v98;
      }
    }
    v100 = *((_QWORD *)v92 + 2);
    v101 = *(_DWORD *)(v100 + 2056);
    if ( v99 < v101 + ((*(unsigned __int16 *)(v100 + 2) + 0xFFFF) << 16) )
    {
      v102 = ((v99 - v101) >> 16) + 1;
      if ( v99 < v101 )
        v102 = 0LL;
      v103 = *(_QWORD *)(v100 + 8 * v102 + 8);
      if ( (_DWORD)v102 )
        v99 += ((1 - (_DWORD)v102) << 16) - v101;
      *(_DWORD *)(*(_QWORD *)v103 + 24LL * v99 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v103 + 24) + 8 * ((unsigned __int64)v99 >> 8)) + 16LL * (unsigned __int8)v99,
        0LL);
      KeLeaveCriticalRegion();
    }
    v166 = 0;
    v165 = 0LL;
    KeLeaveCriticalRegion();
LABEL_162:
    *((_QWORD *)this + 4) = v3;
    if ( v3 )
    {
      if ( !*((_DWORD *)this + 11) )
        goto LABEL_164;
      if ( (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 40LL) & 0x8000) != 0 )
      {
        v160 = *(_DWORD *)(v3 + 2096);
        if ( v160 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
LABEL_164:
          v105 = (DC *)*((_QWORD *)this + 4);
          if ( (*((_DWORD *)v105 + 11) & 2) == 0 )
          {
            if ( !*((_DWORD *)this + 11) )
            {
              UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
              if ( UserAttr )
              {
                if ( !(unsigned int)DC::SaveAttributes(v105, UserAttr) )
                {
                  v106 = 0;
                  goto LABEL_166;
                }
              }
            }
            *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
            *((_DWORD *)this + 10) = 1;
          }
          v106 = 1;
LABEL_166:
          v107 = *((_QWORD *)this + 4);
          if ( !v106 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v107 + 12));
            *((_QWORD *)this + 4) = 0LL;
            return 1LL;
          }
          if ( (*(_DWORD *)(v107 + 520) & 4) != 0 )
            DC::vMarkTransformDirty((DC *)v107);
          goto LABEL_169;
        }
        v3 = *((_QWORD *)this + 4);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
      *((_QWORD *)this + 4) = 0LL;
      return 1LL;
    }
LABEL_287:
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled(v104) || (unsigned __int8)PsIsWin32KFilterEnabled(v162) )
      PsGetWin32KFilterSet(v162);
LABEL_169:
    v57 = *((_QWORD *)this + 4);
    if ( !v57 )
      return 1LL;
    *((_BYTE *)this + 49) = 0;
LABEL_88:
    *(_DWORD *)(v57 + 40) |= 2u;
    *((_BYTE *)this + 48) = 1;
    return 1LL;
  }
  *((_DWORD *)this + 6) = v55 & 0xFFFFFFFE;
  return 0LL;
}
