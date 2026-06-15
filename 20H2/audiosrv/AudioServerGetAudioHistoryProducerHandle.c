/*
 * XREFs of AudioServerGetAudioHistoryProducerHandle @ 0x1800DDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010A20 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B8ACC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B8FA0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012D80C (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerHandle(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  LPCRITICAL_SECTION v9; // rbx
  _QWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  EnterCriticalSection(&g_csVadList);
  v6 = (_QWORD *)g_VADServerList;
  v11 = (_QWORD *)g_VADServerList;
  while ( v6 )
  {
    v7 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v5, (__int64)v6);
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 544LL) == a2 )
    {
      *a3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      if ( ++LODWORD(v9[1].DebugInfo) == 1 )
      {
        CAudioDGProcess::CancelADGTerminationTimer(v9);
        CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v9);
      }
      LeaveCriticalSection(v9);
      break;
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v8, &v11);
    v6 = v11;
  }
  LeaveCriticalSection(&g_csVadList);
  return 0LL;
}
