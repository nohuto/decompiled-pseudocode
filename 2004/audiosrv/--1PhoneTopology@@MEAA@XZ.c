/*
 * XREFs of ??1PhoneTopology@@MEAA@XZ @ 0x18005734C
 * Callers:
 *     ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x180057310 (--_GPhoneTopology@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800574C0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneT.c)
 *     ?FreePlexes@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x180068D3C (-FreePlexes@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800D03D8 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180107C90 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?FreeNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180140060 (-FreeNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 */

void __fastcall PhoneTopology::~PhoneTopology(PhoneTopology *this)
{
  char *v2; // rcx
  void **v3; // rbx
  void *v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // eax

  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  if ( *((_QWORD *)this + 4) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    *((_DWORD *)this + 44) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    SetThreadpoolWait(*((PTP_WAIT *)this + 4), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 4), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v2 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void **)((char *)this + 184);
  ++*((_DWORD *)this + 58);
  v4 = (void *)*((_QWORD *)this + 23);
  v5 = v4;
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
    {
      v8 = *((_QWORD *)v4 + i);
      v5 = v4;
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = *(_QWORD *)(v8 + 16);
          ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreeNode(
            (char *)this + 184,
            v9);
        }
        while ( v8 );
        v4 = *v3;
        v5 = *v3;
      }
    }
  }
  operator delete(v5);
  *v3 = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  if ( !*((_DWORD *)this + 58) )
  {
    v10 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize((char *)this + 184);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      (char *)this + 184,
      v10,
      0LL);
  }
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreePlexes((char *)this + 184);
  --*((_DWORD *)this + 58);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll((char *)this + 88);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
