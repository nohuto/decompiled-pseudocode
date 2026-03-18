/*
 * XREFs of _xxxGetUpdateRgn@12 @ 0xC3C20
 * Callers:
 *     _NtUserGetUpdateRgn@12 @ 0xC3BAE (_NtUserGetUpdateRgn@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxGetUpdateRgn(int a1, unsigned int a2, int a3)
{
  int v4; // esi
  int *v5; // esi
  int v6; // eax
  _DWORD *v7; // edi
  unsigned int v8; // edi
  int v9; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagVWPL **)a1);
  SetOrClrWF(0, a1, 0x120u, 1);
  v4 = *(_DWORD *)(a1 + 20);
  if ( !*(_DWORD *)(v4 + 92) )
  {
LABEL_14:
    v8 = a2;
    goto LABEL_15;
  }
  v5 = (int *)(v4 + 68);
  v16 = *v5++;
  v17 = *v5++;
  v18 = *v5;
  v19 = v5[1];
  v6 = IntersectWithParents(a1, (int)&v16);
  v7 = *(_DWORD **)(a1 + 20);
  if ( v7[23] == 1 )
  {
    if ( v6 )
    {
      v9 = 2;
      if ( a1 != _GetDesktopWindow((_DWORD *)a1) )
      {
        v11 = v7[17];
        v12 = -v7[18];
        v19 -= v7[18];
        v13 = -v11;
        v16 += v13;
        v18 += v13;
        v17 += v12;
      }
      v8 = a2;
      SetRectRgnIndirect(a2, &v16);
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  SetRectRgnIndirect(_ghrgnInv2, &v16);
  v8 = a2;
  v15 = GreCombineRgn(a2, _ghrgnInv2, *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92), 1);
  if ( v15 > 1 )
  {
    if ( a1 != _GetDesktopWindow((_DWORD *)a1) )
      GreOffsetRgn(v8, -*(_DWORD *)(*(_DWORD *)(a1 + 20) + 68), -*(_DWORD *)(*(_DWORD *)(a1 + 20) + 72));
    v9 = v15;
LABEL_9:
    MirrorRegion(a1, v8, 1);
    return v9;
  }
LABEL_15:
  SetEmptyRgn(v8);
  return 1;
}
