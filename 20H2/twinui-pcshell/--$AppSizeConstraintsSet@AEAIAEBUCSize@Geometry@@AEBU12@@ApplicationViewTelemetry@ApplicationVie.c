/*
 * XREFs of ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180051728
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180051650 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x180197084 (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 *     ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180197D64 (-AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        unsigned int *a1,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  unsigned __int64 v6; // r8
  struct tagSIZE v7; // rbx
  struct tagSIZE v8; // rdi
  ApplicationViewManagement::ApplicationViewTelemetry *v9; // rcx
  LPVOID Context[5]; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(
         &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         Context)
    && fPending )
  {
    Context[0] = qword_1805CC250;
    qword_1805CC250[0] = &IamTraceLogging::`vftable';
    atexit(_lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_1805CC250);
    InitOnceComplete(&`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper, 0, qword_1805CC250);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context[0], 0, v6) )
  {
    v7 = *a3;
    v8 = *a2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           Context) )
    {
      if ( fPending )
      {
        Context[0] = qword_1805CC250;
        qword_1805CC250[0] = &IamTraceLogging::`vftable';
        atexit(_lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
        ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_1805CC250);
        InitOnceComplete(
          &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
          0,
          qword_1805CC250);
      }
    }
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(v9, *a1, v8, v7);
  }
}
