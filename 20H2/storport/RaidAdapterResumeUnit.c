/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C00028E4
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002B50 (RaidResumeUnitQueue.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 *     WPP_SF_ddd @ 0x1C003330C (WPP_SF_ddd.c)
 */

char __fastcall RaidAdapterResumeUnit(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  PDEVICE_OBJECT *v5; // rax
  int v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    LOBYTE(v5) = KeCancelTimer((PKTIMER)(Unit + 1056));
    if ( (_BYTE)v5 )
    {
      LODWORD(v5) = RaidResumeUnitQueue(v4);
      if ( (_DWORD)v5 )
        LOBYTE(v5) = RaidRestartIoQueue(v4);
    }
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( ((unsigned __int8)v5 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        LOBYTE(v5) = WPP_SF_ddd(
                       WPP_GLOBAL_Control->AttachedDevice,
                       53LL,
                       &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
                       v2,
                       BYTE1(v7),
                       BYTE2(v7));
    }
  }
  return (char)v5;
}
