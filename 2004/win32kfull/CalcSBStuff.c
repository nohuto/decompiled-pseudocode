/*
 * XREFs of CalcSBStuff @ 0x1C0027538
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00272B4 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C014A280 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0245424 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0245658 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0245934 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 * Callees:
 *     _InitPwSB @ 0x1C0027658 (_InitPwSB.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     CalcSBStuff2 @ 0x1C00A2530 (CalcSBStuff2.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax
  bool v14; // zf
  int v15; // esi
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int DpiForSystem; // eax
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+24h] [rbp-1Ch]
  int v22; // [rsp+28h] [rbp-18h]
  int v23; // [rsp+2Ch] [rbp-14h]
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF

  v24 = 0LL;
  GetRect(a1, &v24, 33LL);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 26) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - DWORD2(v24);
    v9 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - v24;
  }
  else
  {
    v9 = DWORD2(v24);
    v10 = v24;
  }
  if ( a3 )
  {
    LOBYTE(v7) = *(_BYTE *)(v8 + 16) & 2;
    if ( (*(_BYTE *)(v8 + 25) & 0x40) != 0 )
    {
      v20 = v10;
      v22 = v10;
      if ( (_BYTE)v7 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6);
        v20 = v10 - GetDpiDependentMetric(0LL, DpiForSystem, v19);
      }
    }
    else
    {
      v20 = v9;
      v22 = v9;
      if ( (_BYTE)v7 )
      {
        v11 = GetDpiForSystem(v7, v6);
        v22 = v9 + GetDpiDependentMetric(0LL, v11, v12);
      }
    }
    v21 = DWORD1(v24);
    v23 = HIDWORD(v24);
  }
  else
  {
    v14 = (*(_BYTE *)(v8 + 16) & 4) == 0;
    v15 = HIDWORD(v24);
    v21 = HIDWORD(v24);
    v23 = HIDWORD(v24);
    if ( !v14 )
    {
      v16 = ((__int64 (*)(void))GetDpiForSystem)();
      v23 = v15 + GetDpiDependentMetric(1LL, v16, v17);
    }
    v20 = v10;
    v22 = v9;
  }
  result = InitPwSB(a1);
  if ( result )
    return CalcSBStuff2(a2, &v20, *(_QWORD *)(a1 + 152) + (a3 != 0 ? 20LL : 4LL), a3);
  return result;
}
