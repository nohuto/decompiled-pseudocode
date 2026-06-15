/*
 * XREFs of ?InitHashTable@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NI_N@Z @ 0x18002C3F0
 * Callers:
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002BA80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800CF25C (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800D06C8 (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x1800D07F8 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x1800574FC (-UpdateRehashThresholds@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CEleme.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

char __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::InitHashTable(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rsi
  void *v6; // rcx
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  void *v9; // rax

  v4 = a2;
  v6 = *(void **)a1;
  if ( v6 )
  {
    operator delete(v6);
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_8;
  v7 = 8 * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v7 = -1LL;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, v7);
  *(_QWORD *)a1 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 8 * v4);
LABEL_8:
    *(_DWORD *)(a1 + 16) = v4;
    ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::UpdateRehashThresholds(a1);
    LOBYTE(v9) = 1;
  }
  return (char)v9;
}
