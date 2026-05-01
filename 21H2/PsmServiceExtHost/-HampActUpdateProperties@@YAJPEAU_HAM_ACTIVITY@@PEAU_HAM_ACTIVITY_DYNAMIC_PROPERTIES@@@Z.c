/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FD90
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023284 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180008B88 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012970 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800178E8 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A928 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  DWORD v3; // esi
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  _QWORD *Value; // rdi
  int v8; // eax
  int v9; // ebp
  char v10; // di
  int v11; // esi
  int v12; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rdi
  int v14; // eax
  int v15; // edx
  struct _HAM_DEPENDENCY_GROUP *v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // rax
  bool v19; // zf
  DWORD v20; // ebp
  __int64 v21; // rdi
  _QWORD *v22; // rsi
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  DWORD v28; // esi
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v33; // edi
  int v34; // [rsp+40h] [rbp+8h]

  v3 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v33 = -1073741275;
LABEL_57:
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
    return v33;
  }
  if ( (*((_BYTE *)a1 + 544) & 8) != 0 )
  {
    v33 = -1058275327;
    goto LABEL_57;
  }
  v8 = RmpImportanceToRequiredExecutionSpeed(*((_DWORD *)a1 + 106));
  v9 = *((_DWORD *)a1 + 120) & 3;
  v10 = *(_DWORD *)a2;
  if ( v9 <= v8 )
    v9 = v8;
  v11 = HIWORD(*(_DWORD *)a2);
  if ( (v11 & 1) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x200u;
    *((_DWORD *)a1 + 28) |= (v10 & 1) << 9;
  }
  if ( (v11 & 4) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x4000u;
    *((_DWORD *)a1 + 28) |= (v10 & 8) << 11;
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)(v4 + 120), 0);
  }
  if ( (v11 & 2) != 0 )
  {
    *((_DWORD *)a1 + 28) &= 0xFFFFFE7F;
    *((_DWORD *)a1 + 28) |= (v10 & 6) << 6;
  }
  v12 = *((_DWORD *)a2 + 1);
  v13 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v34 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( !HIBYTE(v12) )
    {
      HIBYTE(v34) = *((_BYTE *)a1 + 427);
      v12 = v34;
    }
    *((_DWORD *)a1 + 106) = v12;
    HampHostUpdateActivityState(v13);
  }
  v14 = RmpImportanceToRequiredExecutionSpeed(*((_DWORD *)a1 + 106));
  v15 = *((_DWORD *)a1 + 120) & 3;
  if ( v15 <= v14 )
    v15 = v14;
  if ( v9 == v15 || (unsigned __int8)(*((_BYTE *)a1 + 548) - 2) > 1u )
    v16 = 0LL;
  else
    v16 = HampHostCheckEnterDependencyWorker(v13);
  v17 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v18 & 2) == 0 )
      __int2c();
    v19 = v18[2]-- == 1LL;
    if ( v19 )
      *v18 &= ~2uLL;
  }
  *(_DWORD *)(v17 + 8) = 0;
  RtlReleaseSRWLockExclusive(v17);
  if ( v16 )
    HampDepGroupRunStateChangeWorker(v16);
  v20 = HampLockTrackerId;
  v21 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v20) )
      __int2c();
    *v22 |= 1uLL;
    ++v22[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4118 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v21 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v21 - 64), 2, v23, v24);
  QueryUnbiasedInterruptTime((PULONGLONG)(v21 + 1392));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v21 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v21 - 8) + 88LL));
  v25 = *(_QWORD *)(v21 - 16);
  *(_QWORD *)(v21 + 1144) = 0LL;
  v26 = *(_QWORD *)(v25 + 2720);
  v27 = *(_DWORD *)(v26 + 160);
  if ( (v27 & 3) == 0 )
  {
    *(_DWORD *)(v26 + 160) = v27 | 1;
    TpPostWork(*(_QWORD *)(v26 + 144));
  }
  v28 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v29 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v29 |= 2uLL;
    ++v29[2];
  }
  RtlAcquireSRWLockExclusive(v21);
  *(_DWORD *)(v21 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v21, 0);
  if ( HampLockTrackerId != -1 )
  {
    v30 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v30 & 2) == 0 )
      __int2c();
    v19 = v30[2]-- == 1LL;
    if ( v19 )
      *v30 &= ~2uLL;
  }
  *(_DWORD *)(v21 + 8) = 0;
  RtlReleaseSRWLockExclusive(v21);
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v31 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v31 & 1) == 0 )
      __int2c();
    v19 = v31[1]-- == 1LL;
    if ( v19 )
      *v31 &= ~1uLL;
  }
  return 0LL;
}
