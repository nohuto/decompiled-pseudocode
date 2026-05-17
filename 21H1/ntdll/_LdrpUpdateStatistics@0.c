/*
 * XREFs of _LdrpUpdateStatistics@0 @ 0x4B2B7214
 * Callers:
 *     _LdrpWorkCallback@12 @ 0x4B2B71B0 (_LdrpWorkCallback@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 * Callees:
 *     <none>
 */

struct _TEB *__stdcall LdrpUpdateStatistics()
{
  struct _TEB *result; // eax

  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    LdrpStatistics = LdrpWorkInProgress;
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_4B3A5CB4;
  else
    ++dword_4B3A5CB8;
  return result;
}
