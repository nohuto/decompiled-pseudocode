/*
 * XREFs of ?vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0x1F2333
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

void __stdcall vTransparentCopyS24D16(struct BLTINFO *a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // edx
  struct BLTINFO *v6; // ecx
  unsigned __int8 *v7; // ebx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  __int16 v11; // ax
  int v12; // [esp+Ch] [ebp-1Ch]
  int (__fastcall *v13)(struct _XLATEOBJ *, unsigned int); // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-Ch]
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]
  struct BLTINFO *v18; // [esp+30h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 5);
  v17 = *((_DWORD *)a1 + 4);
  v14 = *(_DWORD *)a1;
  v13 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v3 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  v16 = v3;
  v4 = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11);
  v15 = v4;
  if ( v2 )
  {
    v5 = v17;
    do
    {
      v12 = --v2;
      v6 = (struct BLTINFO *)v4;
      v18 = (struct BLTINFO *)v4;
      if ( v5 )
      {
        v7 = (unsigned __int8 *)(v3 + 1);
        v8 = v5;
        do
        {
          v9 = v7[1];
          --v8;
          v10 = *v7;
          v7 += 3;
          if ( (*(v7 - 4) | ((v10 | (v9 << 8)) << 8)) != *((_DWORD *)a1 + 30) )
          {
            v11 = ((int (__thiscall *)(int))v13)(v14);
            v6 = v18;
            *(_WORD *)v18 = v11;
          }
          v6 = (struct BLTINFO *)((char *)v6 + 2);
          v18 = v6;
        }
        while ( v8 );
        v3 = v16;
        v2 = v12;
        v4 = v15;
        v5 = v17;
      }
      v3 += *((_DWORD *)a1 + 7);
      v4 += *((_DWORD *)a1 + 8);
      v16 = v3;
      v15 = v4;
    }
    while ( v2 );
  }
}
