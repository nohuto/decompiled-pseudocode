/*
 * XREFs of ?EqualMsg@@YGHPAUtagQMSG@@0@Z @ 0x6FE5C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall EqualMsg(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  BOOL result; // eax

  result = 0;
  if ( a1[2] == a2[2] )
  {
    v2 = a1[3];
    if ( v2 == a2[3] && (v2 == 512 || a1[17] == a2[17] && a1[6] == a2[6]) )
      return 1;
  }
  return result;
}
