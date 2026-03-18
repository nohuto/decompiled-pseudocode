/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C007EFD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00919A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00C1DF0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00C1E78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngDeleteDriverObj @ 0x1C014FB50 (EngDeleteDriverObj.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0086540 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0086970 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0086A48 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008A640 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C012B048 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // esi
  int v10; // r15d
  __int64 v11; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  GdiHandleManager *v16; // r14
  unsigned int v17; // ebx
  bool v18; // cc
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int16 *v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  unsigned int v28; // ecx
  char v29; // al
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r15
  unsigned int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rsi
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r9
  unsigned int v42; // eax
  __int64 v43; // rdi
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rax
  char v49; // cl
  int v50; // ebx
  unsigned int v51; // edi
  GdiHandleManager *v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  unsigned int v56; // r9d
  __int64 v57; // rcx
  __int64 v58; // r8
  _DWORD *v59; // r14
  unsigned int v60; // ebx
  __int64 v61; // r8
  GdiHandleEntryDirectory *v62; // rcx
  GdiHandleEntryDirectory *v63; // rsi
  unsigned int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // r10
  __int64 v68; // r11
  int v69; // ecx
  int v70; // r8d
  __int64 v71; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rsi
  __int64 v76; // rdx
  int v77; // ecx
  int v78; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v79; // rdx
  unsigned int v80; // ecx
  unsigned int v81; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v84; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v86; // rbx
  unsigned int v87; // eax
  __int64 v88; // r9
  unsigned __int64 v89; // rdx
  unsigned int v90; // r8d
  __int64 v91; // rcx
  __int64 v92; // r10
  __int64 v93; // rdx
  unsigned int CurrentProcessId; // eax
  char EtwGdiHandleType; // al
  _QWORD *v96; // r9
  int v97; // ecx
  int v98; // r8d
  unsigned int v99; // r13d
  __int64 v100; // [rsp+40h] [rbp-78h] BYREF
  __int64 v101; // [rsp+48h] [rbp-70h]
  __int64 v102; // [rsp+50h] [rbp-68h]
  unsigned __int64 v103; // [rsp+58h] [rbp-60h]
  __int64 v104; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v105; // [rsp+68h] [rbp-50h] BYREF
  int v106; // [rsp+70h] [rbp-48h]
  int v107; // [rsp+74h] [rbp-44h]
  PVOID Object; // [rsp+C0h] [rbp+8h] BYREF
  int v109; // [rsp+D0h] [rbp+18h]
  unsigned int v110; // [rsp+D8h] [rbp+20h]

  v109 = a3;
  v6 = ghsemHmgr;
  v7 = (unsigned int)a1;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a4 & 2) != 0 )
  {
    v11 = 0LL;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v11 = 0LL;
  }
  v100 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v100);
  if ( (!(unsigned __int8)KeIsAttachedProcess(v13)
     || (CurrentProcess = PsGetCurrentProcess(v15, v14),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v84),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v101 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v101 = 0LL;
  }
  v16 = gpHandleManager;
  v106 = 1;
  v17 = (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000;
  if ( v17 >= 0x10000 )
  {
    v18 = *(_DWORD *)gpHandleManager <= 0x10000u;
    v110 = (unsigned __int16)v7;
    if ( v18 )
    {
      v17 = (unsigned __int16)v7;
    }
    else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                     (unsigned __int16)v7,
                                     1)
              + 13) == ((unsigned __int16)v7 | (v7 >> 8) & 0xFF0000) >> 16 )
    {
      v17 = v110;
    }
  }
  v19 = *((_QWORD *)v16 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v17 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
  {
    v105 = 0LL;
LABEL_164:
    v106 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_165;
  }
  v21 = ((v17 - v20) >> 16) + 1;
  if ( v17 < v20 )
    v21 = 0LL;
  v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
  v102 = v22;
  if ( (_DWORD)v21 )
    v17 += ((1 - (_DWORD)v21) << 16) - v20;
  v23 = 0LL;
  if ( v17 < *(_DWORD *)(v22 + 20) )
  {
    v104 = 16LL * (unsigned __int8)v17;
    v24 = *(_QWORD **)(v22 + 24);
    v103 = 8 * ((unsigned __int64)v17 >> 8);
    Object = (PVOID)(v104 + *(_QWORD *)(*v24 + v103));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(Object, 0LL);
    v25 = (_QWORD *)v102;
    if ( v17 < *(_DWORD *)(v102 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v102 + 24) + v103) + v104 + 8) )
    {
      v26 = 24LL * v17;
      *(_DWORD *)(v26 + *(_QWORD *)v102 + 8) |= 1u;
      v23 = (unsigned __int16 *)(v26 + *v25);
    }
    else
    {
      ExReleasePushLockExclusiveEx(Object, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v105 = v23;
  if ( !v23 )
    goto LABEL_164;
  _m_prefetchw(v23 + 4);
  v27 = *((_DWORD *)v23 + 2);
  v107 = v27;
  if ( v10 )
  {
    v28 = v27 & 0xFFFFFFFE;
    if ( v28 != (v100 & 0xFFFFFFFC) && v28 && (!v101 || v28 != *(_DWORD *)(v101 + 8)) )
      goto LABEL_134;
  }
  v29 = *((_BYTE *)v23 + 15);
  if ( (v29 & 0x20) != 0 )
    goto LABEL_134;
  if ( (v29 & 0x40) == 0 )
    goto LABEL_28;
  v86 = gpHandleManager;
  v87 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
  v88 = *((_QWORD *)v86 + 2);
  v89 = v87;
  v90 = *(_DWORD *)(v88 + 2056);
  if ( v87 >= v90 + ((*(unsigned __int16 *)(v88 + 2) + 0xFFFF) << 16) )
    goto LABEL_131;
  v91 = ((v87 - v90) >> 16) + 1;
  if ( v87 < v90 )
    v91 = 0LL;
  v92 = *(_QWORD *)(v88 + 8 * v91 + 8);
  if ( (_DWORD)v91 )
    v89 = ((1 - (_DWORD)v91) << 16) - v90 + v87;
  if ( (unsigned int)v89 >= *(_DWORD *)(v92 + 20) )
LABEL_131:
    v93 = 0LL;
  else
    v93 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v92 + 24) + 8 * (v89 >> 8)) + 16LL * (unsigned __int8)v89 + 8);
  if ( !*(_WORD *)(v93 + 12) || *(struct _KTHREAD **)(v93 + 16) != KeGetCurrentThread() )
  {
LABEL_134:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
    if ( !v106 )
    {
LABEL_165:
      v35 = 0LL;
LABEL_92:
      v11 = v35;
      goto LABEL_93;
    }
  }
  v23 = v105;
LABEL_28:
  v30 = *(_DWORD *)v23 & 0xFFFFFF;
  if ( v30 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v23,
                                  1)
           + 13) == HIWORD(v30) )
        v30 = (unsigned __int16)v30;
    }
    else
    {
      v30 = *v23;
    }
  }
  v31 = *((_QWORD *)gpHandleManager + 2);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( v30 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    goto LABEL_139;
  v33 = ((v30 - v32) >> 16) + 1;
  if ( v30 < v32 )
    v33 = 0LL;
  v34 = *(_QWORD *)(v31 + 8 * v33 + 8);
  if ( (_DWORD)v33 )
    v30 += ((1 - (_DWORD)v33) << 16) - v32;
  if ( v30 >= *(_DWORD *)(v34 + 20) )
LABEL_139:
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                    + 16LL * (unsigned __int8)v30
                    + 8);
  if ( (a4 & 2) != 0 )
  {
    v81 = *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    if ( v81 != -2147483630 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( v81 != (CurrentProcessId & 0xFFFFFFFC) && v81 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
        goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)v23 + 14) == a5 && v23[6] == HIWORD(v7) )
  {
    v36 = *(_DWORD *)(v35 + 8);
    if ( v36 == v109 && *(_WORD *)(v35 + 12) == a2 )
    {
      if ( (a4 & 1) != 0 || (*((_BYTE *)v23 + 15) & 1) == 0 )
      {
        v37 = (unsigned __int16)*(_DWORD *)v35 | (*(_DWORD *)v35 >> 8) & 0xFF0000;
        if ( v37 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*(_DWORD *)v35,
                                        1)
                 + 13) == HIWORD(v37) )
              v37 = (unsigned __int16)v37;
          }
          else
          {
            v37 = (unsigned __int16)*(_DWORD *)v35;
          }
        }
        v38 = *((_QWORD *)gpHandleManager + 2);
        v39 = *(_DWORD *)(v38 + 2056);
        if ( v37 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
        {
          v43 = 0LL;
        }
        else
        {
          v40 = ((v37 - v39) >> 16) + 1;
          if ( v37 < v39 )
            v40 = 0LL;
          v41 = *(_QWORD *)(v38 + 8 * v40 + 8);
          if ( (_DWORD)v40 )
            v42 = v37 + ((1 - (_DWORD)v40) << 16) - v39;
          else
            v42 = v37;
          v43 = 0LL;
          if ( v42 < *(_DWORD *)(v41 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v42 >> 8))
                         + 16LL * (unsigned __int8)v42
                         + 8) )
          {
            v43 = *(_QWORD *)v41 + 24LL * v42;
          }
        }
        if ( v37 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v37,
                                        1)
                 + 13) == HIWORD(v37) )
              v37 = (unsigned __int16)v37;
          }
          else
          {
            v37 = (unsigned __int16)v37;
          }
        }
        v44 = *(_DWORD *)(v38 + 2056);
        if ( v37 >= v44 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
          goto LABEL_153;
        v45 = ((v37 - v44) >> 16) + 1;
        if ( v37 < v44 )
          v45 = 0LL;
        v46 = *(_QWORD *)(v38 + 8 * v45 + 8);
        if ( (_DWORD)v45 )
          v37 += ((1 - (_DWORD)v45) << 16) - v44;
        if ( v37 >= *(_DWORD *)(v46 + 20) )
LABEL_153:
          v47 = 0LL;
        else
          v47 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)v37 >> 8))
                          + 16LL * (unsigned __int8)v37
                          + 8);
        v48 = 0LL;
        if ( v47 == v35 )
          v48 = v43;
        v49 = *(_BYTE *)(v48 + 14);
        if ( v49 == 5 )
        {
          v79 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v35 + 680);
          v80 = 0;
        }
        else
        {
          if ( v49 != 16 )
            goto LABEL_68;
          v79 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v35 + 136);
          v80 = 2;
        }
        TrackObjectReferenceDecrement(v80, v79);
LABEL_68:
        v50 = *((_DWORD *)v23 + 2);
        v51 = v50 & 0xFFFFFFFE;
        if ( (v50 & 0xFFFFFFFE) != 0 && v51 != -2147483630 )
        {
          Object = 0LL;
          W32ProcessFromId = GetW32ProcessFromId(v51, (struct _EPROCESS **)&Object);
          if ( W32ProcessFromId )
          {
            GreAcquireHmgrSemaphore(v74, v73);
            --*((_DWORD *)W32ProcessFromId + 15);
            GreReleaseHmgrSemaphore(v77, v76, v78);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v23 + 14));
          McTemplateK0pqqq_EtwWriteTransfer(v97, (unsigned int)&GdiDestroyHandle, v98, *v96, EtwGdiHandleType);
        }
        *((_BYTE *)v23 + 14) = 0;
        *((_QWORD *)v23 + 2) = 0LL;
        *((_DWORD *)v23 + 2) = v50 & 1;
        v52 = gpHandleManager;
        v53 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
        v54 = *((_QWORD *)v52 + 2);
        v55 = v53;
        v56 = *(_DWORD *)(v54 + 2056);
        if ( v53 >= v56 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16) )
          goto LABEL_155;
        v57 = ((v53 - v56) >> 16) + 1;
        if ( v53 < v56 )
          v57 = 0LL;
        v58 = *(_QWORD *)(v54 + 8 * v57 + 8);
        if ( (_DWORD)v57 )
          v55 = ((1 - (_DWORD)v57) << 16) - v56 + v53;
        if ( (unsigned int)v55 >= *(_DWORD *)(v58 + 20) )
LABEL_155:
          v59 = 0LL;
        else
          v59 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * (v55 >> 8)) + 16LL * (unsigned __int8)v55 + 8);
        v60 = (unsigned __int16)*v59 | (*v59 >> 8) & 0xFF0000;
        if ( v60 >= 0x10000 )
        {
          if ( *(_DWORD *)v52 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v52 + 2),
                                        (unsigned __int16)*v59,
                                        1)
                 + 13) == HIWORD(v60) )
              v60 = (unsigned __int16)v60;
          }
          else
          {
            v60 = (unsigned __int16)*v59;
          }
        }
        v61 = *((_QWORD *)v52 + 3);
        v62 = (GdiHandleEntryDirectory *)*((_QWORD *)v52 + 2);
        v63 = v62;
        if ( v61 )
        {
          v99 = *(_DWORD *)(4LL * (unsigned __int16)v60 + v61);
          Object = (PVOID)(4LL * (unsigned __int16)v60);
          if ( v99 )
          {
            if ( GdiHandleEntryDirectory::AcquireEntryLock(v62, v99, 1) )
              GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v52 + 2), v99, 1);
            *(_DWORD *)((char *)Object + *((_QWORD *)v52 + 3)) = 0;
            --*((_DWORD *)v52 + 1);
            v63 = (GdiHandleEntryDirectory *)*((_QWORD *)v52 + 2);
          }
        }
        v64 = *((_DWORD *)v63 + 514);
        if ( v60 < v64 + ((*((unsigned __int16 *)v63 + 1) + 0xFFFF) << 16) )
        {
          v65 = ((v60 - v64) >> 16) + 1;
          if ( v60 < v64 )
            v65 = 0LL;
          v66 = *((_QWORD *)v63 + v65 + 1);
          if ( (_DWORD)v65 )
            v60 += ((1 - (_DWORD)v65) << 16) - v64;
          v67 = *(_QWORD **)(v66 + 24);
          if ( v60 < *(_DWORD *)(v66 + 20) )
          {
            v68 = *(_QWORD *)(*v67 + 8 * ((unsigned __int64)v60 >> 8));
            if ( *(_QWORD *)(v68 + 16LL * (unsigned __int8)v60 + 8) )
            {
              *(_QWORD *)(v68 + 16LL * (unsigned __int8)v60 + 8) = 0LL;
              *(_QWORD *)(*(_QWORD *)v66 + 24LL * v60) = *(unsigned int *)(v66 + 12);
              --*(_DWORD *)(v66 + 16);
              v67 = *(_QWORD **)(v66 + 24);
              *(_DWORD *)(v66 + 12) = v60;
            }
          }
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(*v67 + 8 * ((unsigned __int64)v60 >> 8)) + 16LL * (unsigned __int8)v60,
            0LL);
          KeLeaveCriticalRegion();
          *(_BYTE *)v63 = 0;
        }
        *(_QWORD *)v59 = 0LL;
        --*((_DWORD *)v52 + 1);
        v106 = 0;
        v105 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_92;
      }
    }
    else
    {
      *((_BYTE *)v23 + 15) |= 8u;
      if ( a6 )
        *a6 = v36;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
LABEL_93:
  if ( v106 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v69, (unsigned int)&LockRelease, v70, (__int64)ghsemHmgr);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v71);
  }
  return v11;
}
