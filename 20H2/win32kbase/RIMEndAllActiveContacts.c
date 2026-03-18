/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C015D440
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     RIMResetPointerDevices @ 0x1C0025960 (RIMResetPointerDevices.c)
 *     _lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_ @ 0x1C0151310 (_lambda_853903f4a8935f92af3ddbe6242dc426_--_lambda_invoker_cdecl_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0170C70 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171450 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C017E3A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C017E80C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r15
  __int64 v5; // r12
  int v6; // r13d
  int v9; // esi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rbx
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  _BYTE v25[32]; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B8h] [rbp+38h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 816);
  v6 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v23, a2);
  v11 = *(_QWORD *)(active + 16);
  v21 = *(_OWORD *)active;
  v22 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v25, a2);
    v16 = *(_OWORD *)v12;
    v17 = *(_QWORD *)(v12 + 16);
    v18 = *(_QWORD *)v12;
    v24 = v17;
    v23 = v16;
    if ( (_QWORD)v21 == v18 )
    {
      result = DWORD2(v23);
      if ( DWORD2(v21) == DWORD2(v23) && v22 == v24 )
        break;
    }
    v20 = v22 - 16;
    if ( (*(_DWORD *)(v22 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v21);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v20) )
    {
      if ( !v9 )
      {
        v9 = 1;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                   a1,
                   v4,
                   (LARGE_INTEGER)PerformanceCounter.QuadPart);
        if ( !(_DWORD)result )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            result = WPP_RECORDER_SF_(
                       (_DWORD)gRimLog,
                       v13,
                       1,
                       42,
                       (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
          }
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v20, v5 + 1, v6, 1);
      *(_DWORD *)(v20 + 2340) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v20);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4, v14, v15);
    result = RIMCompletePointerDeviceFrame(a1, v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 43, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
  }
  return result;
}
