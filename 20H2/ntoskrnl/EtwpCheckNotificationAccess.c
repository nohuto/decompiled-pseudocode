/*
 * XREFs of EtwpCheckNotificationAccess @ 0x1407196FC
 * Callers:
 *     EtwpValidateEnableNotification @ 0x1407191C8 (EtwpValidateEnableNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     EtwpCheckSecurityLoggerAccess @ 0x14071211C (EtwpCheckSecurityLoggerAccess.c)
 *     EtwpCheckGuidAccess @ 0x140719768 (EtwpCheckGuidAccess.c)
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
        return (unsigned int)EtwpCheckSecurityLoggerAccess((__int64)KeGetCurrentThread()->ApcState.Process);
      return v5;
    }
  }
  return result;
}
