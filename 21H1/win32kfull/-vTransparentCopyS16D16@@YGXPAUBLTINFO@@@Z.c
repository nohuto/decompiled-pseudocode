/*
 * XREFs of ?vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x1F1F8A
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

void __stdcall vTransparentCopyS16D16(struct BLTINFO *a1)
{
  int v1; // ebx
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int i; // eax
  _WORD *v6; // ecx
  int v7; // eax
  _WORD *v8; // ebx
  int v9; // edx
  __int16 v10; // ax
  int v11; // [esp+Ch] [ebp-24h]
  int (__fastcall *v12)(struct _XLATEOBJ *, unsigned int); // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch]
  _WORD *v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  v1 = *((_DWORD *)a1 + 5);
  v14 = *((_DWORD *)a1 + 4);
  v13 = *(_DWORD *)a1;
  v12 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v2 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 88);
  if ( v2 )
    v3 = **(_DWORD **)(v2 + 76) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 8);
  else
    LOWORD(v3) = -1;
  v4 = *((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9);
  for ( i = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11); ; i += *((_DWORD *)a1 + 8) )
  {
    v15 = i;
    v16 = v4;
    if ( !v1 )
      break;
    --v1;
    v6 = (_WORD *)i;
    v11 = v1;
    v17 = (_WORD *)i;
    if ( v14 )
    {
      v7 = v14;
      v8 = (_WORD *)v4;
      do
      {
        --v7;
        v9 = (unsigned __int16)(v3 & *v8);
        v18 = v7;
        ++v8;
        if ( v9 != *((_DWORD *)a1 + 30) )
        {
          v10 = ((int (__thiscall *)(int))v12)(v13);
          v6 = v17;
          *v17 = v10;
          v7 = v18;
        }
        v17 = ++v6;
      }
      while ( v7 );
      v1 = v11;
      v4 = v16;
      i = v15;
    }
    v4 += *((_DWORD *)a1 + 7);
  }
}
