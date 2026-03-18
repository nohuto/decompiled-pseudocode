/*
 * XREFs of GetBootSystemTime @ 0x140A6E0CC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     HalQueryRealTimeClock @ 0x1403413F0 (HalQueryRealTimeClock.c)
 *     RtlpTimeFieldsToTime @ 0x140341804 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x140341A98 (RtlpTimeToTimeFields.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalSetRealTimeClock @ 0x1404B1C60 (HalSetRealTimeClock.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, ULONGLONG *a2)
{
  bool v3; // zf
  __int64 v5; // rbx
  __int64 v6; // rax
  NTSTATUS v7; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 CurrentServerSiloGlobals; // rax
  ULONGLONG v11; // r9
  ULONGLONG v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp+28h] BYREF

  v16 = 0LL;
  pullResult = 0LL;
  v3 = (*(_BYTE *)(a1 + 2624) & 1) == 0;
  v5 = *(_QWORD *)(a1 + 2600);
  v14 = 0LL;
  if ( v3 && !ExpRealTimeIsUniversal )
    v5 += *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
  v6 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v16);
  v7 = RtlULongLongMult(v6 - *(_QWORD *)(a1 + 2608), 0x989680uLL, &pullResult);
  CurrentServerSiloGlobals = pullResult / v16;
  v11 = pullResult / v16;
  if ( v7 < 0 )
  {
    v8 = v9 / v16;
    CurrentServerSiloGlobals = 10000000 * (v9 / v16);
    v11 = CurrentServerSiloGlobals + 10000000 * (v9 % v16) / v16;
  }
  v12 = v11 + v5;
  v3 = (*(_BYTE *)(a1 + 2624) & 2) == 0;
  pullResult = v12;
  if ( v3 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v12 - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v14, v8);
    LOBYTE(CurrentServerSiloGlobals) = HalSetRealTimeClock((__int16 *)&v14);
  }
  else if ( (qword_140C19598 & 4) == 0 )
  {
    LOBYTE(CurrentServerSiloGlobals) = HalQueryRealTimeClock((__int64)&v14);
    if ( (_BYTE)CurrentServerSiloGlobals )
    {
      LOBYTE(CurrentServerSiloGlobals) = RtlpTimeFieldsToTime((__int64)&v14, (__int64 *)&pullResult);
      if ( !(_BYTE)CurrentServerSiloGlobals || ExpRealTimeIsUniversal )
      {
        v12 = pullResult;
      }
      else
      {
        CurrentServerSiloGlobals = (__int64)PsGetCurrentServerSiloGlobals();
        v12 = *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1056) + 440LL) + pullResult;
      }
    }
  }
  *a2 = v12;
  return CurrentServerSiloGlobals;
}
