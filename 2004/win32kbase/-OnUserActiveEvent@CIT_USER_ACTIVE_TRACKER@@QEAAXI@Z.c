/*
 * XREFs of ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0061E3C
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0061C64 (-CitpLastInputUpdate@@YAXGI@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0061E74 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0061EB8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent(CIT_USER_ACTIVE_TRACKER *this, unsigned int a2)
{
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 1u);
  *((_DWORD *)this + 1) = a2;
}
