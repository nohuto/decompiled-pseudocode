/*
 * XREFs of _SafeReallocBlob @ 0x4B36D0C0
 * Callers:
 *     _RtlpMuiRegResizeLanguageConfigList@8 @ 0x4B36BCBB (_RtlpMuiRegResizeLanguageConfigList@8.c)
 *     _RtlpMuiRegResizeLanguageList@8 @ 0x4B36BD04 (_RtlpMuiRegResizeLanguageList@8.c)
 *     _RtlpMuiRegResizeLanguages@8 @ 0x4B36BD50 (_RtlpMuiRegResizeLanguages@8.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

PVOID __fastcall SafeReallocBlob(PVOID BaseAddress, unsigned int a2, int a3, int a4, int a5, int a6, unsigned int *a7)
{
  unsigned int v9; // ecx
  SIZE_T v11; // [esp-4h] [ebp-14h]
  unsigned int Size; // [esp+8h] [ebp-8h] BYREF
  int Size_4; // [esp+Ch] [ebp-4h] BYREF

  if ( !BaseAddress
    || RtlULongLongToUInt(&Size_4, a4 * a3, ((unsigned int)a4 * (unsigned __int64)(unsigned int)a3) >> 32) < 0
    || (RtlULongPtrAdd(a2, Size_4, (int *)&Size) & 0x80000000) != 0
    || RtlULongLongToUInt(&Size_4, 0, 0) < 0
    || (RtlULongPtrAdd(Size, Size_4, (int *)&Size) & 0x80000000) != 0 )
  {
    return 0;
  }
  v9 = Size;
  if ( a7 )
    *a7 = Size;
  LODWORD(v11) = v9;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress, v11);
}
