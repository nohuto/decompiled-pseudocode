/*
 * XREFs of __itow_s @ 0x4B2FF3B0
 * Callers:
 *     _RtlpFindRegTziForCurrentYear@12 @ 0x4B2EAD32 (_RtlpFindRegTziForCurrentYear@12.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 * Callees:
 *     xtow_s @ 0x4B2FF43A (xtow_s.c)
 */

errno_t __cdecl _itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = HIDWORD(BufferCount) == 10 && Value < 0;
  return xtow_s(Value, Buffer, BufferCount, HIDWORD(BufferCount), v4);
}
