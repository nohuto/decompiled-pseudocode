/*
 * XREFs of ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180198850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCClickerProcessor::IsEndOfCapture(MPCClickerProcessor *this, struct InputInfo *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 17) - 4) <= 1;
}
