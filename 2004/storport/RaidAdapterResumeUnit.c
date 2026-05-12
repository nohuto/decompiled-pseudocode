/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C0010064
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000FF20 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C00088BC (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0010440 (RaidResumeUnitQueue.c)
 *     WPP_SF_ddd @ 0x1C003248C (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterResumeUnit(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi

  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    if ( KeCancelTimer((PKTIMER)(Unit + 1056)) )
    {
      if ( (unsigned int)RaidResumeUnitQueue(v4) )
        RaidRestartIoQueue(v4);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      53LL,
      &WPP_026814134b593ed6508f665f094ed446_Traceguids,
      v2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
