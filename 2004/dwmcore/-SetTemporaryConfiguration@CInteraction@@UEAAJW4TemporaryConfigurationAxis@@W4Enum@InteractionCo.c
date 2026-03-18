/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801C84D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C7124 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180223B68 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  CComposition *v5; // rbx
  int v7; // r14d
  int ManipulationManager; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // ebx
  int updated; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+54h] [rbp-1Ch] BYREF
  int v21; // [rsp+58h] [rbp-18h] BYREF
  struct CManipulationManager *v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  v5 = *(CComposition **)(a1 + 24);
  v22 = 0LL;
  v7 = a4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  ManipulationManager = CComposition::GetManipulationManager(v5, &v22);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ManipulationManager, 0x2B3u, 0LL);
  }
  else
  {
    v13 = a5;
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v11, a1, a2, a3, v7, a5);
    v12 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x2BAu, 0LL);
    }
    else
    {
      if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
      {
        v24 = v13;
        v19 = v7;
        v20 = a3;
        v21 = a2;
        v23 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v15,
          byte_1802E6C70,
          v16,
          v17,
          (__int64)&v23,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v24);
      }
      if ( dword_180349490 )
        SetEvent(CManipulationManager::s_rghWaitEvents);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return v12;
}
