/*
 * XREFs of ?v_GetRealizationSize@CPerMonitorDesktopThumbnail@@MEAAJPEAUtagSIZE@@@Z @ 0x1800435D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::v_GetRealizationSize(
        CPerMonitorDesktopThumbnail *this,
        struct tagSIZE *a2)
{
  *a2 = *(struct tagSIZE *)((char *)this + 72);
  return 0LL;
}
