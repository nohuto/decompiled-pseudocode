/*
 * XREFs of _FindNCHitEx@16 @ 0xA3C10
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _MNItemHitTest@16 @ 0x19761B (_MNItemHitTest@16.c)
 *     ?HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z @ 0x1A2A4A (-HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z.c)
 */

int __fastcall FindNCHitEx(int a1, int a2, struct tagWND *a3, int a4)
{
  unsigned __int16 v4; // si
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  __int16 v9; // [esp-4h] [ebp-Ch]
  struct tagPOINT v10; // [esp+0h] [ebp-8h]

  v4 = a2;
  if ( a2 == 5 )
  {
    v6 = *(_DWORD *)(a1 + 92);
    if ( !v6 || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 8) & 1) == 0 )
      return a2;
    v7 = MNItemHitTest(a3, a4);
    if ( v7 < 0 )
      return v4 | ((unsigned __int16)v7 << 16);
    v8 = *(_DWORD *)(*(_DWORD *)(80 * v7 + *(_DWORD *)(v6 + 56)) + 64);
    if ( v8 == 1 )
    {
      v9 = 65;
      goto LABEL_21;
    }
    if ( v8 == 2 )
    {
      v9 = 66;
      goto LABEL_21;
    }
    if ( v8 != 3 )
    {
      if ( v8 <= 4 )
        goto LABEL_17;
      if ( v8 <= 6 )
      {
        v9 = 68;
        goto LABEL_21;
      }
      if ( v8 != 7 )
      {
        if ( v8 == -1 )
        {
          v9 = -2;
LABEL_21:
          v4 = v9;
          return v4 | ((unsigned __int16)v7 << 16);
        }
LABEL_17:
        v9 = 69;
        goto LABEL_21;
      }
    }
    v9 = 67;
    goto LABEL_21;
  }
  if ( a2 == 7 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 8) & 2) != 0 )
      return (unsigned __int16)HitTestScrollBar(a3, a4, v10) | 0x10000;
    return a2;
  }
  if ( a2 != 6 || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 8) & 4) == 0 )
    return a2;
  return (unsigned __int16)HitTestScrollBar(a3, a4, v10);
}
