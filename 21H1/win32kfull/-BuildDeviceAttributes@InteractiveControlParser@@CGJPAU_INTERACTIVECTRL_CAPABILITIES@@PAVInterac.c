/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInteractiveControlDevice@@@Z @ 0x1B58D8
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveControlDevice@@@Z @ 0x1B5930 (-BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveCon.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5A17 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5C93 (-FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 */

int __thiscall InteractiveControlParser::BuildDeviceAttributes(_DWORD *this)
{
  int result; // eax
  struct InteractiveControlDevice *v3; // [esp+0h] [ebp-10h]
  struct InteractiveControlDevice *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-4h] BYREF

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(v3);
  if ( result < 0 )
    result = 0;
  if ( this[18] )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(v4);
    if ( result < 0 )
    {
      if ( (unsigned int)dword_2662F8 > 3 )
      {
        v5 = (int)"Failed to find digitizer during initialization.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_2662F8,
          byte_257676,
          0,
          0,
          (const char **)&v5);
      }
      return 0;
    }
  }
  return result;
}
