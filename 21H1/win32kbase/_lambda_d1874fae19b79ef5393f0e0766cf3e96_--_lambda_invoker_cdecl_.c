/*
 * XREFs of _lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_ @ 0x1C0159C20
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C004F990 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

void __fastcall lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rbx

  InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)a1, a2, a3, a4);
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)i);
}
