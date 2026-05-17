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

int __fastcall SafeReallocBlob(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  int v9; // ecx
  unsigned int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  if ( !a1
    || RtlULongLongToUInt(&v12, a4 * a3, (a4 * (unsigned __int64)a3) >> 32) < 0
    || (RtlULongPtrAdd(a2, v12, (int *)&v11) & 0x80000000) != 0
    || RtlULongLongToUInt(&v12, 0, 0) < 0
    || (RtlULongPtrAdd(v11, v12, (int *)&v11) & 0x80000000) != 0 )
  {
    return 0;
  }
  v9 = v11;
  if ( a7 )
    *a7 = v11;
  return RtlReAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1, v9);
}
