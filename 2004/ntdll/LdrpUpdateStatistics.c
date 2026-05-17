/*
 * XREFs of LdrpUpdateStatistics @ 0x18005ED14
 * Callers:
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18005EA90 (LdrpWorkCallback.c)
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
    ++dword_18016A394;
  else
    ++dword_18016A398;
  return result;
}
