/*
 * XREFs of ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     _DestroySMWP@4 @ 0x349E4 (_DestroySMWP@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

_DWORD *__fastcall _DeferWindowPos(_DWORD *a1, _DWORD *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // ebx
  int v11; // edx
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  _DWORD *result; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // [esp-10h] [ebp-24h]
  int v21; // [esp-Ch] [ebp-20h]
  unsigned int v22; // [esp-8h] [ebp-1Ch]
  unsigned int v23; // [esp+0h] [ebp-14h]
  unsigned int *v24; // [esp+4h] [ebp-10h]
  unsigned int v26; // [esp+10h] [ebp-4h] BYREF

  v10 = a2;
  v11 = a1[4];
  v12 = a1[5];
  if ( v11 + 1 > v12 )
  {
    v26 = 0;
    if ( ULongAdd((unsigned int)&v26, v23, v24) < 0
      || (v18 = v26, v26 > 0xFFFFFF)
      || ((v22 = v26 << 7, v21 = v12 << 7, v20 = a1[6], a1 == (_DWORD *)_gSMWP[0])
        ? (v19 = UserReAllocPoolZInit(v20, v21, v22, 2004054869))
        : (v19 = UserReAllocPoolWithQuotaZInit(v20, v21, v22, 2004054869)),
          !v19) )
    {
      DestroySMWP((int)a1);
      return 0;
    }
    v11 = a1[4];
    a1[5] = v18;
    v10 = a2;
    a1[6] = v19;
  }
  a1[4] = v11 + 1;
  v13 = (_DWORD *)(a1[6] + (v11 << 7));
  *v13 = *v10;
  if ( (*(_BYTE *)(v10[5] + 12) & 0x20) != 0 )
  {
    v14 = 1;
  }
  else if ( (unsigned int)a3 <= 1 || (unsigned int)a3 > 0xFFFFFFFD )
  {
    v14 = (int)a3;
  }
  else
  {
    v14 = *a3;
  }
  v13[1] = v14;
  v13[2] = a4;
  v13[3] = a5;
  v13[4] = a6;
  v13[5] = a7;
  v13[6] = a8;
  v13[30] &= 0xFFFFFF1F;
  v15 = v13[30];
  v13[22] = 0;
  v13[23] = 0;
  v13[24] = 0;
  v13[26] = 0;
  v13[25] = 0;
  v13[28] = 0;
  v13[27] = 0;
  if ( (a8 & 3) != 3 || (v16 = v15, (a8 & 4) == 0) && a3 == (int *)-1 )
  {
    v16 = v15 | 0x20;
    v13[24] = *(_DWORD *)(a2[5] + 164);
  }
  v13[29] = a9;
  result = a1;
  v13[30] = v16 & 0xFFFFFEE0;
  return result;
}
