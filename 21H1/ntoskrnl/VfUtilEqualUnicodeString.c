/*
 * XREFs of VfUtilEqualUnicodeString @ 0x1409C35F4
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037B158 (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x1409DA1B4 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
