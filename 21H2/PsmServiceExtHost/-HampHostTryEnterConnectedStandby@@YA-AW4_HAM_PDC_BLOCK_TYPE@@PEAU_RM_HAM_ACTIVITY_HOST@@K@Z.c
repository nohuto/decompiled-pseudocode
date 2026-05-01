/*
 * XREFs of ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E954
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x180082EB8 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002808 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18002A220 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@433@Z @ 0x18007D660 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 */

char __fastcall HampHostTryEnterConnectedStandby(__int64 a1, unsigned int a2)
{
  char v4; // si
  unsigned __int64 v5; // r14
  int v6; // edx
  int v7; // r14d
  struct _HAM_ACTIVITY *i; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  void *v15; // [rsp+50h] [rbp-20h] BYREF
  void *v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  if ( (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, (unsigned int *)&v18) >= 0 && (_DWORD)v18 )
    return 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v6) )
  {
    v4 = 0;
    for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
          ;
          i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v10) )
    {
      v10 = (__int64)i;
      if ( !i )
        goto LABEL_6;
      if ( (*((_BYTE *)i + 544) & 0x28) == 0 && (unsigned __int8)(*((_BYTE *)i + 548) - 2) <= 1u )
      {
        v11 = *((_DWORD *)i + 28);
        if ( (v11 & 0x4000) != 0 )
        {
          v4 = 2;
          if ( (*(_BYTE *)(a1 + 656) & 4) == 0 && a2 >= *(_DWORD *)(v5 + 248) )
          {
            v7 = HampHostQueueTerminateEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 3u, 2048, 0LL, 1, 0);
            if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
            {
              v14 = *(_QWORD *)(a1 - 32);
              v15 = (void *)(a1 + 24);
              v18 = 0x1000000LL;
              v16 = (void *)(v10 + 124);
              v17 = *(_QWORD *)(v10 + 40);
              v19 = v14;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                v14,
                byte_1800A09EA,
                v12,
                v13,
                (__int64)&v17,
                &v16,
                &v15,
                (__int64)&v19,
                (__int64)&v18);
            }
            goto LABEL_7;
          }
        }
        if ( (*(_BYTE *)(v10 + 120) & 4) != 0 )
        {
          v4 = 3;
LABEL_21:
          HampActRequestStopEx(v10, 3u, 4, 0, 6912, (v11 & 0x800) != 0 ? 8 : 4, 0LL);
          continue;
        }
        if ( (*(_BYTE *)(v10 + 120) & 8) != 0 )
        {
          v4 = 4;
          if ( a2 >= *(_DWORD *)(v5 + 244) )
            goto LABEL_21;
        }
      }
    }
  }
  v4 = 1;
LABEL_6:
  v7 = 0;
LABEL_7:
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v7 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 688));
  return v4;
}
