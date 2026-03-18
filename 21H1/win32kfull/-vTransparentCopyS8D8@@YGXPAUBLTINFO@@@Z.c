/*
 * XREFs of ?vTransparentCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0x1F2DE4
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

void __stdcall vTransparentCopyS8D8(struct BLTINFO *a1)
{
  int v2; // edx
  int v3; // esi
  int v4; // edi
  struct BLTINFO *v5; // eax
  _BYTE *v6; // ebx
  unsigned __int8 *v7; // edi
  int v8; // edx
  int v9; // [esp+8h] [ebp-18h]
  int i; // [esp+10h] [ebp-10h]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]
  struct BLTINFO *v13; // [esp+28h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 5);
  v13 = (struct BLTINFO *)*((_DWORD *)a1 + 4);
  v12 = v2;
  v11 = v3;
  for ( i = *(_DWORD *)(*(_DWORD *)a1 + 16); v4; v11 = v3 )
  {
    v5 = v13;
    v9 = --v4;
    v6 = (_BYTE *)v3;
    if ( v13 )
    {
      v7 = (unsigned __int8 *)v2;
      do
      {
        v8 = *v7;
        v5 = (struct BLTINFO *)((char *)v5 - 1);
        ++v7;
        if ( v8 != *((_DWORD *)a1 + 30) )
          *v6 = *(_BYTE *)(i + 4 * v8);
        ++v6;
      }
      while ( v5 );
      v2 = v12;
      v3 = v11;
      v4 = v9;
    }
    v2 += *((_DWORD *)a1 + 7);
    v3 += *((_DWORD *)a1 + 8);
    v12 = v2;
  }
}
