/*
 * XREFs of ?SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE72E
 * Callers:
 *     _NtUserSetInteractiveCtrlRotationAngle@20 @ 0x1695F9 (_NtUserSetInteractiveCtrlRotationAngle@20.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x1AD8A9 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 */

int __thiscall InteractiveControlManager::SetDeviceComponentResolution(char *this, int a2, int *a3, int a4, int a5)
{
  char *v5; // eax
  int v6; // esi
  int *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int *v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h] BYREF
  char *v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h] BYREF

  v5 = this;
  v6 = 0;
  v14 = this;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v12 = a3;
    v13 = a4;
    v15 = a2;
    v16 = (int)"InteractiveControlManager::SetDeviceComponentResolution entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)this,
      byte_256BA9,
      (int)this,
      (int)this,
      (const char **)&v16,
      (int)&v15,
      (int)&v12,
      (int)&v13);
    v5 = v14;
  }
  v7 = (int *)(v5 + 24);
  v8 = 5;
  v12 = v7;
  v13 = 5;
  do
  {
    v9 = *v7;
    if ( *v7 && (!a2 || a2 == *(_DWORD *)(v9 + 4)) )
    {
      v10 = InteractiveControlDevice::SetComponentResolution(v9, a3, a4, a5);
      v6 = v10;
      if ( v10 < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        v16 = v10;
        v15 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          v9,
          v9,
          (const char **)&v15,
          (int)&v16);
      }
      v8 = v13;
      v7 = v12;
    }
    ++v7;
    --v8;
    v12 = v7;
    v13 = v8;
  }
  while ( v8 );
  if ( !a2 && a3 == (int *)3 )
    *((_DWORD *)v14 + 4) = a4;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v16 = v6;
    v15 = (int)"InteractiveControlManager::SetDeviceComponentResolution exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v9,
      v9,
      (const char **)&v15,
      (int)&v16);
  }
  return v6;
}
