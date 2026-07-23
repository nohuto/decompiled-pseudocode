/*
 * XREFs of RtlpAddSystemPath @ 0x1800DEE9C
 * Callers:
 *     RtlpAddForwarderPath @ 0x1800DEE5C (RtlpAddForwarderPath.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

char *__fastcall RtlpAddSystemPath(void *Src, unsigned __int64 a2, char *a3)
{
  char *v6; // rbx
  char *result; // rax

  memmove(a3, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs - 2LL);
  v6 = &a3[2 * ((unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1) - 2];
  memmove(v6, Src, a2 - 2);
  result = &v6[2 * (a2 >> 1)];
  *((_WORD *)result - 1) = 59;
  return result;
}
