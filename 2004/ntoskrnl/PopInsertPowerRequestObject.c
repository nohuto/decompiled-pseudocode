/*
 * XREFs of PopInsertPowerRequestObject @ 0x14064E148
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14064E058 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14075FFE8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140C24D78;
    if ( *(__int64 **)qword_140C24D78 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140C24D78 = (__int64)a1;
      return result;
    }
FatalListEntryError_77:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140C24D88;
  if ( *(__int64 **)qword_140C24D88 != &PopSpecialPowerRequestObjectList )
    goto FatalListEntryError_77;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140C24D88 = (__int64)a1;
  return result;
}
