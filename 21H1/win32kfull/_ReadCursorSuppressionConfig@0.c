/*
 * XREFs of _ReadCursorSuppressionConfig@0 @ 0xEC628
 * Callers:
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall ReadCursorSuppressionConfig()
{
  int v0; // esi
  int v2; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v2 = 0;
  if ( _gSessionId != _gServiceSessionId && !_gProtocolType )
  {
    FastGetProfileDword(0, 49, L"EnableCursorSuppression", 0, &v2);
    return v2 != 0;
  }
  return v0;
}
