/*
 * XREFs of ?IsStartOfCapture@MPCMouseProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180195930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsStartOfCapture(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*((_BYTE *)this + 6228) & 0x70) != 0;
}
