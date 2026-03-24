/*
 * XREFs of AllocAndInitializeTelemetryContext @ 0x1C005F90C
 * Callers:
 *     FxAllocateDriverGlobals @ 0x1C0056C34 (FxAllocateDriverGlobals.c)
 * Callees:
 *     <none>
 */

void __fastcall AllocAndInitializeTelemetryContext(_FX_TELEMETRY_CONTEXT **TelemetryContext)
{
  UUID *PoolWithTag; // rax
  _FX_TELEMETRY_CONTEXT *v3; // rbx

  PoolWithTag = (UUID *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x72447846u);
  v3 = (_FX_TELEMETRY_CONTEXT *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( ExUuidCreate(PoolWithTag) >= 0 )
    {
      v3->DoOnceFlagsBitmap = 0;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
      v3 = 0LL;
    }
  }
  *TelemetryContext = v3;
}
