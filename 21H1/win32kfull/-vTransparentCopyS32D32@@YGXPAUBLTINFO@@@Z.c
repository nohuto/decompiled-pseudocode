/*
 * XREFs of ?vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x1F2777
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

void __stdcall vTransparentCopyS32D32(struct BLTINFO *a1)
{
  int v1; // ebx
  int (__fastcall *v2)(struct _XLATEOBJ *, unsigned int); // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v6; // edx
  int i; // eax
  int *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // [esp+Ch] [ebp-24h]
  int (__fastcall *v14)(struct _XLATEOBJ *, unsigned int); // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  int *v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  v1 = *((_DWORD *)a1 + 5);
  v16 = *((_DWORD *)a1 + 4);
  v15 = *(_DWORD *)a1;
  v2 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v3 = *((_DWORD *)a1 + 14);
  v14 = v2;
  v4 = *(_DWORD *)(v3 + 88);
  if ( v4 || (*(_DWORD *)(v3 + 72) & 0x100) != 0 )
    v5 = **(_DWORD **)(v4 + 76) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 8);
  else
    v5 = -1;
  v6 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  for ( i = *((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11); ; i += *((_DWORD *)a1 + 8) )
  {
    v17 = i;
    v18 = v6;
    if ( !v1 )
      break;
    --v1;
    v8 = (int *)i;
    v13 = v1;
    v19 = (int *)i;
    if ( v16 )
    {
      v9 = v16;
      v10 = (_DWORD *)v6;
      do
      {
        --v9;
        v11 = v5 & *v10;
        v20 = v9;
        ++v10;
        if ( v11 != *((_DWORD *)a1 + 30) )
        {
          v12 = ((int (__thiscall *)(int))v14)(v15);
          v8 = v19;
          *v19 = v12;
          v9 = v20;
        }
        v19 = ++v8;
      }
      while ( v9 );
      v1 = v13;
      v6 = v18;
      i = v17;
    }
    v6 += *((_DWORD *)a1 + 7);
  }
}
