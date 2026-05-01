/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20
 * Callers:
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B07C (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B1D0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022758 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180027244 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007F228 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180006724 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000969C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012970 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180021420 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800223A0 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180022430 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035C9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180038510 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18008147C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgW.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  int v3; // r13d
  __int64 v4; // rbp
  DWORD v5; // esi
  _QWORD *Value; // rdi
  _OWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  DWORD v10; // ecx
  _QWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  _OWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  void *v22; // rcx
  DWORD v23; // esi
  __int64 v24; // rbp
  _QWORD *v25; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v26; // rcx
  char v27; // al
  BOOL v28; // esi
  __int64 v29; // rcx
  struct _HAM_DEPENDENCY_GROUP *v30; // r14
  int v31; // ebp
  struct _HAM_HOST_DEPENDENCY *v32; // r12
  __int64 v33; // r15
  _QWORD *v34; // rax
  unsigned __int64 v35; // rsi
  struct _HOST_ACTIVITY_MANAGER *v36; // rcx
  DWORD v37; // r14d
  __int64 v38; // rsi
  _QWORD *v39; // rbp
  __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  DWORD v45; // ebp
  _QWORD *v46; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax

  LOBYTE(a2) = 4;
  v3 = HampActBeginStateChange(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = *((_QWORD *)a1 + 8);
  if ( v4 )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        __int2c();
      *Value |= 0x200uLL;
      ++Value[10];
    }
    RtlAcquireSRWLockExclusive(v4 + 24);
    *(_DWORD *)(v4 + 32) = GetCurrentThreadId();
    v7 = (_OWORD *)((char *)a1 + 48);
    v8 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v8 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v9 = (_QWORD *)*((_QWORD *)a1 + 7), (_OWORD *)*v9 != v7) )
    {
LABEL_94:
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = HampLockTrackerId;
    *v7 = 0LL;
    if ( v10 != -1 )
    {
      v11 = TlsGetValue(v10);
      if ( (*(_DWORD *)v11 & 0x200LL) == 0 )
        __int2c();
      v12 = v11[10]-- == 1LL;
      if ( v12 )
        *v11 &= ~0x200uLL;
    }
    *(_DWORD *)(v4 + 32) = 0;
    RtlReleaseSRWLockExclusive(v4 + 24);
  }
  v13 = *((_QWORD *)a1 + 12);
  v14 = (_OWORD *)((char *)a1 + 96);
  if ( *(struct _HAM_ACTIVITY **)(v13 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_94;
  v15 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_OWORD *)*v15 != v14 )
    goto LABEL_94;
  *v15 = v13;
  *(_QWORD *)(v13 + 8) = v15;
  *v14 = 0LL;
  v16 = *((_QWORD *)a1 + 10);
  HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v16);
  v17 = *((_QWORD *)a1 + 66);
  if ( v17 )
  {
    if ( (unsigned int)TpSetTimerEx(v17, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 66));
    *((_QWORD *)a1 + 66) = 0LL;
    *((_QWORD *)a1 + 67) = 0LL;
  }
  if ( *(struct _HAM_ACTIVITY **)(v16 + 1000) == a1 )
    *(_QWORD *)(v16 + 1000) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v16);
  v18 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v19 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v19 & 2) == 0 )
      __int2c();
    v12 = v19[2]-- == 1LL;
    if ( v12 )
      *v19 &= ~2uLL;
  }
  *(_DWORD *)(v18 + 8) = 0;
  RtlReleaseSRWLockExclusive(v18);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      *(_QWORD *)(*((_QWORD *)a1 + 10) - 32LL),
      &unk_1800A1D23);
  v20 = *((_QWORD *)a1 + 11);
  v21 = *(_QWORD *)(v20 + 16);
  if ( v21 != -1LL )
  {
    RmSrvResourceSetReleaseResources(RmSvcGlobals, v21, 0);
    *(_QWORD *)(v20 + 16) = -1LL;
  }
  v22 = (void *)*((_QWORD *)a1 + 63);
  if ( v22 )
  {
    HampSystemActivationClientDeactivate(v22);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  v23 = HampLockTrackerId;
  v24 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v25 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v25 |= 2uLL;
    ++v25[2];
  }
  RtlAcquireSRWLockExclusive(v24);
  *(_DWORD *)(v24 + 8) = GetCurrentThreadId();
  v26 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_DWORD *)a1 + 136) &= ~1u;
  HampHostUpdateActivityState(v26);
  v27 = *((_BYTE *)a1 + 548);
  v28 = (v27 == 4 || v27 == 1) && ((*((_BYTE *)a1 + 120) & 0xC) != 0 || (*((_DWORD *)a1 + 28) & 0x4000) != 0);
  v29 = *((_QWORD *)a1 + 10);
  v30 = *(struct _HAM_DEPENDENCY_GROUP **)(v29 + 688);
  if ( v30 )
  {
    HampActCheckEnterDependencyWorker(a1);
    v31 = (*((_DWORD *)a1 + 136) >> 1) & 1;
    *((_DWORD *)a1 + 136) &= ~2u;
  }
  else
  {
    v31 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v29, 0);
  }
  if ( !v31 )
    v30 = 0LL;
  if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v32 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  else
  {
    v32 = 0LL;
  }
  v33 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v34 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v34 & 2) == 0 )
      __int2c();
    v12 = v34[2]-- == 1LL;
    if ( v12 )
      *v34 &= ~2uLL;
  }
  *(_DWORD *)(v33 + 8) = 0;
  RtlReleaseSRWLockExclusive(v33);
  RtlWakeAddressAll((char *)a1 + 544);
  if ( v32 )
    HampHostDepDestroy(v32);
  if ( v28 )
  {
    v35 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)(v35 + 120));
    v36 = *(struct _HOST_ACTIVITY_MANAGER **)(v35 + 120);
    if ( *(_DWORD *)(v35 + 204) )
    {
      ++*(_QWORD *)(v35 + 208);
      HampManagerReleaseLockExclusive(v36);
      RtlWakeAddressAll(v35 + 208);
    }
    else
    {
      HampManagerReleaseLockExclusive(v36);
    }
  }
  if ( v31 )
    HampDepGroupRunStateChangeWorker(v30);
  v37 = HampLockTrackerId;
  v38 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v39 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v37) )
      __int2c();
    *v39 |= 1uLL;
    ++v39[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4118 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v38 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v38 - 64), 2, v40, v41);
  QueryUnbiasedInterruptTime((PULONGLONG)(v38 + 1392));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v38 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v38 - 8) + 88LL));
  v42 = *(_QWORD *)(v38 - 16);
  *(_QWORD *)(v38 + 1144) = 0LL;
  v43 = *(_QWORD *)(v42 + 2720);
  v44 = *(_DWORD *)(v43 + 160);
  if ( (v44 & 3) == 0 )
  {
    *(_DWORD *)(v43 + 160) = v44 | 1;
    TpPostWork(*(_QWORD *)(v43 + 144));
  }
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v46 |= 2uLL;
    ++v46[2];
  }
  RtlAcquireSRWLockExclusive(v38);
  *(_DWORD *)(v38 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v38, 0);
  if ( HampLockTrackerId != -1 )
  {
    v47 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v47 & 2) == 0 )
      __int2c();
    v12 = v47[2]-- == 1LL;
    if ( v12 )
      *v47 &= ~2uLL;
  }
  *(_DWORD *)(v38 + 8) = 0;
  RtlReleaseSRWLockExclusive(v38);
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v48 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v48 & 1) == 0 )
      __int2c();
    v12 = v48[1]-- == 1LL;
    if ( v12 )
      *v48 &= ~1uLL;
  }
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return (unsigned int)v3;
}
