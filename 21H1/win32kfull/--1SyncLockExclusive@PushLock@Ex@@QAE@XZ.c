/*
 * XREFs of ??1SyncLockExclusive@PushLock@Ex@@QAE@XZ @ 0x1A1473
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall Ex::PushLock::SyncLockExclusive::~SyncLockExclusive(Ex::PushLock::SyncLockExclusive *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    *(_DWORD *)this = 0;
    ExReleasePushLockExclusiveEx(v1, 0);
    KeLeaveCriticalRegion();
  }
}
