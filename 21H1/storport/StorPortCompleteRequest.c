/*
 * XREFs of StorPortCompleteRequest @ 0x1C0037860
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C007E170 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006FB4 (RaidAdapterFindUnit.c)
 *     RaidPauseUnitQueue @ 0x1C000E5EC (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000E680 (RaidResumeUnitQueue.c)
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 *     RaidResumeAdapterQueue @ 0x1C001033C (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010574 (RaidPauseAdapterQueue.c)
 *     WPP_SF_ddd @ 0x1C0031F0C (WPP_SF_ddd.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // r14d
  __int64 Unit; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h]

  v5 = *(__int64 **)(a1 - 16);
  v6 = 0LL;
  HIBYTE(v16) = 0;
  v7 = a4;
  v8 = a3;
  v9 = *v5;
  v10 = a2;
  if ( !*v5 )
    return (char)v5;
  if ( (qword_1C0068350 & 0x40) != 0 )
    DbgLogRequest(
      v9,
      12,
      v9,
      a4 | (int)(*(_DWORD *)(v9 + 56) << 24) | (unsigned __int64)((a3 | (a2 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v10 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
  {
    RaidPauseAdapterQueue(v9);
  }
  else
  {
    LOBYTE(v16) = v10;
    BYTE1(v16) = v8;
    BYTE2(v16) = v7;
    Unit = RaidAdapterFindUnit(v9, v16);
    v6 = Unit;
    if ( !Unit )
    {
      v5 = (__int64 *)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v5 & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v14) = v7;
          LODWORD(v13) = v8;
          LOBYTE(v5) = WPP_SF_ddd(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0x19u,
                         (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids,
                         v10,
                         v13,
                         v14);
        }
      }
      return (char)v5;
    }
    RaidPauseUnitQueue(Unit);
  }
  LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(v9 + 1992), (PVOID)(v7 | ((v8 | (unsigned int)(v10 << 8)) << 8)), (PVOID)a5);
  if ( !(_BYTE)v5 )
  {
    if ( (_BYTE)v10 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
      LOBYTE(v5) = RaidResumeAdapterQueue(v9);
    else
      LOBYTE(v5) = RaidResumeUnitQueue(v6);
  }
  return (char)v5;
}
