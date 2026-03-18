/*
 * XREFs of ?vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x1F20ED
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

void __stdcall vTransparentCopyS16D24(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  struct BLTINFO *v5; // ecx
  int v6; // eax
  int v7; // edx
  _BYTE *v8; // edx
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  int (__fastcall *v12)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-20h]
  struct _XLATEOBJ *v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  struct BLTINFO *v16; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+20h] [ebp-Ch]
  _BYTE *v18; // [esp+24h] [ebp-8h]
  int v19; // [esp+28h] [ebp-4h]
  int v20; // [esp+28h] [ebp-4h]
  struct BLTINFO *v21; // [esp+34h] [ebp+8h]

  v17 = *((_DWORD *)a1 + 4);
  v19 = *((_DWORD *)a1 + 5);
  v13 = *(struct _XLATEOBJ **)a1;
  v12 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v2 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 88);
  if ( v2 )
    v3 = **(_DWORD **)(v2 + 76) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 8);
  else
    LOWORD(v3) = -1;
  v4 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v5 = (struct BLTINFO *)(*((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9));
  v6 = v19;
  v16 = v5;
  v15 = v4;
  if ( v19 )
  {
    v7 = v17;
    do
    {
      v20 = --v6;
      v14 = v7;
      if ( v7 )
      {
        v8 = (_BYTE *)(v4 + 2);
        v9 = v14;
        v18 = v8;
        do
        {
          --v9;
          v10 = (unsigned __int16)(v3 & *(_WORD *)v5);
          v5 = (struct BLTINFO *)((char *)v5 + 2);
          v21 = v5;
          if ( v10 != *((_DWORD *)a1 + 30) )
          {
            v11 = v12(v13, v10);
            v8 = v18;
            *((_WORD *)v18 - 1) = v11;
            v5 = v21;
            *v18 = BYTE2(v11);
          }
          v8 += 3;
          v18 = v8;
        }
        while ( v9 );
        v4 = v15;
        v6 = v20;
        v5 = v16;
        v7 = v17;
      }
      v5 = (struct BLTINFO *)((char *)v5 + *((_DWORD *)a1 + 7));
      v4 += *((_DWORD *)a1 + 8);
      v16 = v5;
      v15 = v4;
    }
    while ( v6 );
  }
}
