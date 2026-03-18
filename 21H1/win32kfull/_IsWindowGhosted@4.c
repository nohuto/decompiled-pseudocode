/*
 * XREFs of _IsWindowGhosted@4 @ 0x72B34
 * Callers:
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxHandleHealthyThread@4 @ 0x1707E9 (_xxxHandleHealthyThread@4.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

int __thiscall IsWindowGhosted(void *this)
{
  int v2; // esi

  v2 = 0;
  if ( !IsGhostWindowClass(this)
    && (_GetProp((int)this, *(unsigned __int16 *)(_gpsi + 500), 1)
     || _GetProp((int)this, *(unsigned __int16 *)(_gpsi + 978), 1)) )
  {
    return 1;
  }
  return v2;
}
