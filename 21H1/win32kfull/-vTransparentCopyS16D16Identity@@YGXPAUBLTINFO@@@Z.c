/*
 * XREFs of ?vTransparentCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2048
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

void __stdcall vTransparentCopyS16D16Identity(struct BLTINFO *a1)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  struct BLTINFO *v7; // ecx
  _WORD *v8; // edi
  struct BLTINFO *v9; // ebx
  _WORD *v10; // eax
  int v11; // ecx
  int v12; // [esp+Ch] [ebp-18h]
  _WORD *v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  struct BLTINFO *v16; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 5);
  v16 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v3 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 88);
  if ( v3 )
    v4 = **(_DWORD **)(v3 + 76) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 8);
  else
    LOWORD(v4) = -1;
  v5 = *((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9);
  v15 = v5;
  v6 = *((_DWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 11);
  v14 = v6;
  if ( v2 )
  {
    v7 = v16;
    do
    {
      --v2;
      v13 = (_WORD *)v5;
      v12 = v2;
      if ( v7 )
      {
        v8 = (_WORD *)v6;
        v9 = v7;
        v10 = v13;
        do
        {
          v9 = (struct BLTINFO *)((char *)v9 - 1);
          v11 = (unsigned __int16)(v4 & *v10++);
          if ( v11 != *((_DWORD *)a1 + 30) )
            *v8 = v11;
          ++v8;
        }
        while ( v9 );
        v2 = v12;
        v5 = v15;
        v6 = v14;
        v7 = v16;
      }
      v5 += *((_DWORD *)a1 + 7);
      v6 += *((_DWORD *)a1 + 8);
      v15 = v5;
      v14 = v6;
    }
    while ( v2 );
  }
}
