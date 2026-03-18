/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015A4C4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C01593E0 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C015951C (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0159790 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0159BD4 (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015AEFC (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsBegin @ 0x1C017E3A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C017EA1C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C017EA48 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C017EA68 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C017EA98 (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 active; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int128 v40; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41; // [rsp+58h] [rbp-19h]
  __int128 v42; // [rsp+60h] [rbp-11h]
  __int64 v43; // [rsp+70h] [rbp-1h]
  __int128 v44; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v45[24]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v46[24]; // [rsp+A0h] [rbp+2Fh] BYREF

  v5 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  active = RIMCmActiveContactsBegin(v45, v5);
  v8 = *(_QWORD *)(active + 16);
  v40 = *(_OWORD *)active;
  v41 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd(v46, v5);
    v14 = *(_OWORD *)v9;
    v15 = *(_QWORD *)(v9 + 16);
    v16 = *(_QWORD *)v9;
    v43 = v15;
    v42 = v14;
    if ( (_QWORD)v40 == v16 )
    {
      result = DWORD2(v42);
      if ( DWORD2(v40) == DWORD2(v42) && v41 == v43 )
        return result;
    }
    v18 = v41 - 16;
    if ( (*(_DWORD *)(v41 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    if ( (*(_DWORD *)(v18 + 2340) & 1) != 0 )
    {
      v19 = *(unsigned int *)(v5 + 24);
      if ( (unsigned int)(v19 - 5) > 1 )
      {
        if ( (unsigned int)(v19 - 1) <= 3 )
        {
          if ( (*(_DWORD *)(v18 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v10, v12, v13);
          v21 = *(_QWORD *)(v18 + 72);
          v44 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v44, v21, v13) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, 22, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
            if ( !*(_DWORD *)(a1 + 492) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24, v25);
            *(_DWORD *)(a1 + 504) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                  + 250;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v18 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v10, v12, v13);
        if ( (*(_DWORD *)(v18 + 2420) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 492) )
          {
            rimAbRemoveGlobalPenDeadzone(a1, v10, v12, v13);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 21, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v18 + 72), v12, v13);
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v18) )
      {
        v30 = *(unsigned int *)(v18 + 2420);
        if ( (v30 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) && (*(_DWORD *)(v18 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v26, v28, v35);
LABEL_41:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            WPP_RECORDER_SF_dDD(
              v30,
              v26,
              v28,
              24,
              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
              *(_DWORD *)v18,
              *(_DWORD *)(v18 + 8),
              *(_DWORD *)(v18 + 2660));
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) && (*(_DWORD *)(v18 + 32) & 4) == 0 )
LABEL_49:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
          *(_DWORD *)(v18 + 2340) &= ~1u;
          goto LABEL_51;
        }
        if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 5) > 1 )
          goto LABEL_41;
        if ( (v30 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v18 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v26, v28, v29);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v5, v18 + 2408, v29) )
            goto LABEL_41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 23, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v5, v18, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v18) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v27)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v18)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v18) )
      {
        goto LABEL_49;
      }
    }
LABEL_51:
    RIMCmActiveContactsNext(v5, &v40);
  }
}
