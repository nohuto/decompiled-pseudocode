/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140563278
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1405618CC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C54308 )
  {
    qword_140C54308(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C4FFC0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
