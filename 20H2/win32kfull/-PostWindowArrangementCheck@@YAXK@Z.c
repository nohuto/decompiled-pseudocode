/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0124A84
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C032FC0C & 1) || (dword_1C032FC0C & 1) != 0 && ((a1 ^ dword_1C032FC0C) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
