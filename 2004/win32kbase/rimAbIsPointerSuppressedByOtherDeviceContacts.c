/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015BD7C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C015BCF0 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C015BF88 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C015D670 (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C0160DE0 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180E4C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0180E78 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int64 v23; // rax
  char v24; // cl
  __int64 v25; // r9
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  __int128 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-78h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h]
  _OWORD v34[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-40h]
  __int128 v36; // [rsp+D8h] [rbp-30h]
  __int128 v37; // [rsp+E8h] [rbp-20h]
  __int128 v38; // [rsp+F8h] [rbp-10h]
  _OWORD v39[2]; // [rsp+108h] [rbp+0h] BYREF

  v4 = a4;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v32, a3);
    v9 = *(_QWORD *)(active + 16);
    v30 = *(_OWORD *)active;
    v31 = v9;
    while ( 1 )
    {
      v10 = RIMCmActiveContactsEnd(v39, a3);
      v14 = v31;
      v15 = *(_OWORD *)v10;
      v16 = *(_QWORD *)(v10 + 16);
      v17 = *(_QWORD *)v10;
      v33 = v16;
      v32 = v15;
      if ( (_QWORD)v30 == v17 && DWORD2(v30) == DWORD2(v32) && v31 == v33 )
        return 0LL;
      v18 = *(_DWORD *)(v31 + 16);
      v19 = v4 != 0 ? 2648LL : 2408LL;
      v20 = *(_OWORD *)(v19 + v31);
      v34[0] = *(_OWORD *)(v19 + v31 - 16);
      v34[1] = v20;
      v21 = *(_OWORD *)(v19 + v31 + 32);
      v35 = *(_OWORD *)(v19 + v31 + 16);
      v36 = v21;
      v22 = *(_OWORD *)(v19 + v31 + 64);
      v37 = *(_OWORD *)(v19 + v31 + 48);
      v38 = v22;
      if ( (v18 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v11, v12, v13);
        v18 = *(_DWORD *)(v14 + 16);
      }
      if ( (v18 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v11, v12, v13);
      if ( (unsigned int)RIMCmIsContactSuppressed(v14 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14 - 16) )
        {
          goto LABEL_19;
        }
        v23 = *(_QWORD *)(v14 + 56);
        v24 = BYTE12(v34[0]) | 2;
        HIDWORD(v34[0]) |= 2u;
        LODWORD(v34[0]) = 3;
        *((_QWORD *)&v35 + 1) = v23;
      }
      else
      {
        v24 = BYTE12(v34[0]);
      }
      if ( (v24 & 2) != 0 )
      {
        v25 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 312), 4);
        v39[0] = *(_OWORD *)(a3 + 176);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v39, a1, v34, v25) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDdddDdd(*a1, v26, v27, v28);
          return 1LL;
        }
      }
LABEL_19:
      RIMCmActiveContactsNext(a3, &v30);
    }
  }
  return 0LL;
}
