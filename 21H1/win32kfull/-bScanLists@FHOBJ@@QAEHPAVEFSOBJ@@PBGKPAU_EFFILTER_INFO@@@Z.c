/*
 * XREFs of ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06
 * Callers:
 *     ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A9E (-bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 * Callees:
 *     ?bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z @ 0x88D68 (-bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x88E5A (-bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?efstyCompute@@YG?AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z @ 0x8AC5C (-efstyCompute@@YG-AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall FHOBJ::bScanLists(
        FHOBJ *this,
        struct EFSOBJ *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        struct _EFFILTER_INFO *a5)
{
  int v5; // ebx
  struct _HASHBUCKET *v7; // eax
  _DWORD *v9; // edx
  int v10; // esi
  _DWORD *v11; // [esp+14h] [ebp-6Ch]
  int v12; // [esp+18h] [ebp-68h]
  struct _HASHBUCKET *v13; // [esp+1Ch] [ebp-64h] BYREF
  _BYTE v14[24]; // [esp+20h] [ebp-60h] BYREF
  unsigned __int16 v15[34]; // [esp+38h] [ebp-48h] BYREF

  v5 = 0;
  v12 = 0;
  if ( a4 == 3 )
    v12 = 2;
  cCapString(32);
  v7 = FHOBJ::pbktSearch(this, v15, 0, 0, 0);
  v13 = v7;
  if ( !v7 )
    return 1;
  v9 = (_DWORD *)*((_DWORD *)v7 + 1);
  v11 = v9;
  memset(v14, 0, sizeof(v14));
  *((_DWORD *)a5 + 8) = *((_DWORD *)v13 + 3);
  while ( 1 )
  {
    v10 = v9[1];
    v13 = (struct _HASHBUCKET *)v10;
    if ( !PFEOBJ::bFilteredOut((PFEOBJ *)&v13, a5) )
    {
      if ( a4 != 1 || (v5 = efstyCompute(v14, &v13), v5 != 5) )
      {
        if ( !EFSOBJ::bAdd(a2, v10, v5, v12, *((_DWORD *)a5 + 9)) )
          break;
      }
    }
    v9 = (_DWORD *)*v11;
    v11 = v9;
    if ( !v9 )
      return 1;
  }
  return 0;
}
