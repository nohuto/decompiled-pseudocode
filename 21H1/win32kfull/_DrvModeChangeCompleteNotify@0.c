/*
 * XREFs of _DrvModeChangeCompleteNotify@0 @ 0xD4244
 * Callers:
 *     _GreDwmCreatedBitmapRemotingOutput@0 @ 0xD41BC (_GreDwmCreatedBitmapRemotingOutput@0.c)
 * Callees:
 *     <none>
 */

int __stdcall DrvModeChangeCompleteNotify()
{
  int result; // eax
  int v1; // eax
  _DWORD v2[2]; // [esp+0h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+4h]

  v2[1] = retaddr;
  v2[0] = 7;
  result = ((int (__stdcall *)(_DWORD *))_gDxgkInterface[52])(v2);
  if ( result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}
