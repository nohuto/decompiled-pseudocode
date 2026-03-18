/*
 * XREFs of ?HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z @ 0x1A2A4A
 * Callers:
 *     _FindNCHitEx@16 @ 0xA3C10 (_FindNCHitEx@16.c)
 * Callees:
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _GetWndSBDisableFlags@8 @ 0xC1ECC (_GetWndSBDisableFlags@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 */

int __userpurge HitTestScrollBar@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, struct tagWND *a3, int a4, struct tagPOINT a5)
{
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // esi
  struct tagWND *v9; // edi
  int v10; // eax
  int *v11; // ecx
  int *v12; // eax
  int *v17; // [esp+18h] [ebp-50h]
  int *v18; // [esp+1Ch] [ebp-4Ch]
  char v19; // [esp+44h] [ebp-24h] BYREF
  char v20; // [esp+48h] [ebp-20h] BYREF
  char v21; // [esp+50h] [ebp-18h] BYREF
  char v22; // [esp+54h] [ebp-14h] BYREF

  v5 = a1;
  v6 = safe_cast_fnid_to_PSBWND(a2);
  if ( v6 )
  {
    v5 = *(_DWORD *)(v6 + 8);
    v8 = a4;
    v9 = a3;
  }
  else
  {
    v10 = *(_DWORD *)(v7 + 20);
    if ( (*(_BYTE *)(v10 + 18) & 0x40) == 0 || v5 )
      v9 = (struct tagWND *)((char *)a3 - *(_DWORD *)(v10 + 52));
    else
      v9 = (struct tagWND *)(*(_DWORD *)(v10 + 60) - (_DWORD)a3);
    v8 = a4 - *(_DWORD *)(v10 + 56);
    LOBYTE(v5) = GetWndSBDisableFlags(v7, v5);
    v6 = 0;
  }
  if ( (v5 & 3) == 3 )
    return -2;
  if ( v6 )
  {
    v17 = (int *)(v6 + 60);
    v11 = (int *)(v6 + 64);
    v18 = (int *)(v6 + 48);
    v12 = (int *)(v6 + 52);
  }
  else
  {
    CalcSBStuff(a2, a1);
    v17 = (int *)&v21;
    v11 = (int *)&v22;
    v12 = (int *)&v20;
    v18 = (int *)&v19;
  }
  if ( !a1 )
    v8 = (int)v9;
  if ( v8 < *v18 )
  {
    if ( (v5 & 1) == 0 )
      return 60;
    return -2;
  }
  if ( v8 >= *v12 )
  {
    if ( (v5 & 2) == 0 )
      return 61;
    return -2;
  }
  if ( v8 >= *v11 )
    return (v8 < *v17) + 63;
  return 62;
}
