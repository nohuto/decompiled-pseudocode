/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0161C90 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0161DCC (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0162040 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0162484 (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01637AC (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsBegin @ 0x1C01864D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0186B78 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0186B98 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0186BC8 (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v25; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-19h]
  __int128 v27; // [rsp+60h] [rbp-11h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  __int128 v29; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v30[24]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v31[24]; // [rsp+A0h] [rbp+2Fh] BYREF

  v3 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  active = RIMCmActiveContactsBegin(v30, v3);
  v6 = *(_QWORD *)(active + 16);
  v25 = *(_OWORD *)active;
  v26 = v6;
  while ( 1 )
  {
    v7 = RIMCmActiveContactsEnd(v31, v3);
    v9 = *(_OWORD *)v7;
    v10 = *(_QWORD *)(v7 + 16);
    v11 = *(_QWORD *)v7;
    v28 = v10;
    v27 = v9;
    if ( (_QWORD)v25 == v11 )
    {
      result = DWORD2(v27);
      if ( DWORD2(v25) == DWORD2(v27) && v26 == v28 )
        return result;
    }
    v13 = v26 - 16;
    if ( (*(_DWORD *)(v26 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    if ( (*(_DWORD *)(v13 + 2340) & 1) != 0 )
    {
      v14 = *(unsigned int *)(v3 + 24);
      if ( (unsigned int)(v14 - 5) > 1 )
      {
        if ( (unsigned int)(v14 - 1) <= 3 )
        {
          if ( (*(_DWORD *)(v13 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
          v16 = *(_QWORD *)(v13 + 72);
          v29 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v29, v16) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 22, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
            if ( !*(_DWORD *)(a1 + 492) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
            *(_DWORD *)(a1 + 504) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                  + 250;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v13 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        if ( (*(_DWORD *)(v13 + 2420) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 492) )
          {
            rimAbRemoveGlobalPenDeadzone(a1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 21, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v13 + 72));
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13) )
      {
        v22 = *(unsigned int *)(v13 + 2420);
        if ( (v22 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v13) && (*(_DWORD *)(v13 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
LABEL_41:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 4;
            WPP_RECORDER_SF_dDD(
              v22,
              v19,
              v21,
              24,
              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
              *(_DWORD *)v13,
              *(_DWORD *)(v13 + 8),
              *(_DWORD *)(v13 + 2660));
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v13) && (*(_DWORD *)(v13 + 32) & 4) == 0 )
LABEL_49:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          *(_DWORD *)(v13 + 2340) &= ~1u;
          goto LABEL_51;
        }
        if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 5) > 1 )
          goto LABEL_41;
        if ( (v22 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v13 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v3, v13 + 2408) )
            goto LABEL_41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 23, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v3, v13, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v13) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v20)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v13)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v13) )
      {
        goto LABEL_49;
      }
    }
LABEL_51:
    RIMCmActiveContactsNext(v3, &v25);
  }
}
