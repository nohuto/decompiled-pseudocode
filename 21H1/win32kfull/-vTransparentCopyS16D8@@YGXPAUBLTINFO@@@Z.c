/*
 * XREFs of ?vTransparentCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x1F2282
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

void __stdcall vTransparentCopyS16D8(struct BLTINFO *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebx
  _WORD *v8; // edx
  ULONG v9; // eax
  char v10; // al
  int v11; // [esp+Ch] [ebp-20h]
  XLATEOBJ *pxlo; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  int v15; // [esp+20h] [ebp-Ch]
  _BYTE *v16; // [esp+24h] [ebp-8h]
  _WORD *v17; // [esp+28h] [ebp-4h]

  v1 = *((_DWORD *)a1 + 5);
  v13 = *((_DWORD *)a1 + 4);
  pxlo = *(XLATEOBJ **)a1;
  v2 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 88);
  if ( v2 )
    v3 = **(_DWORD **)(v2 + 76) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v2 + 76) + 8);
  else
    LOWORD(v3) = -1;
  v4 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v5 = *((_DWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 9);
  while ( 1 )
  {
    v14 = v4;
    v15 = v5;
    if ( !v1 )
      break;
    --v1;
    v6 = (_BYTE *)v4;
    v11 = v1;
    v16 = (_BYTE *)v4;
    if ( v13 )
    {
      v7 = v13;
      v8 = (_WORD *)v5;
      do
      {
        --v7;
        v9 = (unsigned __int16)(v3 & *v8++);
        v17 = v8;
        if ( v9 != *((_DWORD *)a1 + 30) )
        {
          v10 = XLATEOBJ_iXlate(pxlo, v9);
          v6 = v16;
          v8 = v17;
          *v16 = v10;
        }
        v16 = ++v6;
      }
      while ( v7 );
      v4 = v14;
      v1 = v11;
      v5 = v15;
    }
    v5 += *((_DWORD *)a1 + 7);
    v4 += *((_DWORD *)a1 + 8);
  }
}
