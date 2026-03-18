/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1405638C8
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x140561F1C (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C54208 )
  {
    qword_140C54208(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C4FE80);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
