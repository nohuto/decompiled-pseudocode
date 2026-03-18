/*
 * XREFs of MiSetLeafPfnBuddy @ 0x140358D90
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiInitializeMdlBatchPages @ 0x140313C8C (MiInitializeMdlBatchPages.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x14054A4BC (MiDeleteLargeUserPde.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
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
