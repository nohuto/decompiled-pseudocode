/*
 * XREFs of _xxxSetScrollBar@16 @ 0x8DD18
 * Callers:
 *     _NtUserSetScrollInfo@16 @ 0x8DC38 (_NtUserSetScrollInfo@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?SBSetParms@@YGHPAUtagSBDATA@@PAUtagSCROLLINFO@@PAHPAJ@Z @ 0x8DEDC (-SBSetParms@@YGHPAUtagSBDATA@@PAUtagSCROLLINFO@@PAHPAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z @ 0x8E28C (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 */

int __fastcall xxxSetScrollBar(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // eax
  char v8; // cl
  _DWORD *v10; // edx
  _DWORD *v11; // eax
  int v12; // ecx
  void *v13; // ecx
  bool v14; // zf
  char v15; // al
  int v17; // ecx
  unsigned int v18; // [esp-8h] [ebp-30h]
  int v19; // [esp-4h] [ebp-2Ch]
  int *v20; // [esp+0h] [ebp-28h]
  struct tagSBCALC *v21; // [esp+0h] [ebp-28h]
  int *v22; // [esp+4h] [ebp-24h]
  unsigned int v23; // [esp+4h] [ebp-24h]
  int v24; // [esp+Ch] [ebp-1Ch]
  struct tagWND *v25; // [esp+10h] [ebp-18h]
  int v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int v29; // [esp+20h] [ebp-8h]
  int v30; // [esp+24h] [ebp-4h] BYREF
  char v31; // [esp+37h] [ebp+Fh]

  v28 = 0;
  v4 = a4;
  if ( a4 )
    v4 = IsVisible((_DWORD *)a1);
  if ( a2 != 2 )
  {
    v25 = (struct tagWND *)(a2 != 0);
    v7 = *(_DWORD *)(a1 + 20);
    v29 = (unsigned __int16)(a2 != 0 ? 3616 : 3600);
    v8 = (a2 != 0 ? 32 : 16) & *(_BYTE *)((v29 >> 8) + v7 + 8);
    v31 = v8;
    v24 = v8 != 0;
    v30 = v24;
    if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && !v8 && !*(_DWORD *)(a1 + 84) )
    {
      UserSetLastError((struct _NT_TIB *)0x5A7);
      return 0;
    }
    if ( *(_DWORD *)(a1 + 84) )
    {
      v27 = 0;
    }
    else
    {
      v27 = 1;
      if ( !_InitPwSB((int *)a1) )
        return 0;
    }
    if ( SBSetParms((struct tagSBDATA *)&v30, (struct tagSCROLLINFO *)&v28, v20, v22) || v27 )
    {
      SetOrClrWF(0, a1, v29, 1);
      if ( v30 )
      {
        SetOrClrWF(1, a1, v29, 1);
      }
      else if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 22) & 0x30) == 0 )
      {
        v10 = *(_DWORD **)(a1 + 84);
        if ( v10[1] == v10[2] && v10[5] == v10[6] )
        {
          RtlFreeHeap(*(PVOID *)(*(_DWORD *)(a1 + 12) + 64), 0, *(PVOID *)(a1 + 84));
          tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(0);
        }
      }
      if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      {
        if ( v31 )
        {
          SetOrClrWF(1, a1, v29, 1);
          xxxEnableWndSBArrows(v30 != 0 ? 0 : (struct tagWND *)3, (unsigned int)v21, v23);
        }
      }
      else if ( v30 != v24 )
      {
        v11 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 392);
        if ( v11 && a1 == v11[1] )
          *v11 |= 8u;
        xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 55);
        return v28;
      }
      if ( v30 && v4 )
      {
        v15 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 8);
        if ( a2 ? v15 & 2 : v15 & 4 )
          goto LABEL_47;
      }
    }
    else if ( v31 && v4 )
    {
LABEL_47:
      xxxWindowEvent(0x800Eu, (struct tagEVENTHOOK *)a1, (unsigned int)v25 - 6, 0, 1);
      v17 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 392);
      if ( !v17
        || a1 != *(_DWORD *)(v17 + 4)
        || (struct tagWND *)((*(_DWORD *)v17 >> 1) & 1) != v25
        || *(_UNKNOWN **)(v17 + 32) != &xxxTrackThumb )
      {
        xxxDrawThumb(v25, v21, v23);
      }
    }
    return v28;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 8) + 264) & 2) == 0 )
  {
    v19 = a3;
    v18 = v4;
    goto LABEL_33;
  }
  v12 = *(_DWORD *)(a3 + 4);
  if ( v12 == 4100 )
  {
    v19 = v4;
    v18 = *(_DWORD *)(a3 + 20);
LABEL_33:
    v13 = (void *)a1;
    return xxxSendMessage(v13, v18, v19);
  }
  v14 = v12 == 1;
  v13 = (void *)a1;
  if ( !v14 )
  {
    v19 = a3;
    v18 = v4;
    return xxxSendMessage(v13, v18, v19);
  }
  xxxSendMessage((void *)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
  return 1;
}
