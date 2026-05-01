/*
 * XREFs of sub_18002C668 @ 0x18002C668
 * Callers:
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 * Callees:
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18002C668(wchar_t *Destination, wchar_t *Source, void *Src, int a4, int a5, __int64 a6)
{
  __int64 result; // rax

  memset(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  sub_18002C6F4(Destination + 232, Src);
  *((_DWORD *)Destination + 134) = a5;
  result = a6;
  *((_DWORD *)Destination + 133) = a4;
  *((_QWORD *)Destination + 68) = a6;
  return result;
}
