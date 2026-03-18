/*
 * XREFs of ReleaseCacheDC @ 0x1C00418A0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     NtUserReleaseDC @ 0x1C004AE20 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C005EC50 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x1C009B640 (UserReleaseDC.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0041314 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044CE0 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004A370 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00A3024 (IsDeleteHrgnClipSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F66F4 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rsi
  int v9; // r8d
  int v10; // eax
  HDC v11; // rbx
  BOOL v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  GdiHandleManager *v17; // r14
  unsigned int v18; // ebx
  __int64 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int16 *v23; // rdi
  __int64 v24; // r13
  _QWORD *v25; // rax
  char v26; // al
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // r9
  unsigned int v32; // ebx
  GdiHandleManager *v33; // rdi
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r9
  _DWORD *v38; // rdx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // r10
  struct REGION *v44; // rdx
  HDC v45; // r15
  int v46; // eax
  unsigned int v47; // edi
  unsigned int v48; // edi
  GdiHandleManager *v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // r9
  unsigned int v52; // edx
  unsigned int v53; // r8d
  __int64 v54; // rcx
  GdiHandleEntryTable *v55; // r9
  struct _ENTRY *v56; // rax
  struct _ENTRY *v57; // rbx
  bool v58; // zf
  BOOL v59; // r14d
  char v60; // al
  unsigned int v61; // ebx
  GdiHandleManager *v62; // rdi
  __int64 v63; // rdx
  unsigned int v64; // r8d
  __int64 v65; // rcx
  __int64 v66; // r9
  _DWORD *v67; // rdx
  unsigned int v68; // ebx
  __int64 v69; // rdx
  unsigned int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // r10
  int v73; // ecx
  __int64 v74; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v79; // eax
  __int64 v80; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v83; // rbx
  unsigned int v84; // eax
  __int64 v85; // r9
  unsigned __int64 v86; // rdx
  unsigned int v87; // r8d
  __int64 v88; // rcx
  __int64 v89; // r10
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // [rsp+30h] [rbp-88h] BYREF
  DC *v95[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v96; // [rsp+48h] [rbp-70h] BYREF
  int v97; // [rsp+50h] [rbp-68h]
  int v98; // [rsp+54h] [rbp-64h]
  struct _ENTRY *v99; // [rsp+60h] [rbp-58h] BYREF
  int v100; // [rsp+68h] [rbp-50h]
  int v101; // [rsp+6Ch] [rbp-4Ch]
  int v102; // [rsp+C8h] [rbp+10h]
  __int64 v103; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v104; // [rsp+D8h] [rbp+20h]

  v102 = a2;
  v3 = a1;
  v4 = a2;
  LODWORD(a1) = (_DWORD)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      a1,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v6 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v7 = (__int64 *)(gpDispInfo + 24);
  v104 = gpDispInfo + 24;
  v8 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v8 )
  {
LABEL_126:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    a2 = *(_QWORD *)(v8 + 8);
    if ( a2 == v3 )
      break;
    v7 = (__int64 *)v8;
    v104 = v8;
    v8 = *(_QWORD *)v8;
    if ( !v8 )
      goto LABEL_126;
  }
  v9 = *(_DWORD *)(v8 + 64);
  if ( v9 < 0 )
  {
    v79 = DestroyCacheDC(v7, a2);
    v80 = *(_QWORD *)(gpDispInfo + 40);
    if ( v79 )
    {
      GreUnlockVisRgn(v80, a2, v9);
      return 1LL;
    }
    goto LABEL_136;
  }
  if ( (v9 & 0x401800) != 0x1000 )
    goto LABEL_135;
  if ( (v9 & 0x4000) != 0 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL);
    if ( (*(_BYTE *)(a1 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 && qword_1C02505D0 )
      qword_1C02505D0(v8);
  }
  v10 = *(_DWORD *)(v8 + 64);
  if ( (v10 & 2) == 0 )
    goto LABEL_114;
  if ( qword_1C024F9C0 && (int)qword_1C024F9C0() >= 0 && qword_1C024F9C8 )
    qword_1C024F9C8(v3, 0LL, 0LL, 0LL, 0);
  v11 = *(HDC *)(v8 + 8);
  v95[0] = 0LL;
  v95[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v95, v11);
  v12 = v95[0] && (unsigned int)XDCOBJ::bCleanDC(v95) && (unsigned int)GreSetDCOwnerEx(v11, 2147483666LL, 0LL, 0LL);
  DCOBJ::~DCOBJ((DCOBJ *)v95);
  if ( !v12 )
  {
LABEL_135:
    v80 = *(_QWORD *)(gpDispInfo + 40);
LABEL_136:
    GreUnlockVisRgn(v80, a2, v9);
    return 2LL;
  }
  *(_DWORD *)(v8 + 64) &= ~0x1000u;
  v13 = *(_QWORD *)(v8 + 8);
  v14 = 0LL;
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  v94 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v94);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v16, v15);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v17 = gpHandleManager;
  v18 = (unsigned __int16)v13 | ((unsigned int)v13 >> 8) & 0xFF0000;
  v97 = 1;
  if ( v18 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v13,
                                  1)
           + 13) == ((unsigned __int16)v13 | ((unsigned int)v13 >> 8) & 0xFF0000) >> 16 )
        v18 = (unsigned __int16)v13;
    }
    else
    {
      v18 = (unsigned __int16)v13;
    }
  }
  v19 = *((_QWORD *)v17 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v18 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    goto LABEL_187;
  v21 = ((v18 - v20) >> 16) + 1;
  if ( v18 < v20 )
    v21 = 0LL;
  v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
  if ( (_DWORD)v21 )
    v18 += ((1 - (_DWORD)v21) << 16) - v20;
  v23 = 0LL;
  if ( v18 < *(_DWORD *)(v22 + 20) )
  {
    v24 = 16LL * (unsigned __int8)v18;
    v25 = *(_QWORD **)(v22 + 24);
    v95[0] = (DC *)(8 * ((unsigned __int64)v18 >> 8));
    v103 = v24 + *(_QWORD *)((char *)v95[0] + *v25);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v103, 0LL);
    if ( v18 < *(_DWORD *)(v22 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v95[0] + **(_QWORD **)(v22 + 24)) + v24 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v22 + 24LL * v18 + 8) |= 1u;
      v23 = (unsigned __int16 *)(24LL * v18 + *(_QWORD *)v22);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v103, 0LL);
      KeLeaveCriticalRegion();
    }
    v7 = (__int64 *)v104;
  }
  v96 = v23;
  if ( !v23 )
  {
LABEL_187:
    KeLeaveCriticalRegion();
    goto LABEL_107;
  }
  _m_prefetchw(v23 + 4);
  v98 = *((_DWORD *)v23 + 2);
  v26 = *((_BYTE *)v23 + 15);
  if ( (v26 & 0x20) != 0 )
    goto LABEL_162;
  if ( (v26 & 0x40) != 0 )
  {
    v83 = gpHandleManager;
    v84 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
    v85 = *((_QWORD *)v83 + 2);
    v86 = v84;
    v87 = *(_DWORD *)(v85 + 2056);
    if ( v84 >= v87 + ((*(unsigned __int16 *)(v85 + 2) + 0xFFFF) << 16) )
      goto LABEL_159;
    v88 = ((v84 - v87) >> 16) + 1;
    if ( v84 < v87 )
      v88 = 0LL;
    v89 = *(_QWORD *)(v85 + 8 * v88 + 8);
    if ( (_DWORD)v88 )
      v86 = ((1 - (_DWORD)v88) << 16) - v87 + v84;
    if ( (unsigned int)v86 >= *(_DWORD *)(v89 + 20) )
LABEL_159:
      v90 = 0LL;
    else
      v90 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v89 + 24) + 8 * (v86 >> 8)) + 16LL * (unsigned __int8)v86 + 8);
    if ( *(_WORD *)(v90 + 12) && *(struct _KTHREAD **)(v90 + 16) == KeGetCurrentThread() )
    {
LABEL_163:
      v23 = v96;
      goto LABEL_44;
    }
LABEL_162:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v96);
    if ( !v97 )
      goto LABEL_107;
    goto LABEL_163;
  }
LABEL_44:
  if ( *((_BYTE *)v23 + 14) == 1 && v23[6] == WORD1(v13) )
  {
    v27 = *(_DWORD *)v23 & 0xFFFFFF;
    if ( v27 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v23,
                                    1)
             + 13) == HIWORD(v27) )
          v27 = (unsigned __int16)v27;
      }
      else
      {
        v27 = *v23;
      }
    }
    v28 = *((_QWORD *)gpHandleManager + 2);
    v29 = *(_DWORD *)(v28 + 2056);
    if ( v27 >= v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
      goto LABEL_167;
    v30 = ((v27 - v29) >> 16) + 1;
    if ( v27 < v29 )
      v30 = 0LL;
    v31 = *(_QWORD *)(v28 + 8 * v30 + 8);
    if ( (_DWORD)v30 )
      v27 += ((1 - (_DWORD)v30) << 16) - v29;
    if ( v27 >= *(_DWORD *)(v31 + 20) )
LABEL_167:
      v14 = 0LL;
    else
      v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v27 >> 8))
                      + 16LL * (unsigned __int8)v27
                      + 8);
    ++*(_DWORD *)(v14 + 8);
  }
  v32 = *(_DWORD *)v23 & 0xFFFFFF;
  if ( v32 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v23,
                                  1)
           + 13) == HIWORD(v32) )
        v32 = (unsigned __int16)v32;
    }
    else
    {
      v32 = *v23;
    }
  }
  v33 = gpHandleManager;
  v34 = *((_QWORD *)gpHandleManager + 2);
  v35 = *(_DWORD *)(v34 + 2056);
  if ( v32 >= v35 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
    goto LABEL_171;
  v36 = ((v32 - v35) >> 16) + 1;
  if ( v32 < v35 )
    v36 = 0LL;
  v37 = *(_QWORD *)(v34 + 8 * v36 + 8);
  if ( (_DWORD)v36 )
    v32 += ((1 - (_DWORD)v36) << 16) - v35;
  if ( v32 >= *(_DWORD *)(v37 + 20) )
LABEL_171:
    v38 = 0LL;
  else
    v38 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * ((unsigned __int64)v32 >> 8))
                     + 16LL * (unsigned __int8)v32
                     + 8);
  v39 = (unsigned __int16)*v38 | (*v38 >> 8) & 0xFF0000;
  if ( v39 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v38,
                                  1)
           + 13) == HIWORD(v39) )
        v39 = (unsigned __int16)v39;
    }
    else
    {
      v39 = (unsigned __int16)*v38;
    }
  }
  v40 = *((_QWORD *)v33 + 2);
  v41 = *(_DWORD *)(v40 + 2056);
  if ( v39 < v41 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
  {
    v42 = ((v39 - v41) >> 16) + 1;
    if ( v39 < v41 )
      v42 = 0LL;
    v43 = *(_QWORD *)(v40 + 8 * v42 + 8);
    if ( (_DWORD)v42 )
      v39 += ((1 - (_DWORD)v42) << 16) - v41;
    *(_DWORD *)(*(_QWORD *)v43 + 24LL * v39 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * ((unsigned __int64)v39 >> 8)) + 16LL * (unsigned __int8)v39,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( !v14 )
    goto LABEL_107;
  v44 = *(struct REGION **)(v14 + 1120);
  *(_DWORD *)(v14 + 36) &= ~0x100000u;
  GrepValidateVisRgn((struct DC *)v14, v44);
  v45 = *(HDC *)v14;
  v46 = (unsigned __int16)*(_QWORD *)v14;
  v47 = ((unsigned int)*(_QWORD *)v14 >> 8) & 0xFF0000;
  v103 = 0LL;
  v48 = v46 | v47;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v103);
  IsThreadCrossSessionAttached();
  v49 = gpHandleManager;
  v100 = 1;
  v50 = GdiHandleManager::DecodeIndex(gpHandleManager, v48);
  v51 = *((_QWORD *)v49 + 2);
  v52 = v50;
  v53 = *(_DWORD *)(v51 + 2056);
  if ( v50 >= v53 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
    goto LABEL_187;
  v54 = ((v50 - v53) >> 16) + 1;
  if ( v50 < v53 )
    v54 = 0LL;
  v55 = *(GdiHandleEntryTable **)(v51 + 8 * v54 + 8);
  if ( (_DWORD)v54 )
    v52 = ((1 - (_DWORD)v54) << 16) - v53 + v50;
  v56 = GdiHandleEntryTable::AcquireEntryLock(v55, v52, 0);
  v99 = v56;
  v57 = v56;
  if ( !v56 )
    goto LABEL_187;
  _m_prefetchw((char *)v56 + 8);
  v58 = (*((_BYTE *)v56 + 15) & 0x20) == 0;
  v101 = *((_DWORD *)v56 + 2);
  if ( v58 )
    goto LABEL_84;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v99);
  if ( v100 )
  {
    v57 = v99;
LABEL_84:
    v59 = (*((_BYTE *)v57 + 15) & 8) != 0;
    v60 = *((_BYTE *)v57 + 14);
    if ( v60 == 5 )
    {
      v91 = *(_QWORD *)(v14 + 680);
      v92 = 0LL;
    }
    else
    {
      if ( v60 != 16 )
      {
LABEL_86:
        --*(_DWORD *)(v14 + 8);
        v61 = *(_DWORD *)v57 & 0xFFFFFF;
        if ( v61 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v61,
                                        1)
                 + 13) == HIWORD(v61) )
              v61 = (unsigned __int16)v61;
          }
          else
          {
            v61 = (unsigned __int16)v61;
          }
        }
        v62 = gpHandleManager;
        v63 = *((_QWORD *)gpHandleManager + 2);
        v64 = *(_DWORD *)(v63 + 2056);
        if ( v61 >= v64 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
          goto LABEL_183;
        v65 = ((v61 - v64) >> 16) + 1;
        if ( v61 < v64 )
          v65 = 0LL;
        v66 = *(_QWORD *)(v63 + 8 * v65 + 8);
        if ( (_DWORD)v65 )
          v61 += ((1 - (_DWORD)v65) << 16) - v64;
        if ( v61 >= *(_DWORD *)(v66 + 20) )
LABEL_183:
          v67 = 0LL;
        else
          v67 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * ((unsigned __int64)v61 >> 8))
                           + 16LL * (unsigned __int8)v61
                           + 8);
        v68 = (unsigned __int16)*v67 | (*v67 >> 8) & 0xFF0000;
        if ( v68 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v67,
                                        1)
                 + 13) == HIWORD(v68) )
              v68 = (unsigned __int16)v68;
          }
          else
          {
            v68 = (unsigned __int16)*v67;
          }
        }
        v69 = *((_QWORD *)v62 + 2);
        v70 = *(_DWORD *)(v69 + 2056);
        if ( v68 < v70 + ((*(unsigned __int16 *)(v69 + 2) + 0xFFFF) << 16) )
        {
          v71 = ((v68 - v70) >> 16) + 1;
          if ( v68 < v70 )
            v71 = 0LL;
          v72 = *(_QWORD *)(v69 + 8 * v71 + 8);
          if ( (_DWORD)v71 )
            v68 += ((1 - (_DWORD)v71) << 16) - v70;
          *(_DWORD *)(*(_QWORD *)v72 + 24LL * v68 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * ((unsigned __int64)v68 >> 8)) + 16LL * (unsigned __int8)v68,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( v59 )
          bDeleteDCInternalEx(v45, 0LL);
        goto LABEL_107;
      }
      v91 = *(_QWORD *)(v14 + 136);
      v92 = 2LL;
    }
    TrackObjectReferenceDecrement(v92, v91);
    goto LABEL_86;
  }
LABEL_107:
  if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 && qword_1C024F9A0 && (int)qword_1C024F9A0() >= 0 && qword_1C024F9A8 )
    qword_1C024F9A8(*(_QWORD *)(v8 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v7, *(_QWORD *)(v8 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v93, v9);
    return 1LL;
  }
  v10 = *(_DWORD *)(v8 + 64);
  v4 = v102;
LABEL_114:
  if ( (v10 & 0xC0) != 0 && ((v10 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C02505C0 )
    qword_1C02505C0(v8);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      a1,
      (unsigned int)&LockRelease,
      v9,
      (_DWORD)ghsemDCVisRgn,
      (__int64)L"ghsemDCVisRgn");
  v73 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v74);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v73, (unsigned int)&LockRelease, v9, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
  v75 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v76);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v75,
      (unsigned int)&LockRelease,
      v9,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v77);
  }
  return 0LL;
}
