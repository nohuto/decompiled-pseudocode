/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5A17 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_CAPABILITIES@@PAPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1B5AB3 (-CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_C.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5C93 (-FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 *     ?ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1B5FB3 (-ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIV.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x1AD8A9 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 */

int __fastcall InteractiveControlParser::GetScaledComponentValue(_DWORD *a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v4; // edi
  signed __int64 v5; // rax
  __int64 v6; // rax
  const char *v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  unsigned int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = a1[28];
  v3 = a1[27];
  v4 = a1[29];
  v8 = (const char *)((unsigned __int64)(v3 * (__int64)a2) >> 32);
  v9 = v3 * a2;
  v5 = v2 * (unsigned __int64)v4;
  if ( v5 )
  {
    return __SPAIR64__((unsigned int)v8, v9) / v5;
  }
  else
  {
    if ( (unsigned int)dword_2662F8 > 3 )
    {
      v11 = v4;
      v10 = v2;
      v9 = v3;
      v8 = "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        HIDWORD(v5) | v5,
        byte_25778D,
        HIDWORD(v5) | v5,
        HIDWORD(v5) | v5,
        &v8,
        (int)&v9,
        (int)&v10,
        (int)&v11);
    }
    LODWORD(v6) = 1;
  }
  return v6;
}
