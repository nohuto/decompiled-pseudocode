/*
 * XREFs of ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C30
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018880 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180046630 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D960 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019A40 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampHostCheckStartPendingActivities(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)a1 + 600);
  v2 = (unsigned int)-(*v1 != (_QWORD)v1);
  v3 = (*v1 - 96LL) & -(__int64)(*v1 != (_QWORD)v1);
  while ( v3 )
  {
    if ( *(_BYTE *)(v3 + 548) == 2 )
    {
      if ( *(_BYTE *)(v3 + 549) )
      {
        v5 = HampActTryStart(v3, v2);
        if ( v5 )
        {
          if ( (unsigned int)dword_1800B3218 > 5 )
          {
            v8 = v5;
            v9 = *(_QWORD *)(v3 + 40);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (int)&dword_1800B3218,
              (int)&unk_1800A1419,
              v6,
              v7,
              (__int64)&v9,
              (__int64)&v8);
          }
        }
      }
    }
    v2 = *(_QWORD *)(v3 + 96);
    v4 = *(_QWORD *)(v3 + 80);
    v3 = 0LL;
    if ( v2 != v4 + 600 )
      v3 = v2 - 96;
  }
}
