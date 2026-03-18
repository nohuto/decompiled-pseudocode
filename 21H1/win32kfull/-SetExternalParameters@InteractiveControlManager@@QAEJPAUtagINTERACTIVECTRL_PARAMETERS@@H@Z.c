/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1AEA0E
 * Callers:
 *     ?SetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x19F99E (-SetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE936 (-SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QAEJXZ @ 0x1B15A7 (-WriteSettings@InteractiveControlSettings@@QAEJXZ.c)
 */

int __thiscall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v9 = a3;
    v10 = (int)"InteractiveControlManager::SetExternalParameters entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256B30,
      (int)this,
      (int)this,
      (const char **)&v10,
      (int)&v9);
  }
  if ( a2 )
  {
    v5 = *(_DWORD *)a2;
    *((_DWORD *)this + 16) = *(_DWORD *)a2;
    v6 = InteractiveControlManager::SetDeviceHapticsMode((int *)this, v5 == 0, v5 == 0);
    v4 = v6;
    if ( v6 < 0 && (unsigned int)dword_2662F8 > 2 )
    {
      v10 = v6;
      v9 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        (int)this,
        (int)this,
        (const char **)&v9,
        (int)&v10);
    }
    if ( a3 )
    {
      v7 = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 48));
      v4 = v7;
      if ( v7 < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        v10 = v7;
        v9 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          (int)this,
          (int)this,
          (const char **)&v9,
          (int)&v10);
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v10 = v4;
    v9 = (int)"InteractiveControlManager::SetExternalParameters exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      (int)this,
      (int)this,
      (const char **)&v9,
      (int)&v10);
  }
  return v4;
}
