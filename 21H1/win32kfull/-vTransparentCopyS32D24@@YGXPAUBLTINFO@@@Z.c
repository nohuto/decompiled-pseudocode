/*
 * XREFs of ?vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0x1F2699
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QAEP6IKPAU_XLATEOBJ@@K@ZXZ @ 0xBB29C (-pfnXlateBetweenBitfields@XLATE@@QAEP6IKPAU_XLATEOBJ@@K@ZXZ.c)
 */

void __stdcall vTransparentCopyS32D24(struct BLTINFO *a1)
{
  int (__fastcall *v2)(struct _XLATEOBJ *, unsigned int); // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  struct BLTINFO *v7; // ecx
  int v8; // eax
  int v9; // edx
  _BYTE *v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int (__fastcall *v14)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-20h]
  struct _XLATEOBJ *v15; // [esp+10h] [ebp-1Ch]
  int v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+18h] [ebp-14h]
  struct BLTINFO *v18; // [esp+1Ch] [ebp-10h]
  int v19; // [esp+20h] [ebp-Ch]
  _BYTE *v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]
  int v22; // [esp+28h] [ebp-4h]
  struct BLTINFO *v23; // [esp+34h] [ebp+8h]

  v19 = *((_DWORD *)a1 + 4);
  v21 = *((_DWORD *)a1 + 5);
  v15 = *(struct _XLATEOBJ **)a1;
  v2 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v3 = *((_DWORD *)a1 + 14);
  v14 = v2;
  v4 = *(_DWORD *)(v3 + 88);
  if ( v4 || (*(_DWORD *)(v3 + 72) & 0x100) != 0 )
    v5 = **(_DWORD **)(v4 + 76) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 8);
  else
    v5 = -1;
  v6 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v7 = (struct BLTINFO *)(*((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9));
  v8 = v21;
  v18 = v7;
  v17 = v6;
  if ( v21 )
  {
    v9 = v19;
    do
    {
      v22 = --v8;
      v16 = v9;
      if ( v9 )
      {
        v10 = (_BYTE *)(v6 + 2);
        v11 = v16;
        v20 = v10;
        do
        {
          --v11;
          v12 = v5 & *(_DWORD *)v7;
          v7 = (struct BLTINFO *)((char *)v7 + 4);
          v23 = v7;
          if ( v12 != *((_DWORD *)a1 + 30) )
          {
            v13 = v14(v15, v12);
            v10 = v20;
            *((_WORD *)v20 - 1) = v13;
            v7 = v23;
            *v20 = BYTE2(v13);
          }
          v10 += 3;
          v20 = v10;
        }
        while ( v11 );
        v6 = v17;
        v8 = v22;
        v7 = v18;
        v9 = v19;
      }
      v7 = (struct BLTINFO *)((char *)v7 + *((_DWORD *)a1 + 7));
      v6 += *((_DWORD *)a1 + 8);
      v18 = v7;
      v17 = v6;
    }
    while ( v8 );
  }
}
