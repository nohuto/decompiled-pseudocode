/*
 * XREFs of ?vTransparentCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x1F28E4
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

void __stdcall vTransparentCopyS32D8(struct BLTINFO *a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // ebx
  _DWORD *v9; // edx
  ULONG v10; // eax
  char v11; // al
  int v12; // [esp+Ch] [ebp-20h]
  XLATEOBJ *pxlo; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+20h] [ebp-Ch]
  _BYTE *v17; // [esp+24h] [ebp-8h]
  _DWORD *v18; // [esp+28h] [ebp-4h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = *((_DWORD *)a1 + 5);
  v14 = *((_DWORD *)a1 + 4);
  pxlo = *(XLATEOBJ **)a1;
  v3 = *(_DWORD *)(v1 + 88);
  if ( v3 || (*(_DWORD *)(v1 + 72) & 0x100) != 0 )
    v4 = **(_DWORD **)(v3 + 76) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 8);
  else
    v4 = -1;
  v5 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v6 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  while ( 1 )
  {
    v15 = v5;
    v16 = v6;
    if ( !v2 )
      break;
    --v2;
    v7 = (_BYTE *)v5;
    v12 = v2;
    v17 = (_BYTE *)v5;
    if ( v14 )
    {
      v8 = v14;
      v9 = (_DWORD *)v6;
      do
      {
        --v8;
        v10 = v4 & *v9++;
        v18 = v9;
        if ( v10 != *((_DWORD *)a1 + 30) )
        {
          v11 = XLATEOBJ_iXlate(pxlo, v10);
          v7 = v17;
          v9 = v18;
          *v17 = v11;
        }
        v17 = ++v7;
      }
      while ( v8 );
      v5 = v15;
      v2 = v12;
      v6 = v16;
    }
    v6 += *((_DWORD *)a1 + 7);
    v5 += *((_DWORD *)a1 + 8);
  }
}
