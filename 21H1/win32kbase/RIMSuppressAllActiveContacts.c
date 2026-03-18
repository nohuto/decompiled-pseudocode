/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C0168624
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C0048570 (RIMSetDeviceInputMode.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01793D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0179BB0 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C01864D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01866E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, unsigned int a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v6; // rsi
  LARGE_INTEGER v7; // rbx
  int v8; // r13d
  int v9; // r12d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // r14
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  _BYTE v22[32]; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+C8h] [rbp+48h]
  __int64 v25; // [rsp+D8h] [rbp+58h]

  v25 = *(_QWORD *)(a2 + 816) + 1LL;
  v23 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *(struct RIMDEV **)(a2 + 16);
  v7 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v6);
  v8 = 0;
  v9 = 0;
  active = RIMCmActiveContactsBegin(&v20, a2);
  v11 = *(_QWORD *)(active + 16);
  v18 = *(_OWORD *)active;
  v19 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v22, a2);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v21 = v14;
    v20 = v13;
    if ( (_QWORD)v18 == v15 )
    {
      result = DWORD2(v20);
      if ( DWORD2(v18) == DWORD2(v20) && v19 == v21 )
        break;
    }
    v17 = v19 - 16;
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v19 - 16) )
    {
      RIMCmAddContactSuppressionReasons(a2, v17, a3);
      if ( !v8 )
      {
        v8 = 1;
        v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v6,
               (LARGE_INTEGER)v7.QuadPart);
      }
      if ( v9 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v6, v17, v25, v23, 1);
    }
    RIMCmActiveContactsNext(a2, &v18);
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v6);
    return RIMCompletePointerDeviceFrame(a1, v6);
  }
  return result;
}
