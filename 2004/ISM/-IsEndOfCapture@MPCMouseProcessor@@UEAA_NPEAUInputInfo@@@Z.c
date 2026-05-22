/*
 * XREFs of ?IsEndOfCapture@MPCMouseProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1801959A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsEndOfCapture(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*((_BYTE *)this + 6228) & 0x70) == 0;
}
