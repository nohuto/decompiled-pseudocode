/*
 * XREFs of _LdrpCondenseGraph@4 @ 0x4B2E205C
 * Callers:
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 * Callees:
 *     _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082 (_LdrpCondenseGraphRecurse@12.c)
 */

int __thiscall LdrpCondenseGraph(int *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-4h] BYREF

  if ( this[8] < 6 )
  {
    v2 = 1;
    return LdrpCondenseGraphRecurse(&v2);
  }
  return result;
}
