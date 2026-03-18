/*
 * XREFs of BcpCursorLessThan @ 0x1405C3028
 * Callers:
 *     BcpDisplayProgress @ 0x1405C3710 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
