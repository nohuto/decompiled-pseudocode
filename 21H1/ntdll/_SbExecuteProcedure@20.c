/*
 * XREFs of _SbExecuteProcedure@20 @ 0x4B385EB0
 * Callers:
 *     <none>
 * Callees:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int (__thiscall *__stdcall SbExecuteProcedure(int a1, int a2, int a3, unsigned int a4, int a5))(_DWORD, int)
{
  int (__thiscall *result)(_DWORD, int); // eax

  result = (int (__thiscall *)(_DWORD, int))SbSelectProcedure(a1, a2, a3, a4);
  if ( result )
    return (int (__thiscall *)(_DWORD, int))result(result, a5);
  return result;
}
