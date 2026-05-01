/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180029FAC
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180047C50 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18002A220 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18002A6D4 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x18002A72C (-HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_K.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18002A7E8 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18002A884 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@44544@Z @ 0x18007D0C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@-$_t.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r13
  int IsDebugEnabled; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  __int64 v16; // rcx
  unsigned int v17[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v18[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v19[2]; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  _BYTE v23[8]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-1h]
  _QWORD v26[3]; // [rsp+B0h] [rbp+7h] BYREF

  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  if ( *a2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))(*((_QWORD *)a1 + 99));
  else
    v6 = 0LL;
  HampUtilQueryQuiesceTimeouts(v19, v18);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, v17);
  v8 = v17[0];
  if ( IsDebugEnabled < 0 )
    v8 = 0;
  v17[0] = v8;
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v9 = *a2;
  v10 = *((_QWORD *)a1 + 81);
  v26[0] = 0LL;
  v22 = v9;
  v11 = v10 >> 29;
  LOBYTE(v11) = (v10 >> 29) & 7;
  v26[1] = v9;
  v12 = *a3;
  v13 = v8 & 1;
  v20 = v11;
  v26[0] = (unsigned int)v10 >> 29;
  v14 = v18[0];
  v21 = v12;
  v26[2] = v12;
  do
  {
    v15 = (v10 >> 41) & 1 | (2 * ((v10 >> 42) & 1 | (2 * (v13 | (2 * ((v10 >> 46) & 1))))));
    v18[0] = v15;
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 99),
      1LL);
    HampHostComputeQuiesceAction(
      (struct _HAM_HOST_QUIESCE_ACTION *)v26,
      (struct _HAM_HOST_STATE_SNAPSHOT *)v18,
      v6,
      v19[0],
      v14,
      (struct _HAM_HOST_QUIESCE_ACTION *)v23);
    if ( v24 )
      RmpSystemResourceTimerSet(a1, v24, *((void **)a1 + 99));
    HampHostQueryIsDebugEnabled(a1, v17);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v10 = *((_QWORD *)a1 + 81);
    v13 = v17[0] & 1;
  }
  while ( v15 != ((v10 >> 41) & 1 | (2 * ((v10 >> 42) & 1 | (2 * (v13 | (2 * ((v10 >> 46) & 1))))))) );
  LOBYTE(v10) = v23[0];
  HampHostCommitQuiesceAction(a1, v10);
  *a2 = v24;
  *a3 = v25;
  *((_DWORD *)a1 + 168) = *(_DWORD *)a2;
  RtlQueryUnbiasedInterruptTime(v19);
  *((_DWORD *)a1 + 167) = *(_QWORD *)v19 / 0x2710uLL;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v20 = *a3;
      *(_QWORD *)v19 = *a2;
      *(_QWORD *)v18 = *((_QWORD *)a1 - 4);
      *(_QWORD *)v17 = (char *)a1 + 24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v16,
        &unk_1800A0ED8);
    }
  }
}
