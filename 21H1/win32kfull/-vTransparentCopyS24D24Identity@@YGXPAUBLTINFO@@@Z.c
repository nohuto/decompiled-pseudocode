/*
 * XREFs of ?vTransparentCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0x1F24A6
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

void __stdcall vTransparentCopyS24D24Identity(struct BLTINFO *a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  int i; // edi
  _BYTE *v6; // ebx
  int v7; // edi
  unsigned __int8 *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]
  struct BLTINFO *v15; // [esp+28h] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 5);
  v12 = v2;
  v4 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  for ( i = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11); ; i += *((_DWORD *)a1 + 8) )
  {
    v14 = i;
    v15 = (struct BLTINFO *)v4;
    if ( !v3 )
      break;
    v13 = --v3;
    if ( v2 )
    {
      v6 = (_BYTE *)(i + 2);
      v7 = v2;
      v8 = (unsigned __int8 *)(v4 + 1);
      do
      {
        v9 = v8[1];
        --v7;
        v10 = *v8;
        v8 += 3;
        v11 = *(v8 - 4) | ((v10 | (v9 << 8)) << 8);
        if ( v11 != *((_DWORD *)a1 + 30) )
        {
          *((_WORD *)v6 - 1) = v11;
          *v6 = BYTE2(v11);
        }
        v6 += 3;
      }
      while ( v7 );
      v4 = (int)v15;
      i = v14;
      v3 = v13;
      v2 = v12;
    }
    v4 += *((_DWORD *)a1 + 7);
  }
}
