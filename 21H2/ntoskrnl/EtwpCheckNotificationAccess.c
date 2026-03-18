/*
 * XREFs of EtwpCheckNotificationAccess @ 0x14078EE9C
 * Callers:
 *     EtwpValidateEnableNotification @ 0x14078FE24 (EtwpValidateEnableNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     EtwCheckSecurityLoggerAccess @ 0x1406E0450 (EtwCheckSecurityLoggerAccess.c)
 *     EtwpCheckGuidAccess @ 0x140790CA8 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax

  result = EtwpCheckGuidAccess(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 128LL, 0LL);
    v5 = result;
    if ( (int)result >= 0 )
    {
      v6 = *a1 - s_ProviderThreatInt;
      if ( *a1 == s_ProviderThreatInt )
        v6 = a1[1] - 0x44D38D4D0F04D8F1LL;
      if ( !v6 )
        return (unsigned int)EtwCheckSecurityLoggerAccess(
                               (__int64)KeGetCurrentThread()->ApcState.Process,
                               KeGetCurrentThread()->PreviousMode);
      return v5;
    }
  }
  return result;
}
