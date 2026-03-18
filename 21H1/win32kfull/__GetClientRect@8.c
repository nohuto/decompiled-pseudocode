/*
 * XREFs of __GetClientRect@8 @ 0xB2C9E
 * Callers:
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 *     _xxxSendSizeMessage@8 @ 0xB2C46 (_xxxSendSizeMessage@8.c)
 *     ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8 (-GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 * Callees:
 *     _GetPrimaryMonitorRect@0 @ 0xB3136 (_GetPrimaryMonitorRect@0.c)
 */

_DWORD *__fastcall _GetClientRect(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  _DWORD *result; // eax
  int v8; // [esp+24h] [ebp-Ch]
  int v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]

  v2 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v2 + 23) & 0x20) == 0 || (*(_BYTE *)(v2 + 13) & 2) != 0 )
  {
    if ( (*(_WORD *)(v2 + 30) & 0x3FFF) == 0x29D )
    {
      result = (_DWORD *)GetPrimaryMonitorRect();
      v8 = result[1];
      v9 = result[2];
      v10 = result[3];
      *a2 = *result;
      a2[1] = v8;
      a2[2] = v9;
      a2[3] = v10;
    }
    else
    {
      v4 = (_DWORD *)(v2 + 68);
      *a2 = *v4++;
      a2[1] = *v4++;
      a2[2] = *v4;
      a2[3] = v4[1];
      v5 = *(_DWORD *)(a1 + 20);
      v6 = *(_DWORD *)(v5 + 72);
      result = *(_DWORD **)(v5 + 68);
      *a2 -= result;
      a2[2] -= result;
      a2[3] -= v6;
      a2[1] -= v6;
    }
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = *(_DWORD *)(_gpsi + 1724);
    result = *(_DWORD **)(_gpsi + 1728);
    a2[3] = result;
  }
  return result;
}
