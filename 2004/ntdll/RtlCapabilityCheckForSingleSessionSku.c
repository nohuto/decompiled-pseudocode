/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x180088540
 * Callers:
 *     <none>
 * Callees:
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x180040200 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(void *a1, unsigned __int16 *a2, char *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
