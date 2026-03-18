/*
 * XREFs of ?GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1ADE87
 * Callers:
 *     ?GetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x19F98E (-GetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QAEJXZ @ 0xD7548 (-ReadSettings@InteractiveControlSettings@@QAEJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

int __thiscall InteractiveControlManager::GetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2)
{
  int v3; // esi
  int Settings; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v6 = (int)"InteractiveControlManager::GetExternalParameters entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_2662F8,
      byte_256B00,
      0,
      0,
      (const char **)&v6);
  }
  if ( a2 )
  {
    Settings = InteractiveControlSettings::ReadSettings((InteractiveControlManager *)((char *)this + 48));
    v3 = Settings;
    if ( Settings < 0 && (unsigned int)dword_2662F8 > 2 )
    {
      v6 = Settings;
      v7 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        (int)this,
        (int)this,
        (const char **)&v7,
        (int)&v6);
    }
    *(_DWORD *)a2 = *((_DWORD *)this + 16);
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v7 = v3;
    v6 = (int)"InteractiveControlManager::GetExternalParameters exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      (int)this,
      (int)this,
      (const char **)&v6,
      (int)&v7);
  }
  return v3;
}
