/*
 * XREFs of SepIsAclEqual @ 0x1409228B0
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(_WORD *a1, _WORD *a2)
{
  if ( a1 )
  {
    if ( !a2 || a1[1] != a2[1] || RtlCompareMemory(a1, a2, (unsigned __int16)a1[1]) != (unsigned __int16)a1[1] )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
