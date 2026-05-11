/*
 * XREFs of USBParseIsFeedbackSupported @ 0x1C00324D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBParseIsFeedbackSupported(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = *(_QWORD *)(a2 + 176) != 0LL;
  return 0LL;
}
