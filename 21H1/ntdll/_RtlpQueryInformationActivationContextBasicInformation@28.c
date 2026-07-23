/*
 * XREFs of _RtlpQueryInformationActivationContextBasicInformation@28 @ 0x4B2B5020
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 */

int __fastcall RtlpQueryInformationActivationContextBasicInformation(
        char a1,
        _ACTIVATION_CONTEXT *a2,
        int a3,
        int a4,
        _ACTIVATION_CONTEXT **a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v8; // edi
  _ACTIVATION_CONTEXT **v10; // eax
  _ACTIVATION_CONTEXT *v11; // ecx

  v8 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a6 < 8 )
  {
    if ( a7 )
      *a7 = 8;
    return -1073741789;
  }
  else
  {
    v10 = a5;
    if ( a3 )
      v11 = *(_ACTIVATION_CONTEXT **)(a3 + 28);
    else
      v11 = 0;
    a5[1] = v11;
    if ( (a1 & 1) == 0 )
    {
      RtlAddRefActivationContext(a2);
      v10 = a5;
    }
    *v10 = a2;
    if ( a7 )
      *a7 = 8;
  }
  return v8;
}
