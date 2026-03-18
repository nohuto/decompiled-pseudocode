/*
 * XREFs of ?vTransparentCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x1F2A43
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

void __stdcall vTransparentCopyS4D24(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // ebx
  int v8; // esi
  unsigned __int8 *v9; // edi
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  unsigned __int8 *v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+20h] [ebp-4h]
  struct BLTINFO *v18; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 1);
  v5 = *((_DWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 11);
  v13 = v2;
  v15 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  while ( 1 )
  {
    v17 = v5;
    v18 = (struct BLTINFO *)v4;
    if ( !v3 )
      break;
    v6 = *((_DWORD *)a1 + 9);
    v14 = --v3;
    v16 = (unsigned __int8 *)v4;
    if ( v2 )
    {
      v7 = (_BYTE *)(v5 + 2);
      v8 = v2;
      v9 = v16;
      do
      {
        v10 = *v9;
        --v8;
        if ( (v6 & 1) != 0 )
        {
          v11 = v10 & 0xF;
          ++v9;
        }
        else
        {
          v11 = v10 >> 4;
        }
        LOBYTE(v6) = v6 + 1;
        if ( v11 != *((_DWORD *)a1 + 30) )
        {
          v12 = *(_DWORD *)(v15 + 4 * v11);
          *((_WORD *)v7 - 1) = v12;
          *v7 = BYTE2(v12);
        }
        v7 += 3;
      }
      while ( v8 );
      v4 = (int)v18;
      v5 = v17;
      v3 = v14;
      v2 = v13;
    }
    v4 += *((_DWORD *)a1 + 7);
    v5 += *((_DWORD *)a1 + 8);
  }
}
