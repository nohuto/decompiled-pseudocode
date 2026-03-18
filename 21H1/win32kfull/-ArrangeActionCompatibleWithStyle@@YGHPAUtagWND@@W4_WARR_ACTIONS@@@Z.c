/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x170BFD
 * Callers:
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

BOOL __fastcall ArrangeActionCompatibleWithStyle(_DWORD *a1, int a2)
{
  char *v2; // edi
  int v3; // esi
  bool v5; // zf

  v2 = (char *)a1[5];
  v3 = 1;
  if ( v2[16] < 0 )
    return 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( (v2[22] & 2) == 0 )
        return 0;
      v5 = (v2[23] & 0x20) == 0;
    }
    else
    {
      if ( a2 == 2 )
      {
        if ( (v2[23] & 1) == 0 || (v2[22] & 4) != 0 )
          return v3;
        return 0;
      }
      if ( a2 <= 2 )
        return v3;
      if ( a2 > 5 )
      {
        if ( a2 <= 7 )
          return !IsGhostWindowClass(a1);
        return v3;
      }
      if ( (v2[22] & 4) == 0 )
        return 0;
      v5 = !IsGhostWindowClass(a1);
    }
  }
  else
  {
    if ( IsGhostWindowClass(a1) || (v2[22] & 1) == 0 )
      return 0;
    v5 = (v2[23] & 1) == 0;
  }
  if ( !v5 )
    return 0;
  return v3;
}
