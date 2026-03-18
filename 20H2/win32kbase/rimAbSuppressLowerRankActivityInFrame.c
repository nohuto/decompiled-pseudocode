/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0159498 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01596E4 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0159790 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0159CA4 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015AEFC (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FEE4 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C0177844 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C0177898 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017E42C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017E5B8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C017E994 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  int v6; // r12d
  unsigned __int64 v8; // r15
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v32; // edi
  __int64 v33; // rcx
  int v34; // edx
  __int128 v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-9h]
  __int128 v37; // [rsp+60h] [rbp-1h] BYREF
  __int64 v38; // [rsp+70h] [rbp+Fh]
  _BYTE v39[32]; // [rsp+78h] [rbp+17h] BYREF
  int v40; // [rsp+D0h] [rbp+6Fh]

  v5 = *(_QWORD *)(a2 + 816);
  v40 = *(_DWORD *)(a2 + 788);
  v6 = 0;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3, a4);
  active = RIMCmActiveContactsBeginNoButton(&v37, a2);
  v10 = *(_QWORD *)(active + 16);
  v35 = *(_OWORD *)active;
  v36 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v39, a2);
    v13 = *(_OWORD *)v11;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)v11;
    v38 = v14;
    v37 = v13;
    if ( (_QWORD)v35 == v15 && DWORD2(v35) == DWORD2(v37) && v36 == v38 )
      break;
    v16 = *(_DWORD *)(v36 + 16);
    v17 = v36 - 16;
    if ( (v16 & 2) == 0 )
      __int2c();
    if ( (v16 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v17 + 2340) & 1) != 0 && (*(_DWORD *)(v17 + 2420) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v18 = *(_DWORD *)(v17 + 52), (unsigned int)v8 <= v18 + 500)
        || !v18 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v17 + 2408, v12)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v17 + 2408, v19)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v17, v20, v21) )
        {
          RIMCmAddContactSuppressionReasons(a2, v17, 1LL);
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_dDD(
                v23,
                v22,
                v24,
                25,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v17,
                *(_DWORD *)(v17 + 8),
                *(_DWORD *)(v17 + 2660));
            }
            RIMSetContactEndState(a2, v17, v5, v40, 1);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_dDD(
                v23,
                v22,
                v24,
                26,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v17,
                *(_DWORD *)(v17 + 8),
                *(_DWORD *)(v17 + 2660));
            }
            *(_DWORD *)(v17 + 2340) &= ~1u;
            if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 960) != v17 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24, v25);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 312) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v6 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v35);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v6);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v32 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v33, ButtonContact, 1LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v34, 1, 27, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v32, v5, v40, 1);
  }
  return result;
}
