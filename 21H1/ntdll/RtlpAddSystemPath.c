/*
 * XREFs of RtlpAddSystemPath @ 0x4B33CF91
 * Callers:
 *     RtlpAddForwarderPath @ 0x4B33CF6E (RtlpAddForwarderPath.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

unsigned int __fastcall RtlpAddSystemPath(unsigned int Src, unsigned int a2, void *a3)
{
  unsigned __int64 v4; // rdi
  unsigned int result; // eax
  size_t v6; // [esp-10h] [ebp-1Ch]
  size_t v7; // [esp-4h] [ebp-10h]

  LODWORD(v7) = (unsigned __int16)RtlpSystem32Dirs - 2;
  v4 = __PAIR64__((unsigned int)a3, Src);
  memcpy(a3, dword_4B3A6604, v7);
  HIDWORD(v4) = HIDWORD(v4) + 2 * ((unsigned __int16)RtlpSystem32Dirs >> 1) - 2;
  LODWORD(v6) = a2 - 2;
  memcpy((void *)HIDWORD(v4), (const void *)v4, v6);
  result = HIDWORD(v4) + 2 * (a2 >> 1);
  *(_WORD *)(result - 2) = 59;
  return result;
}
