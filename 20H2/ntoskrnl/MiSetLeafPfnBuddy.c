/*
 * XREFs of MiSetLeafPfnBuddy @ 0x1403291EC
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiInitializeMdlBatchPages @ 0x1403347C4 (MiInitializeMdlBatchPages.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetLeafPfnBuddy(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFFFELL;
  *a1 ^= (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  return result;
}
