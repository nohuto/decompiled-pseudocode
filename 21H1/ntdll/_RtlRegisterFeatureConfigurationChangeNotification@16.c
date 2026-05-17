/*
 * XREFs of _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 *     _RtlpFcInsertChangeRegistration@8 @ 0x4B2B2428 (_RtlpFcInsertChangeRegistration@8.c)
 *     _RtlpFcAllocateChangeRegistration@8 @ 0x4B2B2462 (_RtlpFcAllocateChangeRegistration@8.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 */

int __stdcall RtlRegisterFeatureConfigurationChangeNotification(int a1, int a2, _DWORD *a3, int *a4)
{
  int result; // eax
  int v5; // esi

  if ( byte_4B3A5DA8 )
    return -1073741058;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( result >= 0 )
  {
    v5 = RtlpFcAllocateChangeRegistration(a1, a2);
    if ( v5 )
    {
      RtlpFcInsertChangeRegistration();
      if ( a3 )
      {
        while ( MEMORY[0x7FFE0714] != MEMORY[0x7FFE0718] )
          _mm_pause();
        if ( MEMORY[0x7FFE0710] != *a3 || MEMORY[0x7FFE0714] != a3[1] )
          TpPostWork(*(_DWORD *)(v5 + 20));
      }
      *a4 = v5;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
