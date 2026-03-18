/*
 * XREFs of ?vTransparentCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x1F253E
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
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

void __stdcall vTransparentCopyS24D8(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  struct BLTINFO *v6; // edx
  unsigned __int8 *v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  ULONG v11; // ecx
  char v12; // al
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  XLATEOBJ *pxlo; // [esp+14h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]
  struct BLTINFO *v18; // [esp+2Ch] [ebp+8h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  v5 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v13 = v2;
  pxlo = *(XLATEOBJ **)a1;
  while ( 1 )
  {
    v16 = v5;
    v17 = v4;
    if ( !v3 )
      break;
    v14 = --v3;
    v6 = (struct BLTINFO *)v5;
    v18 = (struct BLTINFO *)v5;
    if ( v2 )
    {
      v7 = (unsigned __int8 *)(v4 + 1);
      v8 = v2;
      do
      {
        v9 = v7[1];
        --v8;
        v10 = *v7;
        v7 += 3;
        v11 = *(v7 - 4) | ((v10 | (v9 << 8)) << 8);
        if ( v11 != *((_DWORD *)a1 + 30) )
        {
          v12 = XLATEOBJ_iXlate(pxlo, v11);
          v6 = v18;
          *(_BYTE *)v18 = v12;
        }
        v6 = (struct BLTINFO *)((char *)v6 + 1);
        v18 = v6;
      }
      while ( v8 );
      v5 = v16;
      v4 = v17;
      v3 = v14;
      v2 = v13;
    }
    v4 += *((_DWORD *)a1 + 7);
    v5 += *((_DWORD *)a1 + 8);
  }
}
