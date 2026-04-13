/*
 * XREFs of _TelGetAllAllowedTelemetryTypes@4 @ 0x10002360
 * Callers:
 *     _TelIsTelemetryTypeAllowed@4 @ 0x10002320 (_TelIsTelemetryTypeAllowed@4.c)
 * Callees:
 *     _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70 (_TelEvaluateActiveSettingAuthority@8.c)
 */

int __stdcall TelGetAllAllowedTelemetryTypes(_DWORD *a1)
{
  int result; // eax
  _BYTE v2[4]; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h] BYREF

  *a1 = 0;
  result = TelEvaluateActiveSettingAuthority(&v3, v2);
  if ( result >= 0 )
  {
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 != 2 )
          *a1 |= 4u;
        *a1 |= 2u;
      }
      *a1 |= 1u;
    }
    return 0;
  }
  return result;
}
