/*
 * XREFs of LdrpUpdateStatistics @ 0x180060314
 * Callers:
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x180060090 (LdrpWorkCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = LdrpStatistics;
  result = NtCurrentTeb();
  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    v0 = LdrpWorkInProgress;
  LdrpStatistics = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_18016C394;
  else
    ++dword_18016C398;
  return result;
}
