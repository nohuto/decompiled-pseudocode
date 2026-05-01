/*
 * XREFs of ??$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z @ 0x18033632C
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18033B920 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180335D94 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted<unsigned int,bool &,unsigned int>(
        int *a1,
        char *a2,
        int *a3)
{
  _QWORD *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-19h] BYREF
  int *v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  char *v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  int *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  __int64 *v21; // [rsp+A8h] [rbp+37h]
  __int64 v22; // [rsp+B0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v11 = *a3;
      v10 = *a2;
      v12 = *a1;
      v21 = &v13;
      v19 = &v11;
      v17 = &v10;
      v15 = &v12;
      v13 = 0x1000000LL;
      v22 = 8LL;
      v20 = 4LL;
      v18 = 1LL;
      v16 = 4LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1804F2B3A, 0LL, 0LL, 6u, &v14);
    }
  }
  return (char)v6;
}
