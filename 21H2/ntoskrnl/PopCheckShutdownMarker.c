/*
 * XREFs of PopCheckShutdownMarker @ 0x140B2C124
 * Callers:
 *     PopProcessBootstat @ 0x140B2C0C0 (PopProcessBootstat.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x1407FFF0C (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x1408002B4 (PopClearSystemSleepCheckpoint.c)
 *     RtlGetSystemBootStatusEx @ 0x14085F040 (RtlGetSystemBootStatusEx.c)
 *     PopRecordSleepCheckpointSource @ 0x140989C20 (PopRecordSleepCheckpointSource.c)
 *     PopDiagTraceDirtyTransition @ 0x140B52D94 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  char v2; // cl
  char v3; // cl
  char result; // al
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  char v7; // bl
  int v8; // r9d
  char v9; // [rsp+50h] [rbp-B0h] BYREF
  char v10; // [rsp+51h] [rbp-AFh] BYREF
  bool v11; // [rsp+52h] [rbp-AEh] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+6Ch] [rbp-94h] BYREF
  int v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int128 *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  char *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  bool *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+140h] [rbp+40h] BYREF
  __int128 *v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  __int128 *v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]
  __int128 *v49; // [rsp+178h] [rbp+78h]
  int v50; // [rsp+180h] [rbp+80h]

  v42 = 14;
  v43 = &PopBsdPhysicalPowerButtonInfo;
  v9 = 0;
  v46 = &PopBsdPowerTransition;
  v44 = 64;
  v49 = &PopBsdPowerTransitionExtension;
  v45 = 7;
  v47 = 32;
  v48 = 16;
  v50 = 32;
  RtlGetSystemBootStatusEx((__int64)&v42, 3u, 0LL);
  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 240) + 132LL) & 1;
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_140C5AC90 = xmmword_140C5ACD0;
  PopLastBootSucceeded = v2;
  xmmword_140C5ACA0 = xmmword_140C5ACE0;
  xmmword_140C5ACB0 = xmmword_140C5ACF0;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && (unsigned int)dword_140C03A00 > 5
    && tlgKeywordOn((__int64)&dword_140C03A00, 0x200000000000LL) )
  {
    v13 = v5;
    v22 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v15 = v5;
    v12 = WORD2(v5);
    v24 = &v12;
    v26 = &v13;
    v28 = &xmmword_140C5ACA0;
    v14 = WORD6(xmmword_140C5ACA0);
    v30 = &v14;
    v32 = &v15;
    v16 = HIWORD(xmmword_140C5ACA0);
    v34 = &v16;
    v17 = BYTE6(v5);
    v36 = &v17;
    v6 = HIBYTE(v5);
    v23 = 8LL;
    v10 = v6 & 1;
    v11 = (v6 & 2) != 0;
    v38 = &v10;
    v25 = 4LL;
    v40 = &v11;
    v27 = 4LL;
    v29 = 8LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 1LL;
    v41 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03A00,
      (unsigned __int8 *)&word_14002E19E,
      0LL,
      0LL,
      0xCu,
      &v21);
  }
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_140C5AC50 = unk_140C548F0;
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_140C5AC70 = xmmword_140C547A8;
  if ( (qword_140C15C78 & 4) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) &= ~1u;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  v3 = BYTE14(PopBsdPowerTransitionAtBoot) & 0xDF;
  BYTE14(PopBsdPowerTransitionAtBoot) &= ~0x20u;
  if ( DWORD2(PopBsdPhysicalPowerButtonInfoAtBoot) && (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 4) != 0 )
  {
    BYTE14(PopBsdPowerTransitionAtBoot) = v3 | 0x20;
    *(_QWORD *)&PopBsdPowerTransitionAtBoot = PopBsdPhysicalPowerButtonInfoAtBoot;
  }
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  v20 = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v18 = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData((__int64)&v20, (__int64)&v18);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    *((_QWORD *)&xmmword_140C5AC50 + 1) = 1LL;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    v19 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v9,
                (int)&v19,
                0LL) < 0 )
    {
      v7 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    else
    {
      v7 = v9;
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v9;
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v9);
      PopRecordSleepCheckpointSource(1);
      PopClearSystemSleepCheckpoint(1);
    }
    LOBYTE(v8) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             WORD6(PopBsdPowerTransitionAtBoot),
             v8,
             qword_140C548F8,
             PopBsdPowerTransitionAtBoot,
             0,
             v7,
             BYTE14(PopBsdPowerTransitionAtBoot) & 0xF,
             (BYTE14(PopBsdPowerTransitionAtBoot) & 0x20) != 0);
  }
  return result;
}
