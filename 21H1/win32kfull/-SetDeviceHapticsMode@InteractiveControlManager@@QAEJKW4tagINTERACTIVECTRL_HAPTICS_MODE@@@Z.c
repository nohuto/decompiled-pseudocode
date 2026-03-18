/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE936
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1AEA0E (-SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B2C59 (-SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

int __thiscall InteractiveControlManager::SetDeviceHapticsMode(int *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h] BYREF

  v3 = a3;
  v5 = 0;
  v11 = (int)this;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v13 = 0;
    v12 = (int)"InteractiveControlManager::SetDeviceHapticsMode entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256C07,
      (int)this,
      (int)this,
      (const char **)&v12,
      (int)&v13,
      (int)&a3);
  }
  v6 = 5;
  v7 = this + 6;
  a3 = 5;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      v9 = InteractiveControlDevice::SetHapticsMode(v3);
      v5 = v9;
      if ( v9 < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        v12 = v9;
        v13 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          v8,
          v8,
          (const char **)&v13,
          (int)&v12);
      }
      v6 = a3;
    }
    ++v7;
    a3 = --v6;
  }
  while ( v6 );
  *(_DWORD *)(v11 + 20) = v3;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    a3 = v5;
    v11 = (int)"InteractiveControlManager::SetDeviceHapticsMode exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v8,
      v8,
      (const char **)&v11,
      (int)&a3);
  }
  return v5;
}
