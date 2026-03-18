/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YGXPAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x18687E (-TraceLoggingIntObjUsageSummaryEvent@@YGXPAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YG?AU_GUID@@PAUtagPROCESSINFO@@@Z @ 0x1B3327 (-ProcessGetAppSessionGuid@@YG-AU_GUID@@PAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateIntObjUsage@@YGXPAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1B3375 (-UpdateIntObjUsage@@YGXPAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE.c)
 */

int __fastcall HandleIntObjUsageTelemetry(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v13; // kr00_8
  int v14; // edx
  int v15; // et2
  int v16; // ecx
  struct tagINTOBJTELEMETRYSTATE *v17; // eax
  __int16 v18; // dx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  _BYTE v22[40]; // [esp-28h] [ebp-ECh] BYREF
  unsigned __int64 v23; // [esp+0h] [ebp-C4h]
  struct _GUID v24; // [esp+10h] [ebp-B4h] BYREF
  int v25; // [esp+24h] [ebp-A0h]
  unsigned __int64 v26; // [esp+28h] [ebp-9Ch]
  unsigned int v27; // [esp+30h] [ebp-94h]
  unsigned int v28; // [esp+34h] [ebp-90h]
  GUID v29; // [esp+38h] [ebp-8Ch] BYREF
  GUID Buf1; // [esp+48h] [ebp-7Ch] BYREF
  _BYTE Buf2[100]; // [esp+58h] [ebp-6Ch] BYREF

  v25 = a1;
  PerformanceCounter = KeQueryPerformanceCounter(0);
  *(_QWORD *)&v22[32] = 1000LL;
  *(LARGE_INTEGER *)&v22[24] = PerformanceCounter;
  *(_DWORD *)&v22[36] = _gliQpcFreq[1];
  *(_DWORD *)&v22[32] = _gliQpcFreq[0];
  *(_QWORD *)&v22[24] = 1000 * PerformanceCounter.QuadPart;
  v13 = 1000 * PerformanceCounter.QuadPart / *(_QWORD *)&v22[32];
  v27 = HIDWORD(v13);
  v28 = v13;
  v26 = v13 - gmsLastUsageTelemetrySentTime;
  memset(&Buf1, 0, sizeof(Buf1));
  memset(&v29, 0, sizeof(v29));
  if ( _gptiForeground && *(_DWORD *)(_gptiForeground + 232) )
    Buf1 = *ProcessGetAppSessionGuid(&v24, (struct tagPROCESSINFO *)v23);
  if ( a2 && *(_DWORD *)(*(_DWORD *)(a2 + 8) + 232) )
    v29 = *ProcessGetAppSessionGuid(&v24, (struct tagPROCESSINFO *)v23);
  if ( v26 <= 0xEA60
    && !memcmp(&Buf1, &gLastForegroundAppSessionGuid, 0x10u)
    && !memcmp(&v29, &gLastTargetAppSessionGuid, 0x10u) )
  {
    v19 = v28;
    v20 = v27;
  }
  else
  {
    memset(Buf2, 0, 0x60u);
    if ( memcmp(&gIntObjTelemetryState, Buf2, 0x60u) )
    {
      if ( gmsInputEndTime < gmsInputStartTime )
      {
        v14 = (dword_278484 & 2) != 0 ? 0x30 : 0;
        v15 = v28 - gmsInputStartTime + *(int *)((char *)&dword_2784D0 + v14);
        *(int *)((char *)&dword_2784D4 + v14) = (__PAIR64__(v27, v28)
                                               - gmsInputStartTime
                                               + __PAIR64__(
                                                   *(int *)((char *)&dword_2784D4 + v14),
                                                   *(int *)((char *)&dword_2784D0 + v14))) >> 32;
        *(int *)((char *)&dword_2784D0 + v14) = v15;
      }
      v16 = *(_DWORD *)(v25 + 332);
      *(_DWORD *)&v22[24] = gLastTargetAppSessionGuid.Data1;
      v17 = (struct tagINTOBJTELEMETRYSTATE *)*(unsigned __int16 *)(v16 + 92);
      v18 = *(_WORD *)(v16 + 90);
      *(_DWORD *)&v22[28] = *(_DWORD *)&gLastTargetAppSessionGuid.Data2;
      *(_DWORD *)&v22[32] = *(_DWORD *)gLastTargetAppSessionGuid.Data4;
      *(_DWORD *)&v22[36] = *(_DWORD *)&gLastTargetAppSessionGuid.Data4[4];
      TraceLoggingIntObjUsageSummaryEvent(
        v18,
        v17,
        v26,
        WORD2(v26),
        gLastForegroundAppSessionGuid,
        *(struct _GUID *)&v22[24],
        v23);
      memset(&gIntObjTelemetryState, 0, 0x60u);
    }
    v19 = v28;
    v20 = v27;
    LODWORD(gmsInputStartTime) = v28;
    HIDWORD(gmsInputStartTime) = v27;
    LODWORD(gmsLastUsageTelemetrySentTime) = v28;
    HIDWORD(gmsLastUsageTelemetrySentTime) = v27;
    gLastForegroundAppSessionGuid = Buf1;
    gLastTargetAppSessionGuid = v29;
  }
  qmemcpy(v22, &a3, 0x1Cu);
  return UpdateIntObjUsage(
           a2,
           *(_DWORD *)v22,
           *(_DWORD *)&v22[4],
           *(_DWORD *)&v22[8],
           *(_DWORD *)&v22[12],
           *(_DWORD *)&v22[16],
           *(_DWORD *)&v22[20],
           *(_DWORD *)&v22[24],
           a11,
           v19,
           v20);
}
