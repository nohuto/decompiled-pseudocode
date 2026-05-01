/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B1D0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180032720 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007F228 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800039D0 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180006724 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006BB8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180008B88 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x180012780 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180018850 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180022430 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x1800292A0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x1800339B0 (-HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035C9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, DWORD *a3, __int64 *a4)
{
  _OWORD *Heap; // rax
  void *v8; // rsi
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  HKEY v12; // rbp
  signed int v13; // edi
  int v14; // eax
  const WCHAR *v15; // rdx
  LSTATUS v16; // eax
  DWORD *v17; // r14
  unsigned __int64 v18; // rbp
  int v19; // edi
  struct _RM_HAM_ACTIVITY_HOST *v20; // rcx
  DWORD CanBeStarted; // eax
  _DWORD *v22; // r14
  int v23; // r8d
  bool v24; // zf
  struct _HAM_HOST_DEPENDENCY *v25; // r15
  __int64 CommitRequest; // rbp
  __int64 v27; // rdi
  _QWORD *Value; // rax
  DWORD v29; // esi
  __int64 v30; // rbp
  _QWORD *v31; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v32; // rcx
  char v33; // al
  BOOL v34; // r12d
  __int64 v35; // rcx
  struct _HAM_DEPENDENCY_GROUP *v36; // rdi
  int v37; // esi
  __int64 v38; // rbp
  _QWORD *v39; // rax
  DWORD v40; // edi
  __int64 v41; // rbp
  _QWORD *v42; // rbx
  __int64 v43; // r8
  int v44; // r9d
  unsigned __int16 v45; // r11
  __int16 v46; // bx
  __int64 v47; // r10
  __int64 v48; // r10
  __int64 v49; // rdi
  __int64 v50; // r15
  char v51; // dl
  unsigned __int64 v52; // rcx
  __int16 v53; // ax
  __int16 v54; // r9
  __int16 v55; // cx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int16 v61; // r11
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  DWORD v66; // edi
  _QWORD *v67; // rbx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  DWORD v70; // ebp
  HKEY hKey; // [rsp+30h] [rbp-48h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-40h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+10h] BYREF
  DWORD *v75; // [rsp+90h] [rbp+18h]

  v75 = a3;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    v70 = 15;
    v19 = -1073741776;
    goto LABEL_101;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v70 = 15;
    v19 = -1073741801;
    goto LABEL_101;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  Heap[2] = 0LL;
  RtlQueryPerformanceCounter(Heap);
  v9 = *(_QWORD *)(a1 + 80);
  hKey = 0LL;
  v10 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)v9, 0, &hKey);
  v12 = hKey;
  v13 = v10;
  if ( v10 >= 0 )
  {
    v14 = *(_DWORD *)(v9 + 560);
    switch ( v14 )
    {
      case 2:
        v15 = L"Mixed";
        break;
      case 4:
        v15 = L"Pure";
        break;
      case 8:
        v15 = L"System";
        break;
      default:
        __int2c();
        v15 = 0LL;
        break;
    }
    cbData = 8;
    v16 = RegQueryValueExW(hKey, v15, 0LL, 0LL, Data, &cbData);
    v13 = v16;
    if ( v16 > 0 )
      v13 = (unsigned __int16)v16 | 0xC0070000;
    if ( v13 >= 0 )
    {
      if ( cbData == 8 )
      {
        v17 = *(DWORD **)Data;
        v13 = 0;
        goto LABEL_11;
      }
      v13 = -1073739509;
    }
  }
  v17 = v75;
LABEL_11:
  if ( v12 )
    RegCloseKey(v12);
  v18 = 0LL;
  LOBYTE(v11) = 2;
  if ( v13 >= 0 )
    v18 = (unsigned __int64)v17;
  v19 = HampActBeginStateChange(a1, v11);
  if ( v19 < 0 )
  {
    v70 = 15;
    goto LABEL_126;
  }
  v20 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 549) = 0;
  HampHostUpdateActivityState(v20);
  if ( *(_QWORD *)(a1 + 512) && a2 == 1 )
  {
    v70 = 15;
    v19 = -1073741776;
LABEL_122:
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_125:
    HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 1);
LABEL_126:
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    goto LABEL_101;
  }
  CanBeStarted = HampActCanBeStarted(a1);
  cbData = CanBeStarted;
  if ( CanBeStarted == 14 )
  {
    v19 = -1058275327;
    v70 = 14;
    goto LABEL_122;
  }
  if ( CanBeStarted - 1 <= 6 )
  {
    v19 = -1058275328;
LABEL_121:
    v70 = CanBeStarted;
    goto LABEL_122;
  }
  if ( CanBeStarted - 8 <= 5 )
  {
    v19 = -1058275324;
    goto LABEL_121;
  }
  v22 = (_DWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 520) = v8;
  v8 = 0LL;
  v23 = *(_DWORD *)(a1 + 544) | 4;
  v24 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
  *(_DWORD *)(a1 + 544) = v23;
  if ( !v24 )
    *(_QWORD *)(a1 + 512) = *(_QWORD *)(v9 + 800);
  if ( a2 == 1 )
  {
    v25 = 0LL;
    HampHostQueueTerminateEx(
      (struct _RM_HAM_ACTIVITY_HOST *)v9,
      1u,
      5376,
      *(_QWORD *)(a1 + 64),
      ((v23 & 2) == 0) | 2,
      0);
  }
  else
  {
    v25 = 0LL;
  }
  CommitRequest = HampActGetCommitRequest((struct _HAM_ACTIVITY *)a1, v18);
  v27 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v24 = Value[2]-- == 1LL;
    if ( v24 )
      *Value &= ~2uLL;
  }
  *(_DWORD *)(v27 + 8) = 0;
  RtlReleaseSRWLockExclusive(v27);
  if ( a4 )
    *a4 = CommitRequest;
  v19 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88), CommitRequest);
  if ( v19 < 0 )
  {
    v70 = 15;
    goto LABEL_125;
  }
  v29 = HampLockTrackerId;
  v30 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v31 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v29) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v31 |= 2uLL;
    ++v31[2];
  }
  RtlAcquireSRWLockExclusive(v30);
  *(_DWORD *)(v30 + 8) = GetCurrentThreadId();
  v32 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *v22 &= ~1u;
  HampHostUpdateActivityState(v32);
  v33 = *(_BYTE *)(a1 + 548);
  v34 = (v33 == 1 || v33 == 4) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v35 = *(_QWORD *)(a1 + 80);
  v36 = *(struct _HAM_DEPENDENCY_GROUP **)(v35 + 688);
  if ( v36 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v37 = (*v22 >> 1) & 1;
    *v22 &= ~2u;
  }
  else
  {
    v37 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v35, 0);
  }
  if ( !v37 )
    v36 = 0LL;
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v25 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v38 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v39 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v39 & 2) == 0 )
      __int2c();
    v24 = v39[2]-- == 1LL;
    if ( v24 )
      *v39 &= ~2uLL;
  }
  *(_DWORD *)(v38 + 8) = 0;
  RtlReleaseSRWLockExclusive(v38);
  RtlWakeAddressAll(a1 + 544);
  if ( v25 )
    HampHostDepDestroy(v25);
  if ( v34 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v37 )
    HampDepGroupRunStateChangeWorker(v36);
  v40 = HampLockTrackerId;
  v41 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v42 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v40) )
      __int2c();
    *v42 |= 1uLL;
    ++v42[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4118 = GetCurrentThreadId();
  v45 = 102;
  v46 = *(_WORD *)(v41 + 1098);
  v47 = *(_QWORD *)(v41 + 1072);
  if ( v47 != v41 + 1072 )
  {
    v48 = v47 - 1296;
    if ( v48 )
    {
      v49 = 0x11000002000LL;
      v50 = 0x8800001000LL;
      do
      {
        if ( *(_DWORD *)(v48 + 1280) == 2 || (*(_BYTE *)(v48 + 1332) & 4) != 0 )
        {
          v51 = *(_BYTE *)(v48 + 1378);
          if ( (v51 & 8) != 0 || (v52 = *(int *)(v48 + 1336), (unsigned int)v52 <= 0x27) && _bittest64(&v50, v52) )
          {
            v55 = *(_WORD *)(v48 + 1376);
            v54 = 2;
            LOBYTE(v53) = v55;
          }
          else
          {
            v53 = *(_WORD *)(v48 + 1376);
            if ( (v53 & 0x10) != 0 || (unsigned int)v52 <= 0x28 && _bittest64(&v49, v52) )
            {
              v54 = 4;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
            else
            {
              v54 = 1;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
          }
          if ( (v55 & 0x10) == 0 && ((v56 = *(int *)(v48 + 1336), (unsigned int)v56 > 0x28) || !_bittest64(&v49, v56))
            || (v51 & 0x40) != 0 )
          {
            v54 |= 8u;
          }
          v57 = *(_DWORD *)(v48 + 1332) >> 3;
          LOWORD(v57) = v54 | (8 * (v53 & 8 | (2 * (v53 & 3 | (8 * (((*(_DWORD *)(v48 + 1332) & 8) != 0) | 2))))));
          v45 = RmpPolicyDigestMerge(v45, v57);
        }
        v43 = *(_QWORD *)(v48 + 1296);
        v58 = *(_QWORD *)(v48 + 1320);
        v59 = 3LL * *(int *)(v48 + 1328) + 139;
        v48 = 0LL;
        if ( v43 != v58 + 8 * v59 )
          v48 = v43 - 1296;
      }
      while ( v48 );
    }
  }
  *(_WORD *)(v41 + 1098) = v45;
  v60 = *(_QWORD *)(v41 - 8);
  v61 = v45 & 0x80;
  v62 = v46 & 0x80;
  if ( v62 && !v61 )
  {
    --*(_DWORD *)(v60 + 196);
  }
  else if ( !v62 && v61 )
  {
    ++*(_DWORD *)(v60 + 196);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v41 - 64), 2, v43, v44);
  QueryUnbiasedInterruptTime((PULONGLONG)(v41 + 1392));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v41 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v41 - 8) + 88LL));
  v63 = *(_QWORD *)(v41 - 16);
  *(_QWORD *)(v41 + 1144) = 0LL;
  v64 = *(_QWORD *)(v63 + 2720);
  v65 = *(_DWORD *)(v64 + 160);
  if ( (v65 & 3) == 0 )
  {
    *(_DWORD *)(v64 + 160) = v65 | 1;
    TpPostWork(*(_QWORD *)(v64 + 144));
  }
  v66 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v67 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v66) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v67 |= 2uLL;
    ++v67[2];
  }
  RtlAcquireSRWLockExclusive(v41);
  *(_DWORD *)(v41 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v41, 0);
  if ( HampLockTrackerId != -1 )
  {
    v68 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v68 & 2) == 0 )
      __int2c();
    v24 = v68[2]-- == 1LL;
    if ( v24 )
      *v68 &= ~2uLL;
  }
  *(_DWORD *)(v41 + 8) = 0;
  RtlReleaseSRWLockExclusive(v41);
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v69 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v69 & 1) == 0 )
      __int2c();
    v24 = v69[1]-- == 1LL;
    if ( v24 )
      *v69 &= ~1uLL;
  }
  v70 = cbData;
  v19 = 0;
LABEL_101:
  *v75 = v70;
  return (unsigned int)v19;
}
