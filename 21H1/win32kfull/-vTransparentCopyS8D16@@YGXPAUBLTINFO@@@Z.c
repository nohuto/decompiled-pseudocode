/*
 * XREFs of ?vTransparentCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x1F2C30
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

void __stdcall vTransparentCopyS8D16(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  struct BLTINFO *v6; // eax
  _WORD *v7; // ebx
  unsigned __int8 *v8; // edi
  int v9; // esi
  int v10; // [esp+8h] [ebp-18h]
  int v11; // [esp+10h] [ebp-10h]
  int i; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]
  struct BLTINFO *v14; // [esp+28h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 11);
  v3 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 5);
  v14 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v13 = v3;
  v11 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v5 = *((_DWORD *)a1 + 2) + 2 * v2;
  for ( i = v5; v4; i = v5 )
  {
    v6 = v14;
    v10 = --v4;
    v7 = (_WORD *)v5;
    if ( v14 )
    {
      v8 = (unsigned __int8 *)v3;
      do
      {
        v9 = *v8;
        v6 = (struct BLTINFO *)((char *)v6 - 1);
        ++v8;
        if ( v9 != *((_DWORD *)a1 + 30) )
          *v7 = *(_WORD *)(v11 + 4 * v9);
        ++v7;
      }
      while ( v6 );
      v3 = v13;
      v4 = v10;
      v5 = i;
    }
    v3 += *((_DWORD *)a1 + 7);
    v5 += *((_DWORD *)a1 + 8);
    v13 = v3;
  }
}
