/*
 * XREFs of MiDetachAndUnlockWorkingSet @ 0x140374238
 * Callers:
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 */

unsigned __int8 __fastcall MiDetachAndUnlockWorkingSet(__int64 a1)
{
  unsigned __int8 result; // al

  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result )
  {
    if ( result == 1 )
      return (unsigned __int8)MiDetachSessionGlobal(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16680LL);
  }
  else
  {
    result = a1 + 0x80;
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
      return KeForceDetachProcess(0LL, 0);
  }
  return result;
}
