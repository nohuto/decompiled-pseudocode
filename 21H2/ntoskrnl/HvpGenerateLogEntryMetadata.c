/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x1402F7104
 * Callers:
 *     HvpGenerateLogEntry @ 0x1406F91B8 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x140258130 (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x14063B2A4 (HvpGenerateLogMetadata.c)
 */

_UNKNOWN **__fastcall HvpGenerateLogEntryMetadata(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        __int64 a6,
        int a7)
{
  __int64 v9; // r9

  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  return HvpCopyDataToOffsetArray(a6, 8 * a7, a2, v9, a4, a5);
}
