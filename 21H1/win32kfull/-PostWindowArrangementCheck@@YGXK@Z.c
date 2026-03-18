/*
 * XREFs of ?PostWindowArrangementCheck@@YGXK@Z @ 0xE9136
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( _gSqmIsOptedIn
    && ((a1 & 1) != (dword_26901C & 1) || (dword_26901C & 1) != 0 && ((a1 ^ dword_26901C) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527, dword_26901C);
  }
}
