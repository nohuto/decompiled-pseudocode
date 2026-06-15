/*
 * XREFs of ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18011EFCC
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C300 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

struct _GUID *__fastcall CAudioSignalProcessingModeMap::Lookup(
        CAudioSignalProcessingModeMap *this,
        struct _GUID *__return_ptr retstr,
        struct _GUID *a3)
{
  int Key; // eax
  GUID *v5; // r11
  GUID v6; // xmm0

  Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey((__int64 *)this, a3);
  if ( Key == -1 )
  {
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    if ( Key < 0 || Key >= *((_DWORD *)this + 4) )
    {
      ATL::_AtlRaiseException(0xC000008C);
      JUMPOUT(0x18011F01DLL);
    }
    v6 = *(GUID *)(*((_QWORD *)this + 1) + 16LL * Key);
  }
  *v5 = v6;
  return v5;
}
