/*
 * XREFs of _MagContextThreadCallout@16 @ 0x13C87A
 * Callers:
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _MagContextDestroy@4 @ 0xD4C94 (_MagContextDestroy@4.c)
 *     _MagControl@16 @ 0x13CA3F (_MagControl@16.c)
 * Callees:
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _DwmAsyncMagnDestroy@12 @ 0x1D1BC5 (_DwmAsyncMagnDestroy@12.c)
 *     _DwmAsyncMagnSetDesktopColorTransform@12 @ 0x1D1C57 (_DwmAsyncMagnSetDesktopColorTransform@12.c)
 *     _DwmAsyncMagnSetDesktopTransform@20 @ 0x1D1E08 (_DwmAsyncMagnSetDesktopTransform@20.c)
 */

void __stdcall MagContextThreadCallout(_DWORD **a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  void *v13; // eax
  int v14; // eax
  void *v15; // eax
  void *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // [esp-4h] [ebp-1Ch]
  _DWORD *v20; // [esp+10h] [ebp-8h]
  _DWORD *v21; // [esp+14h] [ebp-4h]

  v4 = a3;
  if ( a3 )
    goto LABEL_7;
  v4 = *a1;
  if ( *a1 == a1 )
  {
LABEL_5:
    v4 = 0;
  }
  else
  {
    while ( a2 != v4[2] )
    {
      v4 = (_DWORD *)*v4;
      if ( v4 == a1 )
        goto LABEL_5;
    }
  }
  if ( v4 )
  {
LABEL_7:
    if ( a4 == 1 )
    {
      v5 = v4 + 5;
      v6 = (_DWORD *)v4[5];
      while ( v6 != v5 )
      {
        v7 = v6;
        v20 = v6;
        v8 = *v6;
        v21 = (_DWORD *)v8;
        if ( *(_DWORD **)(v8 + 4) != v7 )
          goto LABEL_32;
        v9 = (_DWORD *)v7[1];
        if ( (_DWORD *)*v9 != v7 )
          goto LABEL_32;
        *v9 = v8;
        v10 = v7 + 3;
        *(_DWORD *)(v8 + 4) = v9;
        v11 = v7[3];
        if ( v11 == -1 )
        {
          v14 = v4[2];
          if ( *(_DWORD **)(*(_DWORD *)(v14 + 248) + 136) == v7 )
          {
            v15 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnSetDesktopColorTransform(v15, (int)&gMagEffectIdentity);
            *(_DWORD *)(*(_DWORD *)(v4[2] + 248) + 136) = 0;
            v14 = v4[2];
          }
          if ( *(_DWORD **)(*(_DWORD *)(v14 + 248) + 132) == v7 )
          {
            v16 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnSetDesktopTransform(v16, (int)&gOneDouble, 0, 0);
            *(_DWORD *)(*(_DWORD *)(v4[2] + 248) + 132) = 0;
          }
        }
        else
        {
          v12 = v7[2];
          if ( (v12 & 0x40) != 0 )
          {
            ChangeComposableCursor(0);
            v7[2] &= ~0x40u;
            v12 = v7[2];
            v11 = v7[3];
          }
          if ( (v12 & 0x20) == 0 )
          {
            v19 = ***(_DWORD ***)(*(_DWORD *)(v4[2] + 248) + 4);
            v13 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnDestroy(v13, v19);
            v10 = v7 + 3;
            v11 = v20[3];
          }
          if ( v11 )
            HMAssignmentUnlock(v10);
        }
        if ( v7[53] )
          Win32FreePool(v7[53]);
        if ( v7[58] )
          Win32FreePool(v7[58]);
        Win32FreePool(v7);
        v6 = v21;
        v5 = v4 + 5;
      }
      v17 = (_DWORD *)*v4;
      if ( *(_DWORD **)(*v4 + 4) != v4 || (v18 = (_DWORD *)v4[1], (_DWORD *)*v18 != v4) )
LABEL_32:
        __fastfail(3u);
      *v18 = v17;
      v17[1] = v18;
      Win32FreePool(v4);
      *(_DWORD *)(a2 + 688) &= ~8u;
    }
  }
}
