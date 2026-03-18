/*
 * XREFs of ?vTransparentCopyS8D8Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2E6D
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

void __stdcall vTransparentCopyS8D8Identity(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // edx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  unsigned __int8 *v6; // ebx
  int v7; // edi
  int v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *i; // [esp+14h] [ebp-4h]
  unsigned __int8 v11; // [esp+23h] [ebp+Bh]

  v2 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9));
  v3 = *((_DWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v5 = *((_DWORD *)a1 + 4);
  v8 = v5;
  for ( i = v2; v3; i = v2 )
  {
    v9 = --v3;
    v6 = (unsigned __int8 *)v4;
    if ( v5 )
    {
      v7 = v5;
      do
      {
        --v7;
        v11 = *v2++;
        if ( v11 != *((_DWORD *)a1 + 30) )
          *v6 = v11;
        ++v6;
      }
      while ( v7 );
      v2 = i;
      v3 = v9;
      v5 = v8;
    }
    v2 += *((_DWORD *)a1 + 7);
    v4 += *((_DWORD *)a1 + 8);
  }
}
