/*
 * XREFs of HUBMISC_StripSymbolicNamePrefix @ 0x1C003049C
 * Callers:
 *     HUBPDO_GetHubName @ 0x1C0014ADC (HUBPDO_GetHubName.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007585C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00764F8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     WMI_AcquireHubName @ 0x1C0084268 (WMI_AcquireHubName.c)
 *     WMI_FireNotification @ 0x1C0084F0C (WMI_FireNotification.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  _WORD *result; // rax
  __int64 v3; // r9
  __int64 v4; // r8

  result = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = *a1;
  if ( result )
  {
    if ( *result == 92 )
    {
      while ( 1 )
      {
        ++result;
        v4 -= 2LL;
        if ( !*result )
          break;
        if ( *result == 92 )
        {
          ++result;
          v4 -= 2LL;
          break;
        }
      }
    }
    v3 = v4;
  }
  *a2 = v3;
  return result;
}
