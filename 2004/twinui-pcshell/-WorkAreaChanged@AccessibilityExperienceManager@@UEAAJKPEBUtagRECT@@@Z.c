/*
 * XREFs of ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180371930
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x18036EA18 (CreationThreadDispatcher--RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::WorkAreaChanged(
        AccessibilityExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  *(struct tagRECT *)((char *)this + 328) = *a3;
  CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___(
    *((_QWORD *)this + 21),
    (volatile int *)this - 32);
  return 0LL;
}
