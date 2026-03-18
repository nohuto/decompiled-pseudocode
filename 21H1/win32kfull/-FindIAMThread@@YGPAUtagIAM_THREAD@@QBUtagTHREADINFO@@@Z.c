/*
 * XREFs of ?FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z @ 0x2615C
 * Callers:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     __EnableIAMThreadAccess@8 @ 0xA5062 (__EnableIAMThreadAccess@8.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__thiscall FindIAMThread(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *result; // eax

  for ( result = gIAMThreadList.Flink; result != &gIAMThreadList; result = result->Flink )
  {
    if ( result[1].Flink == this )
      return result;
  }
  return 0;
}
