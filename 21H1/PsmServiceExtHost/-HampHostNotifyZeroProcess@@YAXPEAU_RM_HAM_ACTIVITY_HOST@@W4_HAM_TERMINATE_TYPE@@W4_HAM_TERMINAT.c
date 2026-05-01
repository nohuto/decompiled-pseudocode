/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029908
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028C2C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180006468 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180022F90 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800259F8 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025CE8 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002752C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x180029510 (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180029760 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180029860 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C30 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C6C (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002A98C (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U3@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@665434@Z @ 0x18002AB40 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostNotifyZeroProcess(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v15; // rbx
  unsigned int v16[5]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v18[6]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v19[136]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  v16[1] = a2;
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 968);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v17) < 0
      || (v10 = v17, v17 == -1LL) )
    {
      v10 = v9;
    }
    HampUtilSaveHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, (v9 >> 1) + (v10 >> 1));
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 776), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v5 = 0;
  }
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v11 = *(_QWORD *)(a1 + 800) + 1LL;
  HampHostInvalidateActivities((struct _RM_HAM_ACTIVITY_HOST *)a1, a3, v11, 0);
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 836) )
    {
      RtlQueryUnbiasedInterruptTime(v18);
      v5 = v18[0] / 0x2710uLL - *(_DWORD *)(a1 + 836);
    }
    if ( dword_1800B3218 )
    {
      v16[0] = 130;
      HampUtilGetAumidFromPsmKey((const unsigned __int16 *)(a1 + 24), v16, v19);
      if ( (unsigned int)dword_1800B3218 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
        {
          v18[1] = 0x1000000LL;
          v18[2] = v19;
          v16[2] = a4;
          v18[3] = v11 - 1;
          v18[4] = *(_QWORD *)(a1 - 32);
          v16[3] = v5;
          v16[4] = a3;
          v18[5] = a1 + 24;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
            v12,
            &unk_1800A0FAC);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 560) == 2 )
    {
      v15 = *(_QWORD *)(a1 + 776);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v15);
      *(_WORD *)(v15 + 608) = a3;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v15);
    }
  }
  else
  {
    *a5 = 0;
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 832) = 0LL;
  *(_WORD *)(a1 + 648) = 0;
  v13 = *(_QWORD *)(a1 + 648) & 0xFFEDFFFFFD97FFFFuLL;
  *(_QWORD *)(a1 + 800) = v11;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_QWORD *)(a1 + 648) = v13 | 0x1940000;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_DWORD *)(a1 + 840) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampHostCheckCancelCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 800);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  return HampHostChangeApplicationExecutionState(a1, 3u);
}
