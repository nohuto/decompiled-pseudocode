/*
 * XREFs of ?vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x1F23E2
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

void __stdcall vTransparentCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  unsigned __int16 *v6; // ecx
  int v7; // edi
  _BYTE *v8; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int (__fastcall *v12)(struct _XLATEOBJ *, unsigned int); // [esp+Ch] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  unsigned __int16 *v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]
  struct BLTINFO *v19; // [esp+30h] [ebp+8h]
  struct BLTINFO *v20; // [esp+30h] [ebp+8h]

  v18 = *((_DWORD *)a1 + 4);
  v19 = (struct BLTINFO *)*((_DWORD *)a1 + 5);
  v13 = *(_DWORD *)a1;
  v12 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v2 = v19;
  v3 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v17 = v3;
  v16 = v4;
  if ( v19 )
  {
    v5 = v18;
    do
    {
      v2 = (struct BLTINFO *)((char *)v2 - 1);
      v14 = v5;
      v20 = v2;
      if ( v5 )
      {
        v6 = (unsigned __int16 *)(v3 + 1);
        v7 = v14;
        v8 = (_BYTE *)(v4 + 2);
        do
        {
          --v7;
          v9 = *((unsigned __int8 *)v6 - 1);
          v10 = *v6 << 8;
          v6 = (unsigned __int16 *)((char *)v6 + 3);
          v15 = v6;
          if ( (v9 | v10) != *((_DWORD *)a1 + 30) )
          {
            v11 = ((int (__thiscall *)(int))v12)(v13);
            *((_WORD *)v8 - 1) = v11;
            v6 = v15;
            *v8 = BYTE2(v11);
          }
          v8 += 3;
        }
        while ( v7 );
        v3 = v17;
        v4 = v16;
        v2 = v20;
        v5 = v18;
      }
      v3 += *((_DWORD *)a1 + 7);
      v4 += *((_DWORD *)a1 + 8);
      v17 = v3;
      v16 = v4;
    }
    while ( v2 );
  }
}
