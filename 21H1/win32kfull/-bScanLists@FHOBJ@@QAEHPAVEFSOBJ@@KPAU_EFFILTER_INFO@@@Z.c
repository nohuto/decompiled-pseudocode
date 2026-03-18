/*
 * XREFs of ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z @ 0x88C9C
 * Callers:
 *     ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A9E (-bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 * Callees:
 *     ?bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z @ 0x88D68 (-bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x88E5A (-bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?efstyCompute@@YG?AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z @ 0x8AC5C (-efstyCompute@@YG-AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, unsigned int a3, struct _EFFILTER_INFO *a4)
{
  BOOL v4; // eax
  int i; // ebx
  int v6; // esi
  _DWORD *v7; // edx
  int v9; // eax
  int v10; // [esp+14h] [ebp-30h]
  _DWORD *v11; // [esp+18h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-28h]
  int v13; // [esp+20h] [ebp-24h] BYREF
  _BYTE v14[24]; // [esp+24h] [ebp-20h] BYREF

  v4 = a3 == 2;
  v10 = v4;
  if ( a3 == 3 )
    v10 = v4 | 2;
  for ( i = *(_DWORD *)(*((_DWORD *)this + 1) + 20); ; i = *(_DWORD *)(i + 28) )
  {
    if ( !i )
      return 1;
    v7 = *(_DWORD **)(i + 4);
    v11 = v7;
    if ( v7 )
    {
      if ( (*(_BYTE *)(i + 20) & 2) == 0 )
        break;
    }
LABEL_6:
    ;
  }
  v12 = 0;
  memset(v14, 0, sizeof(v14));
  *((_DWORD *)a4 + 7) = 1;
  *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 12);
  while ( 1 )
  {
    v6 = v7[1];
    v13 = v6;
    if ( PFEOBJ::bFilteredOut((PFEOBJ *)&v13, a4) )
      goto LABEL_5;
    if ( a3 != 1 )
      break;
    v9 = efstyCompute(v14, &v13);
    if ( !v12 || v9 == 5 )
    {
      if ( !EFSOBJ::bAdd(a2, v6, v9, 0, 1) )
        return 0;
      v12 = 1;
    }
LABEL_5:
    v7 = (_DWORD *)*v11;
    v11 = v7;
    if ( !v7 )
      goto LABEL_6;
  }
  if ( EFSOBJ::bAdd(a2, v6, 0, v10, *((_DWORD *)a4 + 9)) )
    goto LABEL_6;
  return 0;
}
