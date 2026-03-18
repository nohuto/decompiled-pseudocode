/*
 * XREFs of SepIsAclEqual @ 0x140927504
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
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
