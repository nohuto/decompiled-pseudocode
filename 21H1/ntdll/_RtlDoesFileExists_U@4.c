/*
 * XREFs of _RtlDoesFileExists_U@4 @ 0x4B32D0C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 */

char __stdcall RtlDoesFileExists_U(_WORD *a1)
{
  return RtlDoesFileExists_UEx(a1, 1);
}
