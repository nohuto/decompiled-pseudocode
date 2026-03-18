/*
 * XREFs of ?vLine1Octant07@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2404D9
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
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine1Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *v7; // ecx
  int v8; // edi
  unsigned __int8 v9; // ah
  int v10; // edx
  struct _DDALINE *v11; // [esp+14h] [ebp+8h]

  v5 = *((_DWORD *)a1 + 6);
  v11 = (struct _DDALINE *)*((_DWORD *)a1 + 5);
  v6 = 128 >> (*((_DWORD *)a1 + 1) & 7);
  v7 = &a2[*((_DWORD *)a1 + 1) >> 3];
  v8 = *((_DWORD *)a1 + 4);
  v9 = *v7;
  v10 = *((_DWORD *)a1 + 3) - 1;
  if ( a4 )
  {
    for ( *v7 = v6 | v9; v10; --v10 )
    {
      LOBYTE(v6) = (unsigned __int8)v6 >> 1;
      if ( !(_BYTE)v6 )
      {
        LOBYTE(v6) = 0x80;
        ++v7;
      }
      v5 += (int)v11;
      if ( v5 >= 0 )
      {
        v5 -= v8;
        v7 += a3;
      }
      *v7 |= v6;
    }
  }
  else
  {
    for ( *v7 = v9 & ~(_BYTE)v6; v10; --v10 )
    {
      LOBYTE(v6) = (unsigned __int8)v6 >> 1;
      if ( !(_BYTE)v6 )
      {
        LOBYTE(v6) = 0x80;
        ++v7;
      }
      v5 += (int)v11;
      if ( v5 >= 0 )
      {
        v5 -= v8;
        v7 += a3;
      }
      *v7 &= ~(_BYTE)v6;
    }
  }
}
