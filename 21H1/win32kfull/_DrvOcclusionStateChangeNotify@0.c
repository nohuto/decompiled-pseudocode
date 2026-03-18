/*
 * XREFs of _DrvOcclusionStateChangeNotify@0 @ 0xB2298
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

int __stdcall DrvOcclusionStateChangeNotify()
{
  int result; // eax
  int v1; // eax
  _DWORD v2[2]; // [esp+0h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+4h]

  v2[1] = retaddr;
  v2[0] = 1;
  result = ((int (__stdcall *)(_DWORD *))_gDxgkInterface[52])(v2);
  if ( result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}
