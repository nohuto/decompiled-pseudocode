/*
 * XREFs of ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180370970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AccessibilityExperienceManager::OnNotificationEvent(
        AccessibilityExperienceManager *this,
        const void *a2)
{
  CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___(
    *((_QWORD *)this + 20),
    (volatile int *)this - 34);
}
