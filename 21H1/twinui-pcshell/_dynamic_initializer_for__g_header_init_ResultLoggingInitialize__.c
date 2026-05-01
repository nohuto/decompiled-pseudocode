/*
 * XREFs of _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x1800016E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18008C1AC (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 */

void __fastcall dynamic_initializer_for__g_header_init_ResultLoggingInitialize__(
        wil *a1,
        void (*a2)(bool, const struct wil::FailureInfo *))
{
  wil::SetResultTelemetryFallback(a1, a2);
  g_header_init_ResultLoggingInitialize = 1;
}
