/*
 * XREFs of sub_1800C5050 @ 0x1800C5050
 * Callers:
 *     <none>
 * Callees:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_1.c)
 */

void __fastcall sub_1800C5050(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult)
{
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    UnDecorator::getZName(Context);
    SetThreadpoolWait(*((PTP_WAIT *)Context + 26), *((HANDLE *)Context + 25), 0LL);
    CoUninitialize();
  }
}
