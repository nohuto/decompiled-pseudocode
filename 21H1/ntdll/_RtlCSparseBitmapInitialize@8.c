/*
 * XREFs of _RtlCSparseBitmapInitialize@8 @ 0x4B37E24A
 * Callers:
 *     _RtlHpHeapManagerInitialize@8 @ 0x4B375D4D (_RtlHpHeapManagerInitialize@8.c)
 *     _RtlpHpVaMgrCtxInitialize@4 @ 0x4B37AD53 (_RtlpHpVaMgrCtxInitialize@4.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlCSparseBitmapInitialize(void *a1, unsigned int Size)
{
  int result; // eax
  size_t v5; // [esp-4h] [ebp-10h]

  LODWORD(v5) = Size;
  memset(a1, 0, v5);
  *((_DWORD *)a1 + 4) = -1;
  result = (Size - 32) & ~(((unsigned __int64)Size - 32) >> 32);
  *((_DWORD *)a1 + 7) = result;
  return result;
}
