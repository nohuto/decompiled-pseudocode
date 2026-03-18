/*
 * XREFs of ?IsOleDragDropCaptureWindow@@YGHPAUtagWND@@@Z @ 0x14D379
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsOleDragDropCaptureWindow(_DWORD *this)
{
  int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  unsigned __int8 v7; // al

  v1 = 0;
  if ( this )
  {
    v2 = this[3];
    v3 = 0;
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 52);
    if ( this[14] == v3 )
    {
      v4 = this[19];
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 60);
        if ( v5 )
        {
          v6 = 0;
          while ( 1 )
          {
            v7 = *(_BYTE *)(v5 + v6);
            if ( v7 != aClipbrdwndclas[v6] )
              break;
            if ( ++v6 == 16 )
              return v1 == 0;
          }
          v1 = v7 < (unsigned __int8)aClipbrdwndclas[v6] ? -1 : 1;
          return v1 == 0;
        }
      }
    }
  }
  return v1;
}
