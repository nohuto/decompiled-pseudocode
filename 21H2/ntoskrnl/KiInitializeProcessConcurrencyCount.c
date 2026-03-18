/*
 * XREFs of KiInitializeProcessConcurrencyCount @ 0x1405723CC
 * Callers:
 *     KeStartIdealProcessorAssignmentBlock @ 0x1402A08BC (KeStartIdealProcessorAssignmentBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessConcurrencyCount(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 <= KeMaximumProcessors )
    result = a2 << 20;
  else
    result = (unsigned int)((KeMaximumProcessors << 20) - 1);
  *a1 = result;
  return result;
}
