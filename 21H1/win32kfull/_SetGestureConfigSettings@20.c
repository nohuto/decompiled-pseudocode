/*
 * XREFs of _SetGestureConfigSettings@20 @ 0xE3454
 * Callers:
 *     _NtUserSetGestureConfig@20 @ 0xE31F0 (_NtUserSetGestureConfig@20.c)
 * Callees:
 *     _FreeWindowGCData@4 @ 0x717D2 (_FreeWindowGCData@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC (-VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z.c)
 *     ?FreeWindowGCList@@YGXPAPAUtagGESTURECONFIGLIST@@@Z @ 0xD2CFC (-FreeWindowGCList@@YGXPAPAUtagGESTURECONFIGLIST@@@Z.c)
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A (-GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z.c)
 *     ?SortGestureConfigArray@@YGHPAUtagGESTURECONFIG@@H@Z @ 0xE3568 (-SortGestureConfigArray@@YGHPAUtagGESTURECONFIG@@H@Z.c)
 */

int __thiscall SetGestureConfigSettings(struct tagVWPL **this, unsigned int a2, struct tagWND *a3, int a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _BYTE *v7; // eax
  struct tagWND *v8; // ecx
  unsigned int *GCData; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  struct tagGESTURECONFIG *v13; // [esp+0h] [ebp-Ch]
  struct tagWND *v14; // [esp+0h] [ebp-Ch]
  struct tagWND *v15; // [esp+0h] [ebp-Ch]
  unsigned int v16; // [esp+0h] [ebp-Ch]
  int v17; // [esp+4h] [ebp-8h]
  struct tagGESTURECONFIG *v18; // [esp+4h] [ebp-8h]

  if ( !SortGestureConfigArray(v13, v17) )
    goto LABEL_16;
  if ( !GetGCData(v14) )
  {
    v5 = (_DWORD *)Win32AllocPoolWithQuota(16, 1684501333);
    v6 = v5;
    if ( !v5 || (v5[2] = 0, v5[1] = 0, v7 = (_BYTE *)Win32AllocPoolWithQuota(1, 1835168597), (*v6 = v7) == 0) )
    {
      UserSetLastError((struct _NT_TIB *)0xE);
      return 0;
    }
    *v7 = 0;
    v6[3] = 0;
    VWPLAddBase((int)v6, (_DWORD *)(*((_DWORD *)this[2] + 58) + 492), this, 5u, v8, (unsigned int)v15, (int)v18);
  }
  GCData = (unsigned int *)GetGCData(v15);
  if ( *(_DWORD *)a3 )
    return _StoreGestureConfig(a2, (struct tagGESTURECONFIGLIST *)this, a3, v16, v18);
  v10 = *((_DWORD *)a3 + 1);
  if ( !v10 && !*((_DWORD *)a3 + 2) )
  {
    FreeWindowGCData(this, GCData, this);
    v10 = *((_DWORD *)a3 + 1);
  }
  if ( (v10 | *((_DWORD *)a3 + 2)) != 1 || v10 == *((_DWORD *)a3 + 2) )
  {
LABEL_16:
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  GCData[1] = v10;
  GCData[2] = *((_DWORD *)a3 + 2);
  *(_BYTE *)*GCData = 0;
  v11 = GCData[3];
  if ( v11 )
  {
    FreeWindowGCList((_DWORD *)GCData[3]);
    Win32FreePool(v11);
    GCData[3] = 0;
  }
  return 1;
}
