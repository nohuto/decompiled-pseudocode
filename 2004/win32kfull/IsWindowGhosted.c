/*
 * XREFs of IsWindowGhosted @ 0x1C008B128
 * Callers:
 *     xxxHandleHealthyThread @ 0x1C0003640 (xxxHandleHealthyThread.c)
 *     xxxSetWindowPosAndBand @ 0x1C006A7D4 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxUpdateInputHangInfo @ 0x1C0095D70 (xxxUpdateInputHangInfo.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && (GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) || GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
  {
    return 1;
  }
  return v2;
}
