/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C015FD74
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C00BB8BC (RIMSetDeviceInputMode.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0170C70 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171450 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C017E3A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017E5B8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // r14
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  _BYTE v24[32]; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+C8h] [rbp+48h]
  __int64 v27; // [rsp+D8h] [rbp+58h]

  v27 = *(_QWORD *)(a2 + 816) + 1LL;
  v25 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *(struct RIMDEV **)(a2 + 16);
  v7 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v6);
  v8 = 0;
  v9 = 0;
  active = RIMCmActiveContactsBegin(&v22, a2);
  v11 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v24, a2);
    v15 = *(_OWORD *)v12;
    v16 = *(_QWORD *)(v12 + 16);
    v17 = *(_QWORD *)v12;
    v23 = v16;
    v22 = v15;
    if ( (_QWORD)v20 == v17 )
    {
      result = DWORD2(v22);
      if ( DWORD2(v20) == DWORD2(v22) && v21 == v23 )
        break;
    }
    v19 = v21 - 16;
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v21 - 16) )
    {
      RIMCmAddContactSuppressionReasons(a2, v19, a3);
      if ( !v8 )
      {
        v8 = 1;
        v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v6,
               (LARGE_INTEGER)v7.QuadPart);
      }
      if ( v9 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v6, v19, v27, v25, 1);
    }
    RIMCmActiveContactsNext(a2, &v20);
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v6, v13, v14);
    return RIMCompletePointerDeviceFrame(a1, v6);
  }
  return result;
}
