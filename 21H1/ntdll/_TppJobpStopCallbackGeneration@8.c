/*
 * XREFs of _TppJobpStopCallbackGeneration@8 @ 0x4B383B20
 * Callers:
 *     <none>
 * Callees:
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 */

void __stdcall TppJobpStopCallbackGeneration(int a1, int a2)
{
  TppJobpRundownJob(a1 - 48);
}
