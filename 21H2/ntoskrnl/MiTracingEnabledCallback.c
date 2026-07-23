/*
 * XREFs of MiTracingEnabledCallback @ 0x1408D7B70
 * Callers:
 *     <none>
 * Callees:
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 */

struct _EX_RUNDOWN_REF *__fastcall MiTracingEnabledCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  struct _EX_RUNDOWN_REF *result; // rax

  result = (struct _EX_RUNDOWN_REF *)(unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 && (a4 & 0x20) != 0 )
    return MiLogHotPatchRundown();
  return result;
}
