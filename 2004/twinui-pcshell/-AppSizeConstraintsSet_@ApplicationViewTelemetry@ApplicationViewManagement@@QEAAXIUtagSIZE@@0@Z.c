/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180198174
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18005F4E8 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        LONG a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  LONG v5; // edi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  LONG cy; // [rsp+34h] [rbp-65h] BYREF
  LONG v11; // [rsp+38h] [rbp-61h] BYREF
  LONG v12; // [rsp+3Ch] [rbp-5Dh] BYREF
  struct tagSIZE v13; // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v14; // [rsp+48h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-39h] BYREF
  struct tagSIZE *v17; // [rsp+80h] [rbp-19h]
  int v18; // [rsp+88h] [rbp-11h]
  int v19; // [rsp+8Ch] [rbp-Dh]
  struct tagSIZE *v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+98h] [rbp-1h]
  int v22; // [rsp+9Ch] [rbp+3h]
  LONG *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  LONG *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]
  LONG *p_cy; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+CCh] [rbp+33h]

  Context = 0LL;
  cx = a3.cx;
  v14 = a4;
  v5 = a4.cx;
  v13 = a3;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1805CD188;
    qword_1805CD188 = &ShellScreenClippingLogging::`vftable';
    qword_1805CD1A0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD188, qword_1805CD1A0, v7);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD188);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    cy = v14.cy;
    v12 = v13.cy;
    p_cy = &cy;
    v26 = &v11;
    v23 = &v12;
    v20 = &v13;
    v17 = &v14;
    v30 = 4;
    v27 = 4;
    v24 = 4;
    v21 = 4;
    v18 = 4;
    v11 = v5;
    v13.cx = cx;
    v14.cx = a2;
    tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_1804FCDA2, 0LL, 0LL, 7u, &v16);
  }
}
