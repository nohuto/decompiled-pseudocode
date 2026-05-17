/*
 * XREFs of RtlpAddSystemPath @ 0x4B33CF91
 * Callers:
 *     RtlpAddForwarderPath @ 0x4B33CF6E (RtlpAddForwarderPath.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

char *__fastcall RtlpAddSystemPath(void *Src, unsigned int a2, char *a3)
{
  char *v5; // esi
  char *result; // eax

  memcpy(a3, dword_4B3A6604, (unsigned __int16)RtlpSystem32Dirs - 2);
  v5 = &a3[2 * ((unsigned __int16)RtlpSystem32Dirs >> 1) - 2];
  memcpy(v5, Src, a2 - 2);
  result = &v5[2 * (a2 >> 1)];
  *((_WORD *)result - 1) = 59;
  return result;
}
