/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x1403622A4
 * Callers:
 *     HvpGenerateLogEntry @ 0x140721960 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x14026A190 (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x1406464B8 (HvpGenerateLogMetadata.c)
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
