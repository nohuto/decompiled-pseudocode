/*
 * XREFs of ?TouchTargetingIsSpecialTarget@@YGHPAUtagWND@@0@Z @ 0x17A283
 * Callers:
 *     ?DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179C2F (-DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall TouchTargetingIsSpecialTarget(int a1, int a2)
{
  _DWORD *v2; // ecx
  BOOL result; // eax

  result = 1;
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8) )
  {
    v2 = *(_DWORD **)(a2 + 20);
    if ( v2[13] != v2[15] || v2[14] != v2[16] )
      return 0;
  }
  return result;
}
