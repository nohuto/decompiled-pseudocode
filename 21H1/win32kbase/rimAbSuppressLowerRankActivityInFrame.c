/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0161D48 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0161F94 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0162040 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0162554 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01637AC (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0168794 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C017F974 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C017F9C8 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01866E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // r12d
  unsigned __int64 v6; // r15
  __int64 active; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v22; // edi
  __int64 v23; // rcx
  int v24; // edx
  __int128 v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+58h] [rbp-9h]
  __int128 v27; // [rsp+60h] [rbp-1h] BYREF
  __int64 v28; // [rsp+70h] [rbp+Fh]
  _BYTE v29[32]; // [rsp+78h] [rbp+17h] BYREF
  int v30; // [rsp+D0h] [rbp+6Fh]

  v3 = *(_QWORD *)(a2 + 816);
  v30 = *(_DWORD *)(a2 + 788);
  v4 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL);
  active = RIMCmActiveContactsBeginNoButton(&v27, a2);
  v8 = *(_QWORD *)(active + 16);
  v25 = *(_OWORD *)active;
  v26 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd(v29, a2);
    v10 = *(_OWORD *)v9;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = *(_QWORD *)v9;
    v28 = v11;
    v27 = v10;
    if ( (_QWORD)v25 == v12 && DWORD2(v25) == DWORD2(v27) && v26 == v28 )
      break;
    v13 = *(_DWORD *)(v26 + 16);
    v14 = v26 - 16;
    if ( (v13 & 2) == 0 )
      __int2c();
    if ( (v13 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v14 + 2340) & 1) != 0 && (*(_DWORD *)(v14 + 2420) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v15 = *(_DWORD *)(v14 + 52), (unsigned int)v6 <= v15 + 500)
        || !v15 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v14 + 2408)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v14 + 2408)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v14) )
        {
          RIMCmAddContactSuppressionReasons(a2, v14, 1LL);
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v14) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_dDD(
                v17,
                v16,
                v18,
                25,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v14,
                *(_DWORD *)(v14 + 8),
                *(_DWORD *)(v14 + 2660));
            }
            RIMSetContactEndState(a2, v14, v3, v30, 1);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_dDD(
                v17,
                v16,
                v18,
                26,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v14,
                *(_DWORD *)(v14 + 8),
                *(_DWORD *)(v14 + 2660));
            }
            *(_DWORD *)(v14 + 2340) &= ~1u;
            if ( (*(_DWORD *)(v14 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 960) != v14 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 312) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v4 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v25);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v4);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v22 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v23, ButtonContact, 1LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 27, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v22, v3, v30, 1);
  }
  return result;
}
