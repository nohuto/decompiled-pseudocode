/*
 * XREFs of _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     _GreLockDisplayArea@8 @ 0x1230A (_GreLockDisplayArea@8.c)
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 *     _InvalidateDCE@4 @ 0x3277C (_InvalidateDCE@4.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 */

int __fastcall zzzLockDisplayAreaAndInvalidateDCCache(int a1, char a2, struct _RECTL *a3)
{
  int v4; // edi
  int *i; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // esi
  int v18; // esi
  unsigned __int8 v19; // ah
  char v20; // [esp-4h] [ebp-28h]
  _DWORD v21[3]; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  int v23; // [esp+20h] [ebp-4h]
  int v24; // [esp+2Ch] [ebp+8h]

  v21[2] = 0;
  v4 = a1;
  v21[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v21;
  v21[1] = a1;
  HMLockObject(a1);
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0);
  if ( (a2 & 1) == 0 )
    goto LABEL_4;
  v18 = *(_DWORD *)(v4 + 56);
  a2 = 0;
  if ( !v18 || v4 == _GetDesktopWindow(v4) )
    goto LABEL_4;
  if ( (*(_BYTE *)(*(_DWORD *)(v18 + 20) + 23) & 2) != 0 )
  {
    v20 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 23) & 4) == 0 )
      goto LABEL_4;
    v20 = 2;
  }
  v4 = v18;
  a2 = v20;
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_DWORD **)(_gpDispInfo + 20), a3);
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  GreLockVisRgnPublish(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(int **)(_gpDispInfo + 12); i; i = (int *)*i )
  {
    v10 = i[8];
    if ( (v10 & 0x400800) == 0 )
    {
      if ( (v10 & 3) == 0 )
      {
        v13 = i[2];
        v14 = *(_DWORD *)(v13 + 20);
        if ( (*(_BYTE *)(v14 + 23) & 2) != 0 )
        {
          v10 |= 8u;
          i[8] = v10;
          v14 = *(_DWORD *)(v13 + 20);
        }
        if ( (*(_BYTE *)(v14 + 23) & 0x20) != 0 )
          i[8] = v10 & 0xFFFFFFF7;
      }
      v11 = i[2];
      v12 = v11;
      v23 = v11;
      while ( 1 )
      {
        if ( !v12 )
          goto LABEL_16;
        if ( v12 == v4 )
          break;
        v12 = *(_DWORD *)(v12 + 56);
      }
      if ( v4 != v11 || (a2 & 2) == 0 && ((i[8] & 1) == 0 || (a2 & 4) == 0) )
      {
        v6 = i[8];
        if ( (v6 & 0x1000) != 0 )
        {
          v24 = i[3];
          if ( v6 >= 0 )
          {
            v6 &= 0x7FFFFFE7u;
            i[8] = v6;
            if ( *(char *)(*(_DWORD *)(*(_DWORD *)(v11 + 76) + 4) + 8) >= 0
              || (v22 = *(_DWORD *)(v11 + 20), (*(_BYTE *)(v22 + 13) & 1) == 0)
              && (*(_BYTE *)(*(_DWORD *)(v24 + 20) + 23) & 2) != 0
              || (v19 = *(_BYTE *)(*(_DWORD *)(v24 + 20) + 23), v11 = v23, ((v19 ^ *(_BYTE *)(v22 + 23)) & 0x10) != 0) )
            {
              v7 = *(_DWORD *)(v11 + 20);
              v8 = v6;
              if ( (*(_BYTE *)(v7 + 23) & 0x22) == 2 )
              {
                v9 = v23;
                v8 = v6 | 8;
                i[8] = v6 | 8;
                v7 = *(_DWORD *)(v9 + 20);
              }
              v6 = v8;
              if ( (*(_BYTE *)(v7 + 23) & 4) != 0 )
LABEL_14:
                v6 |= 0x10u;
            }
            else if ( (v19 & 4) != 0 )
            {
              goto LABEL_14;
            }
          }
          i[8] = v6 | 0x2000;
          UserSetDCVisRgn(i);
          continue;
        }
        SpbCheckDce(i);
        InvalidateDCE(i);
      }
    }
LABEL_16:
    ;
  }
  GreUnlockVisRgnPublish(*(_DWORD *)(_gpDispInfo + 20));
  v15 = a2 & 8;
  v16 = v15 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v4);
    v16 |= 1u;
  }
  GreClientRgnUpdated(v16);
  GreUpdateSpriteVisRgn(*(_DWORD *)(_gpDispInfo + 20), v15 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  ThreadUnlock1();
  return 1;
}
