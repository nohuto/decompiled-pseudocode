/*
 * XREFs of TppJobpStopCallbackGeneration @ 0x180111E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TppJobpStopCallbackGeneration(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  TppJobpRundownJob(a1 - 72, a2, a3, a4);
}
