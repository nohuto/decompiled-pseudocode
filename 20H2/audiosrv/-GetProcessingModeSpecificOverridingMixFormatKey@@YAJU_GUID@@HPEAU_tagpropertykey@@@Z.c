/*
 * XREFs of ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180049858
 * Callers:
 *     ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800497A0 (-CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessingModeSpecificOverridingMixFormatKey(
        struct _GUID *a1,
        int a2,
        struct _tagpropertykey *a3)
{
  unsigned int i; // r9d
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 result; // rax

  for ( i = 0; i < 9; ++i )
  {
    v4 = &qword_18019D7B0[2 * i];
    v5 = *v4 - *(_QWORD *)&a1->Data1;
    if ( *v4 == *(_QWORD *)&a1->Data1 )
      v5 = v4[1] - *(_QWORD *)a1->Data4;
    if ( !v5 )
    {
      a3->pid = i + (a2 != 0 ? 602 : 2);
      result = 0LL;
      a3->fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
      return result;
    }
  }
  return 2147943568LL;
}
