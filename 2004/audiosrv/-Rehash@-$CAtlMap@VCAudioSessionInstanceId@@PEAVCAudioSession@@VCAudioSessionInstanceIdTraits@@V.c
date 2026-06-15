/*
 * XREFs of ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800D06C8
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800068A0 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18002BC30 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NI_N@Z @ 0x18002C3F0 (-InitHashTable@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTr.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x1800574FC (-UpdateRehashThresholds@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CEleme.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800D03D8 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 i; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = operator new(saturated_mul(v2, 8uLL));
      v5 = v4;
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v4, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 88);
            v9 = *(_DWORD *)(v7 + 96) % v2;
            *(_QWORD *)(v7 + 88) = v5[v9];
            v5[(unsigned int)v9] = v7;
            v7 = v8;
          }
          while ( v8 );
        }
      }
      operator delete(*(void **)a1);
      *(_QWORD *)a1 = v5;
      *(_DWORD *)(a1 + 16) = v2;
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::UpdateRehashThresholds(a1);
    }
    else
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::InitHashTable(
        a1,
        v2,
        0);
    }
  }
}
