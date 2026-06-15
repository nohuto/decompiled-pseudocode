/*
 * XREFs of sub_180009064 @ 0x180009064
 * Callers:
 *     sub_180008C50 @ 0x180008C50 (sub_180008C50.c)
 *     ?dtor$5@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18003B216 (-dtor$5@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 * Callees:
 *     sub_180009280 @ 0x180009280 (sub_180009280.c)
 *     sub_180009888 @ 0x180009888 (sub_180009888.c)
 */

void __fastcall sub_180009064(LPCRITICAL_SECTION lpCriticalSection)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    sub_180009280(&lpCriticalSection[1], 0LL);
  LeaveCriticalSection(lpCriticalSection);
  if ( lpCriticalSection[1].SpinCount )
    ((void (*)(void))_o_free)();
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    sub_180009888(DebugInfo, *(_QWORD *)&lpCriticalSection[1].LockCount);
    _o_free(lpCriticalSection[1].DebugInfo);
  }
  DeleteCriticalSection(lpCriticalSection);
}
