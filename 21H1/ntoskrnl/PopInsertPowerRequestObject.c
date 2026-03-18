/*
 * XREFs of PopInsertPowerRequestObject @ 0x140700C04
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14075DCD8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140C25008;
    if ( *(__int64 **)qword_140C25008 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140C25008 = (__int64)a1;
      return result;
    }
FatalListEntryError_113:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140C25018;
  if ( *(__int64 **)qword_140C25018 != &PopSpecialPowerRequestObjectList )
    goto FatalListEntryError_113;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140C25018 = (__int64)a1;
  return result;
}
