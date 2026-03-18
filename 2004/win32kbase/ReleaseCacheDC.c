/*
 * XREFs of ReleaseCacheDC @ 0x1C008BB80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C0078DA0 (UserReleaseDC.c)
 *     NtUserReleaseDC @ 0x1C0090E70 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C00A53A0 (_ReleaseDC.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     IsDeleteHrgnClipSupported @ 0x1C0040954 (IsDeleteHrgnClipSupported.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008A770 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F8024 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebp
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // eax
  HDC v12; // rbx
  BOOL v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  GdiHandleManager *v19; // r14
  unsigned int v20; // ebx
  __int64 v21; // r14
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int16 *v25; // rdi
  __int64 v26; // r13
  _QWORD *v27; // rax
  char v28; // al
  unsigned int v29; // ebx
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned int v34; // ebx
  GdiHandleManager *v35; // rdi
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r9
  _DWORD *v40; // rdx
  unsigned int v41; // ebx
  __int64 v42; // rdx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // r10
  struct REGION *v46; // rdx
  HDC v47; // r15
  int v48; // eax
  unsigned int v49; // edi
  unsigned int v50; // edi
  __int64 v51; // rcx
  GdiHandleManager *v52; // rbx
  unsigned int v53; // eax
  __int64 v54; // r9
  unsigned int v55; // edx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  GdiHandleEntryTable *v58; // r9
  struct _ENTRY *v59; // rax
  struct _ENTRY *v60; // rbx
  bool v61; // zf
  BOOL v62; // r14d
  char v63; // al
  unsigned int v64; // ebx
  GdiHandleManager *v65; // rdi
  __int64 v66; // rdx
  unsigned int v67; // r8d
  __int64 v68; // rcx
  __int64 v69; // r9
  _DWORD *v70; // rdx
  unsigned int v71; // ebx
  __int64 v72; // rdx
  unsigned int v73; // r8d
  __int64 v74; // rcx
  __int64 v75; // r10
  int v76; // ecx
  __int64 v77; // rcx
  int v78; // ecx
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v82; // eax
  __int64 v83; // rcx
  __int64 CurrentProcess; // rax
  __int64 v85; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v87; // rbx
  unsigned int v88; // eax
  __int64 v89; // r9
  unsigned __int64 v90; // rdx
  unsigned int v91; // r8d
  __int64 v92; // rcx
  __int64 v93; // r10
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  const wchar_t *v98; // [rsp+20h] [rbp-98h]
  __int64 v99; // [rsp+30h] [rbp-88h] BYREF
  DC *v100[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v101; // [rsp+48h] [rbp-70h] BYREF
  int v102; // [rsp+50h] [rbp-68h]
  int v103; // [rsp+54h] [rbp-64h]
  struct _ENTRY *v104; // [rsp+60h] [rbp-58h] BYREF
  int v105; // [rsp+68h] [rbp-50h]
  int v106; // [rsp+6Ch] [rbp-4Ch]
  int v107; // [rsp+C8h] [rbp+10h]
  __int64 v108; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v109; // [rsp+D8h] [rbp+20h]

  v107 = a2;
  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v98 = L"ghsemDynamicModeChange";
    McTemplateK0pz_EtwWriteTransfer((_DWORD)v5, (unsigned int)&LockAcquireShared, a3, (__int64)ghsemDynamicModeChange);
  }
  v6 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (__int64 *)(gpDispInfo + 24);
  v109 = gpDispInfo + 24;
  v9 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v9 )
  {
LABEL_126:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    a2 = *(_QWORD *)(v9 + 8);
    if ( a2 == a1 )
      break;
    v8 = (__int64 *)v9;
    v109 = v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_126;
  }
  v10 = *(_DWORD *)(v9 + 64);
  if ( v10 < 0 )
  {
    v82 = DestroyCacheDC(v8, a2);
    v83 = *(_QWORD *)(gpDispInfo + 40);
    if ( v82 )
    {
      GreUnlockVisRgn(v83, a2, v10);
      return 1LL;
    }
    goto LABEL_136;
  }
  if ( (v10 & 0x401800) != 0x1000 )
    goto LABEL_135;
  if ( (v10 & 0x4000) != 0 )
  {
    v5 = *(PERESOURCE *)(*(_QWORD *)(v9 + 32) + 40LL);
    if ( (v5->WaiterPriority & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported(v5) >= 0 && qword_1C02525D0 )
      qword_1C02525D0(v9);
  }
  v11 = *(_DWORD *)(v9 + 64);
  if ( (v11 & 2) == 0 )
    goto LABEL_114;
  if ( qword_1C02519C0 && (int)qword_1C02519C0(v5) >= 0 && qword_1C02519C8 )
  {
    LODWORD(v98) = 0;
    qword_1C02519C8(a1, 0LL, 0LL, 0LL, v98);
  }
  v12 = *(HDC *)(v9 + 8);
  v100[0] = 0LL;
  v100[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v100, v12);
  v13 = v100[0] && (unsigned int)XDCOBJ::bCleanDC(v100) && (unsigned int)GreSetDCOwnerEx(v12, 2147483666LL, 0LL, 0LL);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v100);
  if ( !v13 )
  {
LABEL_135:
    v83 = *(_QWORD *)(gpDispInfo + 40);
LABEL_136:
    GreUnlockVisRgn(v83, a2, v10);
    return 2LL;
  }
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v14 = *(_QWORD *)(v9 + 8);
  v15 = 0LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v99 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v99);
  if ( (unsigned __int8)KeIsAttachedProcess(v16) )
  {
    CurrentProcess = PsGetCurrentProcess(v18, v17);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v85);
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v19 = gpHandleManager;
  v20 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
  v102 = 1;
  if ( v20 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == ((unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000) >> 16 )
        v20 = (unsigned __int16)v14;
    }
    else
    {
      v20 = (unsigned __int16)v14;
    }
  }
  v21 = *((_QWORD *)v19 + 2);
  v22 = *(_DWORD *)(v21 + 2056);
  if ( v20 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    goto LABEL_187;
  v23 = ((v20 - v22) >> 16) + 1;
  if ( v20 < v22 )
    v23 = 0LL;
  v24 = *(_QWORD *)(v21 + 8 * v23 + 8);
  if ( (_DWORD)v23 )
    v20 += ((1 - (_DWORD)v23) << 16) - v22;
  v25 = 0LL;
  if ( v20 < *(_DWORD *)(v24 + 20) )
  {
    v26 = 16LL * (unsigned __int8)v20;
    v27 = *(_QWORD **)(v24 + 24);
    v100[0] = (DC *)(8 * ((unsigned __int64)v20 >> 8));
    v108 = v26 + *(_QWORD *)((char *)v100[0] + *v27);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v108, 0LL);
    if ( v20 < *(_DWORD *)(v24 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v100[0] + **(_QWORD **)(v24 + 24)) + v26 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v20 + 8) |= 1u;
      v25 = (unsigned __int16 *)(24LL * v20 + *(_QWORD *)v24);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v108, 0LL);
      KeLeaveCriticalRegion();
    }
    v8 = (__int64 *)v109;
  }
  v101 = v25;
  if ( !v25 )
  {
LABEL_187:
    KeLeaveCriticalRegion();
    goto LABEL_107;
  }
  _m_prefetchw(v25 + 4);
  v103 = *((_DWORD *)v25 + 2);
  v28 = *((_BYTE *)v25 + 15);
  if ( (v28 & 0x20) != 0 )
    goto LABEL_162;
  if ( (v28 & 0x40) != 0 )
  {
    v87 = gpHandleManager;
    v88 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
    v89 = *((_QWORD *)v87 + 2);
    v90 = v88;
    v91 = *(_DWORD *)(v89 + 2056);
    if ( v88 >= v91 + ((*(unsigned __int16 *)(v89 + 2) + 0xFFFF) << 16) )
      goto LABEL_159;
    v92 = ((v88 - v91) >> 16) + 1;
    if ( v88 < v91 )
      v92 = 0LL;
    v93 = *(_QWORD *)(v89 + 8 * v92 + 8);
    if ( (_DWORD)v92 )
      v90 = ((1 - (_DWORD)v92) << 16) - v91 + v88;
    if ( (unsigned int)v90 >= *(_DWORD *)(v93 + 20) )
LABEL_159:
      v94 = 0LL;
    else
      v94 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v93 + 24) + 8 * (v90 >> 8)) + 16LL * (unsigned __int8)v90 + 8);
    if ( *(_WORD *)(v94 + 12) && *(struct _KTHREAD **)(v94 + 16) == KeGetCurrentThread() )
    {
LABEL_163:
      v25 = v101;
      goto LABEL_44;
    }
LABEL_162:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
    if ( !v102 )
      goto LABEL_107;
    goto LABEL_163;
  }
LABEL_44:
  if ( *((_BYTE *)v25 + 14) == 1 && v25[6] == WORD1(v14) )
  {
    v29 = *(_DWORD *)v25 & 0xFFFFFF;
    if ( v29 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v25,
                                    1)
             + 13) == HIWORD(v29) )
          v29 = (unsigned __int16)v29;
      }
      else
      {
        v29 = *v25;
      }
    }
    v30 = *((_QWORD *)gpHandleManager + 2);
    v31 = *(_DWORD *)(v30 + 2056);
    if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
      goto LABEL_167;
    v32 = ((v29 - v31) >> 16) + 1;
    if ( v29 < v31 )
      v32 = 0LL;
    v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
    if ( (_DWORD)v32 )
      v29 += ((1 - (_DWORD)v32) << 16) - v31;
    if ( v29 >= *(_DWORD *)(v33 + 20) )
LABEL_167:
      v15 = 0LL;
    else
      v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                      + 16LL * (unsigned __int8)v29
                      + 8);
    ++*(_DWORD *)(v15 + 8);
  }
  v34 = *(_DWORD *)v25 & 0xFFFFFF;
  if ( v34 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v25,
                                  1)
           + 13) == HIWORD(v34) )
        v34 = (unsigned __int16)v34;
    }
    else
    {
      v34 = *v25;
    }
  }
  v35 = gpHandleManager;
  v36 = *((_QWORD *)gpHandleManager + 2);
  v37 = *(_DWORD *)(v36 + 2056);
  if ( v34 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
    goto LABEL_171;
  v38 = ((v34 - v37) >> 16) + 1;
  if ( v34 < v37 )
    v38 = 0LL;
  v39 = *(_QWORD *)(v36 + 8 * v38 + 8);
  if ( (_DWORD)v38 )
    v34 += ((1 - (_DWORD)v38) << 16) - v37;
  if ( v34 >= *(_DWORD *)(v39 + 20) )
LABEL_171:
    v40 = 0LL;
  else
    v40 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                     + 16LL * (unsigned __int8)v34
                     + 8);
  v41 = (unsigned __int16)*v40 | (*v40 >> 8) & 0xFF0000;
  if ( v41 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v40,
                                  1)
           + 13) == HIWORD(v41) )
        v41 = (unsigned __int16)v41;
    }
    else
    {
      v41 = (unsigned __int16)*v40;
    }
  }
  v42 = *((_QWORD *)v35 + 2);
  v43 = *(_DWORD *)(v42 + 2056);
  if ( v41 < v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
  {
    v44 = ((v41 - v43) >> 16) + 1;
    if ( v41 < v43 )
      v44 = 0LL;
    v45 = *(_QWORD *)(v42 + 8 * v44 + 8);
    if ( (_DWORD)v44 )
      v41 += ((1 - (_DWORD)v44) << 16) - v43;
    *(_DWORD *)(*(_QWORD *)v45 + 24LL * v41 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v41 >> 8)) + 16LL * (unsigned __int8)v41,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( !v15 )
    goto LABEL_107;
  v46 = *(struct REGION **)(v15 + 1120);
  *(_DWORD *)(v15 + 36) &= ~0x100000u;
  GrepValidateVisRgn((struct DC *)v15, v46);
  v47 = *(HDC *)v15;
  v48 = (unsigned __int16)*(_QWORD *)v15;
  v49 = ((unsigned int)*(_QWORD *)v15 >> 8) & 0xFF0000;
  v108 = 0LL;
  v50 = v48 | v49;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v108);
  IsThreadCrossSessionAttached(v51);
  v52 = gpHandleManager;
  v105 = 1;
  v53 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v50);
  v54 = *((_QWORD *)v52 + 2);
  v55 = v53;
  v56 = *(_DWORD *)(v54 + 2056);
  if ( v53 >= v56 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16) )
    goto LABEL_187;
  v57 = ((v53 - v56) >> 16) + 1;
  if ( v53 < v56 )
    v57 = 0LL;
  v58 = *(GdiHandleEntryTable **)(v54 + 8 * v57 + 8);
  if ( (_DWORD)v57 )
    v55 = ((1 - (_DWORD)v57) << 16) - v56 + v53;
  v59 = GdiHandleEntryTable::AcquireEntryLock(v58, v55, 0);
  v104 = v59;
  v60 = v59;
  if ( !v59 )
    goto LABEL_187;
  _m_prefetchw((char *)v59 + 8);
  v61 = (*((_BYTE *)v59 + 15) & 0x20) == 0;
  v106 = *((_DWORD *)v59 + 2);
  if ( v61 )
    goto LABEL_84;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v104);
  if ( v105 )
  {
    v60 = v104;
LABEL_84:
    v62 = (*((_BYTE *)v60 + 15) & 8) != 0;
    v63 = *((_BYTE *)v60 + 14);
    if ( v63 == 5 )
    {
      v95 = *(_QWORD *)(v15 + 680);
      v96 = 0LL;
    }
    else
    {
      if ( v63 != 16 )
      {
LABEL_86:
        --*(_DWORD *)(v15 + 8);
        v64 = *(_DWORD *)v60 & 0xFFFFFF;
        if ( v64 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v64,
                                        1)
                 + 13) == HIWORD(v64) )
              v64 = (unsigned __int16)v64;
          }
          else
          {
            v64 = (unsigned __int16)v64;
          }
        }
        v65 = gpHandleManager;
        v66 = *((_QWORD *)gpHandleManager + 2);
        v67 = *(_DWORD *)(v66 + 2056);
        if ( v64 >= v67 + ((*(unsigned __int16 *)(v66 + 2) + 0xFFFF) << 16) )
          goto LABEL_183;
        v68 = ((v64 - v67) >> 16) + 1;
        if ( v64 < v67 )
          v68 = 0LL;
        v69 = *(_QWORD *)(v66 + 8 * v68 + 8);
        if ( (_DWORD)v68 )
          v64 += ((1 - (_DWORD)v68) << 16) - v67;
        if ( v64 >= *(_DWORD *)(v69 + 20) )
LABEL_183:
          v70 = 0LL;
        else
          v70 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v69 + 24) + 8 * ((unsigned __int64)v64 >> 8))
                           + 16LL * (unsigned __int8)v64
                           + 8);
        v71 = (unsigned __int16)*v70 | (*v70 >> 8) & 0xFF0000;
        if ( v71 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v70,
                                        1)
                 + 13) == HIWORD(v71) )
              v71 = (unsigned __int16)v71;
          }
          else
          {
            v71 = (unsigned __int16)*v70;
          }
        }
        v72 = *((_QWORD *)v65 + 2);
        v73 = *(_DWORD *)(v72 + 2056);
        if ( v71 < v73 + ((*(unsigned __int16 *)(v72 + 2) + 0xFFFF) << 16) )
        {
          v74 = ((v71 - v73) >> 16) + 1;
          if ( v71 < v73 )
            v74 = 0LL;
          v75 = *(_QWORD *)(v72 + 8 * v74 + 8);
          if ( (_DWORD)v74 )
            v71 += ((1 - (_DWORD)v74) << 16) - v73;
          *(_DWORD *)(*(_QWORD *)v75 + 24LL * v71 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v75 + 24) + 8 * ((unsigned __int64)v71 >> 8)) + 16LL * (unsigned __int8)v71,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( v62 )
          bDeleteDCInternalEx(v47);
        goto LABEL_107;
      }
      v95 = *(_QWORD *)(v15 + 136);
      v96 = 2LL;
    }
    TrackObjectReferenceDecrement(v96, v95);
    goto LABEL_86;
  }
LABEL_107:
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && qword_1C02519A0 && (int)qword_1C02519A0(v5) >= 0 && qword_1C02519A8 )
    qword_1C02519A8(*(_QWORD *)(v9 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v97, v10);
    return 1LL;
  }
  v11 = *(_DWORD *)(v9 + 64);
  v4 = v107;
LABEL_114:
  if ( (v11 & 0xC0) != 0 && ((v11 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C02525C0 )
    qword_1C02525C0(v9);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)v5, (unsigned int)&LockRelease, v10, (__int64)ghsemDCVisRgn);
  v76 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v77);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v76, (unsigned int)&LockRelease, v10, (__int64)ghsemGreLock);
  v78 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v79);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v78, (unsigned int)&LockRelease, v10, (__int64)ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v80);
  }
  return 0LL;
}
