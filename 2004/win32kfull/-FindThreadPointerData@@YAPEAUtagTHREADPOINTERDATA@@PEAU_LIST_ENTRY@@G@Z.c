/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F162C
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01F1438 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F16A0 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1704 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F1A80 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     EditionFindThreadPointerData @ 0x1C01F27A0 (EditionFindThreadPointerData.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *result; // rax

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  do
  {
    result = Flink;
    if ( LOWORD(Flink[1].Flink) == a2 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  if ( Flink == a1 )
    return 0LL;
  return result;
}
