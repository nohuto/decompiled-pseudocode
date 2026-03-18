/*
 * XREFs of IsWindowHolographicForHitTest @ 0x1C004C870
 * Callers:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0012418 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C004C7DC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsWindowHolographicForHitTest(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  _OWORD *Prop; // rax
  __int16 v9; // ax

  v1 = a1;
  if ( !a1 )
    return 0LL;
  do
  {
    result = v1[13];
    if ( result )
    {
      v3 = v1[3];
      v4 = 0LL;
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
          v4 = *(_QWORD *)(v5 + 24);
      }
      if ( result == v4 )
        break;
    }
    v1 = (_QWORD *)v1[13];
  }
  while ( result );
  v6 = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 24);
  }
  if ( (result == v6 || (*(_BYTE *)(v1[5] + 26LL) & 8) != 0 && GetTopLevelWindow((__int64)v1))
    && ((Prop = (_OWORD *)RealGetProp(v1[18], (unsigned __int16)atomDWMProp, 1LL)) == 0LL ? (v9 = 0) : (v9 = *Prop),
        (v9 & 0x2000) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
