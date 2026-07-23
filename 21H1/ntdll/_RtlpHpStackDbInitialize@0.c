/*
 * XREFs of _RtlpHpStackDbInitialize@0 @ 0x4B36DC8D
 * Callers:
 *     _RtlpHpStackTraceEnable@0 @ 0x4B36E304 (_RtlpHpStackTraceEnable@0.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlpHpStackDbInitialize()
{
  int result; // eax
  size_t v1; // [esp-4h] [ebp-8h]

  LODWORD(v1) = 44;
  memset(&dword_4B3A6838, 0, v1);
  dword_4B3A6838 = 0;
  dword_4B3A6840 = 0;
  dword_4B3A683C = 0;
  result = 1;
  dword_4B3A6844 = 0;
  dword_4B3A684C = 0;
  dword_4B3A6848 = 0;
  dword_4B3A6854 = 0;
  dword_4B3A6850 = 0;
  dword_4B3A6860 = 0;
  dword_4B3A6858 = (int)RtlpHpStackDbAllocRoutine;
  dword_4B3A685C = (int)RtlpHpStackDbFreeRoutine;
  dword_4B3A6834 = 2;
  return result;
}
