/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0259844
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0259780 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memcmp @ 0x1C01577C0 (memcmp.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C022589C (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C0259B5C (-ProcessGetAppSessionGuid@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C0259BBC (-UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYP.c)
 */

__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  GUID v9; // xmm6
  GUID v10; // xmm7
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  struct tagPROCESSINFO *v13; // rdx
  struct tagPROCESSINFO *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  struct tagINTOBJTELEMETRYSTATE *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int16 v20; // dx
  __int64 v21; // xmm1_8
  int v22; // eax
  _QWORD v24[4]; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE Buf2[96]; // [rsp+68h] [rbp-71h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq;
  v12 = v11 - gmsLastUsageTelemetrySentTime;
  if ( gptiForeground )
  {
    v13 = *(struct tagPROCESSINFO **)(gptiForeground + 416LL);
    if ( v13 )
      v9 = *ProcessGetAppSessionGuid((struct _GUID *)&v24[1], v13);
  }
  if ( a2 )
  {
    v14 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 416LL);
    if ( v14 )
      v10 = *ProcessGetAppSessionGuid((struct _GUID *)&v24[1], v14);
  }
  if ( v12 > 0xEA60 )
    goto LABEL_14;
  v15 = *(_QWORD *)&v9.Data1 - *(_QWORD *)&gLastForegroundAppSessionGuid.Data1;
  if ( *(_QWORD *)&v9.Data1 == *(_QWORD *)&gLastForegroundAppSessionGuid.Data1 )
    v15 = _mm_srli_si128((__m128i)v9, 8).m128i_u64[0] - *(_QWORD *)gLastForegroundAppSessionGuid.Data4;
  if ( v15 )
    goto LABEL_14;
  v16 = *(_QWORD *)&v10.Data1 - *(_QWORD *)&gLastTargetAppSessionGuid.Data1;
  if ( *(_QWORD *)&v10.Data1 == *(_QWORD *)&gLastTargetAppSessionGuid.Data1 )
    v16 = _mm_srli_si128((__m128i)v10, 8).m128i_u64[0] - *(_QWORD *)gLastTargetAppSessionGuid.Data4;
  if ( v16 )
  {
LABEL_14:
    memset(Buf2, 0, sizeof(Buf2));
    if ( memcmp(&gIntObjTelemetryState, Buf2, 0x60uLL) )
    {
      if ( gmsInputEndTime < gmsInputStartTime )
      {
        v17 = (dword_1C03418F4 & 2) != 0 ? (struct tagINTOBJTELEMETRYSTATE *)0x30 : 0LL;
        *(struct tagINTOBJTELEMETRYSTATE near **)((char *)&gIntObjTelemetryState + (_QWORD)v17 + 40) = (struct tagINTOBJTELEMETRYSTATE near *)(*(char **)((char *)&gIntObjTelemetryState + (_QWORD)v17 + 40) + v11 - gmsInputStartTime);
      }
      v18 = *(_QWORD *)(a1 + 552);
      v19 = *(unsigned __int16 *)(v18 + 112);
      v20 = *(_WORD *)(v18 + 110);
      *(GUID *)&v25[1] = gLastTargetAppSessionGuid;
      *(GUID *)&v24[1] = gLastForegroundAppSessionGuid;
      TraceLoggingIntObjUsageSummaryEvent(v17, v20, v19, (struct _GUID *)&v24[1], (struct _GUID *)&v25[1], v12);
      memset(&gIntObjTelemetryState, 0, 0x60uLL);
    }
    gmsInputStartTime = v11;
    gmsLastUsageTelemetrySentTime = v11;
    gLastForegroundAppSessionGuid = v9;
    gLastTargetAppSessionGuid = v10;
  }
  v21 = *(_QWORD *)(a3 + 16);
  v22 = *(_DWORD *)(a3 + 24);
  *(_OWORD *)&v24[1] = *(_OWORD *)a3;
  v24[3] = v21;
  LODWORD(v25[0]) = v22;
  return UpdateIntObjUsage(a2, &v24[1], a4, a5, v11);
}
