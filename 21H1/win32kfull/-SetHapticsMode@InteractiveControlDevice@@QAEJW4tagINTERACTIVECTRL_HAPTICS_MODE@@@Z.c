/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B2C59
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE936 (-SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z @ 0x1B5113 (-SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z.c)
 */

int __thiscall InteractiveControlDevice::SetHapticsMode(_DWORD *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  unsigned __int16 v5; // ax
  SimpleHapticsController *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  v3 = 0;
  v5 = 2;
  v10 = 2;
  if ( !a2 && !this[9] )
  {
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 12)
      || !*((_DWORD *)InteractiveControlManager::Instance() + 16) )
    {
      v5 = v10;
    }
    else
    {
      v5 = 3;
    }
  }
  v6 = (SimpleHapticsController *)this[76];
  if ( v6 )
  {
    v7 = SimpleHapticsController::SetAutoTriggerWaveform(v6, v5);
    v3 = v7;
    if ( v7 >= 0 )
    {
      this[8] = v2;
    }
    else if ( (unsigned int)dword_2662F8 > 2 )
    {
      a2 = v7;
      v10 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        v8,
        v8,
        (const char **)&v10,
        (int)&a2);
    }
  }
  return v3;
}
