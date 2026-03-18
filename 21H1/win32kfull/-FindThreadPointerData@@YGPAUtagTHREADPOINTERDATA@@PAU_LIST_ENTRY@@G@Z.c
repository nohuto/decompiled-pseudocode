/*
 * XREFs of ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87
 * Callers:
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 *     ?DeferNotifyDelegateCapture@@YGHPAUtagTHREADINPUTPOINTERLIST@@GKPAUtagWND@@@Z @ 0x15AC4C (-DeferNotifyDelegateCapture@@YGHPAUtagTHREADINPUTPOINTERLIST@@GKPAUtagWND@@@Z.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 *     ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16 (-IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z.c)
 *     ?MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x15B0D0 (-MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     _EditionFindThreadPointerData@8 @ 0x15B9C8 (_EditionFindThreadPointerData@8.c)
 * Callees:
 *     <none>
 */

struct tagTHREADPOINTERDATA *__fastcall FindThreadPointerData(struct tagTHREADPOINTERDATA **a1, __int16 a2)
{
  struct tagTHREADPOINTERDATA *v2; // esi
  struct tagTHREADPOINTERDATA *result; // eax

  v2 = *a1;
  if ( *a1 == (struct tagTHREADPOINTERDATA *)a1 )
    return 0;
  do
  {
    result = v2;
    if ( *((_WORD *)v2 + 4) == a2 )
      break;
    v2 = *(struct tagTHREADPOINTERDATA **)v2;
  }
  while ( v2 != (struct tagTHREADPOINTERDATA *)a1 );
  if ( v2 == (struct tagTHREADPOINTERDATA *)a1 )
    return 0;
  return result;
}
