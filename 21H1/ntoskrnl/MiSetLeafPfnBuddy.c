/*
 * XREFs of MiSetLeafPfnBuddy @ 0x14031B2E0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x140549E6C (MiDeleteLargeUserPde.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
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
