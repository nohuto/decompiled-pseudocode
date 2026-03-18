/*
 * XREFs of ?vTransparentCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0x1F2AE9
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

void __stdcall vTransparentCopyS4D32(struct BLTINFO *a1)
{
  int v2; // edi
  unsigned __int8 *v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ebx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  unsigned __int8 *v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  struct BLTINFO *v16; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 5);
  v15 = *((_DWORD *)a1 + 4);
  v3 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1));
  v14 = v3;
  v11 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v4 = *((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11);
  v13 = v4;
  if ( v2 )
  {
    v5 = *((_DWORD *)a1 + 4);
    do
    {
      v12 = v5;
      --v2;
      v6 = (_DWORD *)v4;
      v16 = (struct BLTINFO *)*((_DWORD *)a1 + 9);
      v5 = v15;
      v10 = v2;
      if ( v15 )
      {
        v7 = v12;
        do
        {
          v8 = *v3;
          --v7;
          if ( ((unsigned __int8)v16 & 1) != 0 )
          {
            v9 = v8 & 0xF;
            ++v3;
          }
          else
          {
            v9 = v8 >> 4;
          }
          LOBYTE(v16) = (_BYTE)v16 + 1;
          if ( v9 != *((_DWORD *)a1 + 30) )
            *v6 = *(_DWORD *)(v11 + 4 * v9);
          ++v6;
        }
        while ( v7 );
        v3 = v14;
        v2 = v10;
        v4 = v13;
        v5 = v15;
      }
      v3 += *((_DWORD *)a1 + 7);
      v4 += *((_DWORD *)a1 + 8);
      v14 = v3;
      v13 = v4;
    }
    while ( v2 );
  }
}
