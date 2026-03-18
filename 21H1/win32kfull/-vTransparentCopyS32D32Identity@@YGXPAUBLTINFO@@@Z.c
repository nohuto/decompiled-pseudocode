/*
 * XREFs of ?vTransparentCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x1F283A
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
 *     <none>
 */

void __stdcall vTransparentCopyS32D32Identity(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  struct BLTINFO *v8; // ecx
  int *v9; // edi
  struct BLTINFO *v10; // ebx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // [esp+Ch] [ebp-18h]
  _DWORD *v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-8h]
  int v16; // [esp+20h] [ebp-4h]
  struct BLTINFO *v17; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 14);
  v3 = *((_DWORD *)a1 + 5);
  v17 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v4 = *(_DWORD *)(v2 + 88);
  if ( v4 || (*(_DWORD *)(v2 + 72) & 0x100) != 0 )
    v5 = **(_DWORD **)(v4 + 76) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v4 + 76) + 8);
  else
    v5 = -1;
  v6 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  v16 = v6;
  v7 = *((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11);
  v15 = v7;
  if ( v3 )
  {
    v8 = v17;
    do
    {
      --v3;
      v14 = (_DWORD *)v6;
      v13 = v3;
      if ( v8 )
      {
        v9 = (int *)v7;
        v10 = v8;
        v11 = v14;
        do
        {
          v10 = (struct BLTINFO *)((char *)v10 - 1);
          v12 = v5 & *v11++;
          if ( v12 != *((_DWORD *)a1 + 30) )
            *v9 = v12;
          ++v9;
        }
        while ( v10 );
        v3 = v13;
        v6 = v16;
        v7 = v15;
        v8 = v17;
      }
      v6 += *((_DWORD *)a1 + 7);
      v7 += *((_DWORD *)a1 + 8);
      v16 = v6;
      v15 = v7;
    }
    while ( v3 );
  }
}
