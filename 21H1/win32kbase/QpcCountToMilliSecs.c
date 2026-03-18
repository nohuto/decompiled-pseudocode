/*
 * XREFs of QpcCountToMilliSecs @ 0x1C01B1AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QpcCountToMilliSecs(__int64 a1)
{
  return (unsigned __int64)(1000 * a1) / gliQpcFreq.QuadPart;
}
