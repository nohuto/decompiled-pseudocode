/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1405672A8
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1405658FC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C54288 )
  {
    qword_140C54288(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C4FF00);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
