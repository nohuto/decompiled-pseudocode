/*
 * XREFs of _HotKeyToWindow@4 @ 0x1A2512
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _DWP_SetHotKey@8 @ 0x730DE (_DWP_SetHotKey@8.c)
 * Callees:
 *     <none>
 */

int __thiscall HotKeyToWindow(void *this)
{
  _DWORD *i; // ecx

  for ( i = (_DWORD *)gpHotKeyList; ; i = (_DWORD *)i[2] )
  {
    if ( !i )
      return 0;
    if ( (void *)i[1] == this )
      break;
  }
  return (*(_BYTE *)(*(_DWORD *)(*i + 20) + 23) & 0x10) != 0 ? *i : 0;
}
