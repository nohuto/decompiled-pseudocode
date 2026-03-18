/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C004B9B4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0090E30 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0092740 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngDeleteDriverObj @ 0x1C014D5A0 (EngDeleteDriverObj.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003E6B4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C003EBC8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044BB0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0128CF8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // esi
  int v10; // r15d
  __int64 v11; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  GdiHandleManager *v15; // r14
  unsigned int v16; // ebx
  bool v17; // cc
  __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int16 *v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  unsigned int v27; // ecx
  char v28; // al
  unsigned int v29; // ebx
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rsi
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rdi
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // cl
  int v49; // ebx
  unsigned int v50; // edi
  GdiHandleManager *v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // rcx
  __int64 v57; // r8
  _DWORD *v58; // r14
  unsigned int v59; // ebx
  __int64 v60; // r8
  GdiHandleEntryDirectory *v61; // rcx
  GdiHandleEntryDirectory *v62; // rsi
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // r10
  __int64 v67; // r11
  int v68; // ecx
  int v69; // r8d
  __int64 v70; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rsi
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v76; // rdx
  unsigned int v77; // ecx
  unsigned int v78; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v82; // rbx
  unsigned int v83; // eax
  __int64 v84; // r9
  unsigned __int64 v85; // rdx
  unsigned int v86; // r8d
  __int64 v87; // rcx
  __int64 v88; // r10
  __int64 v89; // rdx
  unsigned int CurrentProcessId; // eax
  char EtwGdiHandleType; // al
  _QWORD *v92; // r9
  int v93; // ecx
  int v94; // r8d
  unsigned int v95; // r13d
  __int64 v96; // [rsp+40h] [rbp-78h] BYREF
  __int64 v97; // [rsp+48h] [rbp-70h]
  __int64 v98; // [rsp+50h] [rbp-68h]
  unsigned __int64 v99; // [rsp+58h] [rbp-60h]
  __int64 v100; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v101; // [rsp+68h] [rbp-50h] BYREF
  int v102; // [rsp+70h] [rbp-48h]
  int v103; // [rsp+74h] [rbp-44h]
  PVOID Object; // [rsp+C0h] [rbp+8h] BYREF
  int v105; // [rsp+D0h] [rbp+18h]
  unsigned int v106; // [rsp+D8h] [rbp+20h]

  v105 = a3;
  v6 = ghsemHmgr;
  v7 = (unsigned int)a1;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
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
  v96 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v96);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v14, v13),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v97 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v97 = 0LL;
  }
  v15 = gpHandleManager;
  v102 = 1;
  v16 = (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000;
  if ( v16 >= 0x10000 )
  {
    v17 = *(_DWORD *)gpHandleManager <= 0x10000u;
    v106 = (unsigned __int16)v7;
    if ( v17 )
    {
      v16 = (unsigned __int16)v7;
    }
    else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                     (unsigned __int16)v7,
                                     1)
              + 13) == ((unsigned __int16)v7 | (v7 >> 8) & 0xFF0000) >> 16 )
    {
      v16 = v106;
    }
  }
  v18 = *((_QWORD *)v15 + 2);
  v19 = *(_DWORD *)(v18 + 2056);
  if ( v16 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
  {
    v101 = 0LL;
LABEL_164:
    v102 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_165;
  }
  v20 = ((v16 - v19) >> 16) + 1;
  if ( v16 < v19 )
    v20 = 0LL;
  v21 = *(_QWORD *)(v18 + 8 * v20 + 8);
  v98 = v21;
  if ( (_DWORD)v20 )
    v16 += ((1 - (_DWORD)v20) << 16) - v19;
  v22 = 0LL;
  if ( v16 < *(_DWORD *)(v21 + 20) )
  {
    v100 = 16LL * (unsigned __int8)v16;
    v23 = *(_QWORD **)(v21 + 24);
    v99 = 8 * ((unsigned __int64)v16 >> 8);
    Object = (PVOID)(v100 + *(_QWORD *)(*v23 + v99));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(Object, 0LL);
    v24 = (_QWORD *)v98;
    if ( v16 < *(_DWORD *)(v98 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v98 + 24) + v99) + v100 + 8) )
    {
      v25 = 24LL * v16;
      *(_DWORD *)(v25 + *(_QWORD *)v98 + 8) |= 1u;
      v22 = (unsigned __int16 *)(v25 + *v24);
    }
    else
    {
      ExReleasePushLockExclusiveEx(Object, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v101 = v22;
  if ( !v22 )
    goto LABEL_164;
  _m_prefetchw(v22 + 4);
  v26 = *((_DWORD *)v22 + 2);
  v103 = v26;
  if ( v10 )
  {
    v27 = v26 & 0xFFFFFFFE;
    if ( v27 != (v96 & 0xFFFFFFFC) && v27 && (!v97 || v27 != *(_DWORD *)(v97 + 8)) )
      goto LABEL_134;
  }
  v28 = *((_BYTE *)v22 + 15);
  if ( (v28 & 0x20) != 0 )
    goto LABEL_134;
  if ( (v28 & 0x40) == 0 )
    goto LABEL_28;
  v82 = gpHandleManager;
  v83 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v22 & 0xFFFFFF);
  v84 = *((_QWORD *)v82 + 2);
  v85 = v83;
  v86 = *(_DWORD *)(v84 + 2056);
  if ( v83 >= v86 + ((*(unsigned __int16 *)(v84 + 2) + 0xFFFF) << 16) )
    goto LABEL_131;
  v87 = ((v83 - v86) >> 16) + 1;
  if ( v83 < v86 )
    v87 = 0LL;
  v88 = *(_QWORD *)(v84 + 8 * v87 + 8);
  if ( (_DWORD)v87 )
    v85 = ((1 - (_DWORD)v87) << 16) - v86 + v83;
  if ( (unsigned int)v85 >= *(_DWORD *)(v88 + 20) )
LABEL_131:
    v89 = 0LL;
  else
    v89 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v88 + 24) + 8 * (v85 >> 8)) + 16LL * (unsigned __int8)v85 + 8);
  if ( !*(_WORD *)(v89 + 12) || *(struct _KTHREAD **)(v89 + 16) != KeGetCurrentThread() )
  {
LABEL_134:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
    if ( !v102 )
    {
LABEL_165:
      v34 = 0LL;
LABEL_92:
      v11 = v34;
      goto LABEL_93;
    }
  }
  v22 = v101;
LABEL_28:
  v29 = *(_DWORD *)v22 & 0xFFFFFF;
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v22,
                                  1)
           + 13) == HIWORD(v29) )
        v29 = (unsigned __int16)v29;
    }
    else
    {
      v29 = *v22;
    }
  }
  v30 = *((_QWORD *)gpHandleManager + 2);
  v31 = *(_DWORD *)(v30 + 2056);
  if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
    goto LABEL_139;
  v32 = ((v29 - v31) >> 16) + 1;
  if ( v29 < v31 )
    v32 = 0LL;
  v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
  if ( (_DWORD)v32 )
    v29 += ((1 - (_DWORD)v32) << 16) - v31;
  if ( v29 >= *(_DWORD *)(v33 + 20) )
LABEL_139:
    v34 = 0LL;
  else
    v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                    + 16LL * (unsigned __int8)v29
                    + 8);
  if ( (a4 & 2) != 0 )
  {
    v78 = *((_DWORD *)v22 + 2) & 0xFFFFFFFE;
    if ( v78 != -2147483630 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( v78 != (CurrentProcessId & 0xFFFFFFFC) && v78 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
        goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)v22 + 14) == a5 && v22[6] == HIWORD(v7) )
  {
    v35 = *(_DWORD *)(v34 + 8);
    if ( v35 == v105 && *(_WORD *)(v34 + 12) == a2 )
    {
      if ( (a4 & 1) != 0 || (*((_BYTE *)v22 + 15) & 1) == 0 )
      {
        v36 = (unsigned __int16)*(_DWORD *)v34 | (*(_DWORD *)v34 >> 8) & 0xFF0000;
        if ( v36 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*(_DWORD *)v34,
                                        1)
                 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)v36;
          }
          else
          {
            v36 = (unsigned __int16)*(_DWORD *)v34;
          }
        }
        v37 = *((_QWORD *)gpHandleManager + 2);
        v38 = *(_DWORD *)(v37 + 2056);
        if ( v36 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
        {
          v42 = 0LL;
        }
        else
        {
          v39 = ((v36 - v38) >> 16) + 1;
          if ( v36 < v38 )
            v39 = 0LL;
          v40 = *(_QWORD *)(v37 + 8 * v39 + 8);
          if ( (_DWORD)v39 )
            v41 = v36 + ((1 - (_DWORD)v39) << 16) - v38;
          else
            v41 = v36;
          v42 = 0LL;
          if ( v41 < *(_DWORD *)(v40 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                         + 16LL * (unsigned __int8)v41
                         + 8) )
          {
            v42 = *(_QWORD *)v40 + 24LL * v41;
          }
        }
        if ( v36 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v36,
                                        1)
                 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)v36;
          }
          else
          {
            v36 = (unsigned __int16)v36;
          }
        }
        v43 = *(_DWORD *)(v37 + 2056);
        if ( v36 >= v43 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
          goto LABEL_153;
        v44 = ((v36 - v43) >> 16) + 1;
        if ( v36 < v43 )
          v44 = 0LL;
        v45 = *(_QWORD *)(v37 + 8 * v44 + 8);
        if ( (_DWORD)v44 )
          v36 += ((1 - (_DWORD)v44) << 16) - v43;
        if ( v36 >= *(_DWORD *)(v45 + 20) )
LABEL_153:
          v46 = 0LL;
        else
          v46 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                          + 16LL * (unsigned __int8)v36
                          + 8);
        v47 = 0LL;
        if ( v46 == v34 )
          v47 = v42;
        v48 = *(_BYTE *)(v47 + 14);
        if ( v48 == 5 )
        {
          v76 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v34 + 680);
          v77 = 0;
        }
        else
        {
          if ( v48 != 16 )
            goto LABEL_68;
          v76 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v34 + 136);
          v77 = 2;
        }
        TrackObjectReferenceDecrement(v77, v76);
LABEL_68:
        v49 = *((_DWORD *)v22 + 2);
        v50 = v49 & 0xFFFFFFFE;
        if ( (v49 & 0xFFFFFFFE) != 0 && v50 != -2147483630 )
        {
          Object = 0LL;
          W32ProcessFromId = GetW32ProcessFromId(v50, (struct _EPROCESS **)&Object);
          if ( W32ProcessFromId )
          {
            GreAcquireHmgrSemaphore();
            --*((_DWORD *)W32ProcessFromId + 15);
            GreReleaseHmgrSemaphore(v74, v73, v75);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v22 & 0xFFFFFF);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v22 + 14));
          McTemplateK0pqqq_EtwWriteTransfer(v93, (unsigned int)&GdiDestroyHandle, v94, *v92, EtwGdiHandleType);
        }
        *((_BYTE *)v22 + 14) = 0;
        *((_QWORD *)v22 + 2) = 0LL;
        *((_DWORD *)v22 + 2) = v49 & 1;
        v51 = gpHandleManager;
        v52 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v22 & 0xFFFFFF);
        v53 = *((_QWORD *)v51 + 2);
        v54 = v52;
        v55 = *(_DWORD *)(v53 + 2056);
        if ( v52 >= v55 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16) )
          goto LABEL_155;
        v56 = ((v52 - v55) >> 16) + 1;
        if ( v52 < v55 )
          v56 = 0LL;
        v57 = *(_QWORD *)(v53 + 8 * v56 + 8);
        if ( (_DWORD)v56 )
          v54 = ((1 - (_DWORD)v56) << 16) - v55 + v52;
        if ( (unsigned int)v54 >= *(_DWORD *)(v57 + 20) )
LABEL_155:
          v58 = 0LL;
        else
          v58 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * (v54 >> 8)) + 16LL * (unsigned __int8)v54 + 8);
        v59 = (unsigned __int16)*v58 | (*v58 >> 8) & 0xFF0000;
        if ( v59 >= 0x10000 )
        {
          if ( *(_DWORD *)v51 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v51 + 2),
                                        (unsigned __int16)*v58,
                                        1)
                 + 13) == HIWORD(v59) )
              v59 = (unsigned __int16)v59;
          }
          else
          {
            v59 = (unsigned __int16)*v58;
          }
        }
        v60 = *((_QWORD *)v51 + 3);
        v61 = (GdiHandleEntryDirectory *)*((_QWORD *)v51 + 2);
        v62 = v61;
        if ( v60 )
        {
          v95 = *(_DWORD *)(4LL * (unsigned __int16)v59 + v60);
          Object = (PVOID)(4LL * (unsigned __int16)v59);
          if ( v95 )
          {
            if ( GdiHandleEntryDirectory::AcquireEntryLock(v61, v95, 1) )
              GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v51 + 2), v95, 1);
            *(_DWORD *)((char *)Object + *((_QWORD *)v51 + 3)) = 0;
            --*((_DWORD *)v51 + 1);
            v62 = (GdiHandleEntryDirectory *)*((_QWORD *)v51 + 2);
          }
        }
        v63 = *((_DWORD *)v62 + 514);
        if ( v59 < v63 + ((*((unsigned __int16 *)v62 + 1) + 0xFFFF) << 16) )
        {
          v64 = ((v59 - v63) >> 16) + 1;
          if ( v59 < v63 )
            v64 = 0LL;
          v65 = *((_QWORD *)v62 + v64 + 1);
          if ( (_DWORD)v64 )
            v59 += ((1 - (_DWORD)v64) << 16) - v63;
          v66 = *(_QWORD **)(v65 + 24);
          if ( v59 < *(_DWORD *)(v65 + 20) )
          {
            v67 = *(_QWORD *)(*v66 + 8 * ((unsigned __int64)v59 >> 8));
            if ( *(_QWORD *)(v67 + 16LL * (unsigned __int8)v59 + 8) )
            {
              *(_QWORD *)(v67 + 16LL * (unsigned __int8)v59 + 8) = 0LL;
              *(_QWORD *)(*(_QWORD *)v65 + 24LL * v59) = *(unsigned int *)(v65 + 12);
              --*(_DWORD *)(v65 + 16);
              v66 = *(_QWORD **)(v65 + 24);
              *(_DWORD *)(v65 + 12) = v59;
            }
          }
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(*v66 + 8 * ((unsigned __int64)v59 >> 8)) + 16LL * (unsigned __int8)v59,
            0LL);
          KeLeaveCriticalRegion();
          *(_BYTE *)v62 = 0;
        }
        *(_QWORD *)v58 = 0LL;
        --*((_DWORD *)v51 + 1);
        v102 = 0;
        v101 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_92;
      }
    }
    else
    {
      *((_BYTE *)v22 + 15) |= 8u;
      if ( a6 )
        *a6 = v35;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
LABEL_93:
  if ( v102 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v68, (unsigned int)&LockRelease, v69, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v70);
  }
  return v11;
}
