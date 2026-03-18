/*
 * XREFs of BcpCursorLessThan @ 0x1405BEC88
 * Callers:
 *     BcpDisplayProgress @ 0x1405BF370 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
