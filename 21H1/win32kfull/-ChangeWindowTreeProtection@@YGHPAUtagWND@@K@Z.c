/*
 * XREFs of ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4
 * Callers:
 *     _ForceDisplayAffinity@4 @ 0x1A5967 (_ForceDisplayAffinity@4.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?ProtectWindowBitmap@@YGHPAUtagWND@@K@Z @ 0xF5722 (-ProtectWindowBitmap@@YGHPAUtagWND@@K@Z.c)
 *     ?Add@?$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@QAEJABQAUtagWND@@@Z @ 0x1A58B0 (-Add@-$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@QAEJABQAUtagWND@@@Z.c)
 */

int __fastcall ChangeWindowTreeProtection(int a1, int a2)
{
  int v2; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  unsigned int *v7; // esi
  unsigned int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  struct tagBWL *v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v2 = 0;
  v16 = a2;
  v15 = a1;
  v4 = BuildHwndList(a1, 1, 0);
  v13 = (struct tagBWL *)v4;
  if ( v4 )
  {
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add(&v15) < 0 )
      goto LABEL_15;
    v5 = *(_DWORD **)(a1 + 8);
    v15 = 0;
    v14 = v5[58];
    if ( a1 == v5[199] )
    {
      v6 = v5[200];
      if ( v6 )
        v15 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232);
    }
    v7 = (unsigned int *)(v4 + 16);
    v8 = *(_DWORD *)(v4 + 16);
    if ( v8 == 1 )
    {
LABEL_15:
      v2 = 1;
    }
    else
    {
      v9 = v15;
      while ( 1 )
      {
        v10 = HMValidateHandleNoSecure(v8, 1);
        v15 = v10;
        if ( v10 )
        {
          if ( (*(_BYTE *)(*(_DWORD *)(v10 + 20) + 19) & 0x20) != 0 )
          {
            v11 = *(_DWORD *)(*(_DWORD *)(v10 + 8) + 232);
            if ( (v16 & 1) != 0 && v11 != v14 && v11 != v9 )
              break;
            if ( (int)CDynamicArray<tagWND *,2003858261>::Add(&v15) < 0 )
              break;
          }
        }
        v8 = *++v7;
        if ( *v7 == 1 )
          goto LABEL_15;
      }
    }
    FreeHwndList(v13);
  }
  return v2;
}
