/*
 * XREFs of ?vTransparentCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x1F2CC0
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

void __stdcall vTransparentCopyS8D24(struct BLTINFO *a1)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  struct BLTINFO *v6; // eax
  unsigned __int8 *v7; // ecx
  _BYTE *v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // [esp+Ch] [ebp-1Ch]
  unsigned __int8 *v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+24h] [ebp-4h]
  struct BLTINFO *v15; // [esp+30h] [ebp+8h]

  v2 = 3 * *((_DWORD *)a1 + 11);
  v3 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 5);
  v15 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 2) + v2;
  v13 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  while ( 1 )
  {
    v14 = v3;
    if ( !v4 )
      break;
    v6 = v15;
    v11 = --v4;
    v7 = (unsigned __int8 *)v3;
    if ( v15 )
    {
      v8 = (_BYTE *)(v5 + 2);
      do
      {
        v9 = *v7;
        v6 = (struct BLTINFO *)((char *)v6 - 1);
        v12 = ++v7;
        if ( v9 != *((_DWORD *)a1 + 30) )
        {
          v10 = *(_DWORD *)(v13 + 4 * v9);
          *((_WORD *)v8 - 1) = v10;
          *v8 = BYTE2(v10);
          v7 = v12;
        }
        v8 += 3;
      }
      while ( v6 );
      v3 = v14;
      v4 = v11;
    }
    v3 += *((_DWORD *)a1 + 7);
    v5 += *((_DWORD *)a1 + 8);
  }
}
