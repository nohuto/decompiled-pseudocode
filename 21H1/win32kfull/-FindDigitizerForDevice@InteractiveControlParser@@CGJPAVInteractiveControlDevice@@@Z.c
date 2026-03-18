/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5C93
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInteractiveControlDevice@@@Z @ 0x1B58D8 (-BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInterac.c)
 *     ?ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1B5FB3 (-ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIV.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 */

int __thiscall InteractiveControlParser::FindDigitizerForDevice(_DWORD *this)
{
  int v1; // ebx
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v9; // [esp+0h] [ebp-30h]
  int v10; // [esp+4h] [ebp-2Ch]
  int v11; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+14h] [ebp-1Ch] BYREF
  int v13; // [esp+18h] [ebp-18h] BYREF
  _DWORD v14[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+24h] [ebp-Ch]
  int v16; // [esp+28h] [ebp-8h]

  v13 = (int)this;
  v1 = 0;
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0;
  v16 = 0;
  v2 = this + 37;
  v3 = (_DWORD *)this[37];
  if ( v3 != this + 37 )
  {
    do
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
      if ( v4[2] == 1 )
      {
        v5 = *((unsigned __int16 *)v4 + 36);
        if ( v5 == 48 )
        {
          v15 = InteractiveControlParser::GetScaledComponentValue(v9, v10) + 1;
        }
        else if ( v5 == 49 )
        {
          v16 = InteractiveControlParser::GetScaledComponentValue(v9, v10) + 1;
        }
      }
    }
    while ( v3 != v2 );
    this = (_DWORD *)v13;
  }
  v6 = this + 47;
  RIMFindTouchDigitizerWithSize(v14, this + 47);
  if ( !*v6 )
  {
    if ( (unsigned int)dword_2662F8 > 3 )
    {
      v13 = v16;
      v12 = v15;
      v11 = (int)"InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_257637,
        v7,
        v7,
        (const char **)&v11,
        (int)&v12,
        (int)&v13);
    }
    return -1073741632;
  }
  return v1;
}
