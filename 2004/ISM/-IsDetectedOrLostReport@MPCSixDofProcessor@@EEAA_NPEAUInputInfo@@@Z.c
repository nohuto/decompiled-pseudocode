/*
 * XREFs of ?IsDetectedOrLostReport@MPCSixDofProcessor@@EEAA_NPEAUInputInfo@@@Z @ 0x18018D0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsDetectedOrLostReport(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  return ((*((_DWORD *)a2 + 17) - 1) & 0xFFFFFFFB) == 0;
}
