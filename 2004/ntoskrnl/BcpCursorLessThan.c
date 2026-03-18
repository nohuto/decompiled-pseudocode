/*
 * XREFs of BcpCursorLessThan @ 0x1405BF3A8
 * Callers:
 *     BcpDisplayProgress @ 0x1405BFA90 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
