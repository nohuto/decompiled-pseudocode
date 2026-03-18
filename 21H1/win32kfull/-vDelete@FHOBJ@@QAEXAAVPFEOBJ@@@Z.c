/*
 * XREFs of ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?vDeletePFELink@FHOBJ@@QAEXPAU_HASHBUCKET@@IAAVPFEOBJ@@@Z @ 0xCE504 (-vDeletePFELink@FHOBJ@@QAEXPAU_HASHBUCKET@@IAAVPFEOBJ@@@Z.c)
 *     ?pwszName@FHOBJ@@QAEPAGAAVPFEOBJ@@@Z @ 0xDE982 (-pwszName@FHOBJ@@QAEPAGAAVPFEOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  int v3; // eax
  WCHAR *v4; // eax
  struct _HASHBUCKET *v5; // eax
  int v6; // ecx
  unsigned __int16 *v7; // esi
  struct _HASHBUCKET *v9; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-50h] BYREF
  unsigned int v12; // [esp+14h] [ebp-48h] BYREF
  unsigned __int16 v13[32]; // [esp+18h] [ebp-44h] BYREF

  memset(v13, 0, sizeof(v13));
  v3 = *((_DWORD *)this + 1);
  v12 = 0;
  if ( *(_DWORD *)(v3 + 4)
    || __wcsicmp(
         (const wchar_t *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 16)),
         (const wchar_t *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 8))) )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 2 )
    {
      v6 = *(_DWORD *)a2;
      v11[0] = *(_DWORD *)(*(_DWORD *)a2 + 52);
      v11[1] = *(_DWORD *)(v6 + 56);
      v5 = FHOBJ::pbktSearch(this, 0, &v12, (struct _UNIVERSAL_FONT_ID *)v11, 0);
    }
    else
    {
      v4 = FHOBJ::pwszName(this, a2);
      cCapString(v13, v4, 32);
      v5 = FHOBJ::pbktSearch(this, v13, &v12, 0, 0);
    }
    FHOBJ::vDeletePFELink(this, v5, v12, a2);
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 48) & 0x8000000) != 0
      && *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 1 )
    {
      v7 = FHOBJ::pwszName(this, a2);
      while ( *v7++ )
        ;
      while ( *v7 )
      {
        cCapString(v13, v7, 32);
        v9 = FHOBJ::pbktSearch(this, v13, &v12, 0, 1);
        FHOBJ::vDeletePFELink(this, v9, v12, a2);
        while ( *v7++ )
          ;
      }
    }
  }
}
