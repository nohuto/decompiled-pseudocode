/*
 * XREFs of ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E
 * Callers:
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z @ 0xDE7EC (-bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z.c)
 *     ?pwszName@FHOBJ@@QAEPAGAAVPFEOBJ@@@Z @ 0xDE982 (-pwszName@FHOBJ@@QAEPAGAAVPFEOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  int v3; // eax
  WCHAR *v4; // eax
  struct _HASHBUCKET *v5; // eax
  int v7; // ecx
  unsigned __int16 *v8; // esi
  struct _HASHBUCKET *v10; // eax
  _DWORD v12[2]; // [esp+Ch] [ebp-50h] BYREF
  unsigned int v13; // [esp+14h] [ebp-48h] BYREF
  unsigned __int16 v14[32]; // [esp+18h] [ebp-44h] BYREF

  memset(v14, 0, sizeof(v14));
  v3 = *((_DWORD *)this + 1);
  v13 = 0;
  if ( !*(_DWORD *)(v3 + 4)
    && !__wcsicmp(
          (const wchar_t *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 16)),
          (const wchar_t *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 8))) )
  {
    return 1;
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 2 )
  {
    v7 = *(_DWORD *)a2;
    v12[0] = *(_DWORD *)(*(_DWORD *)a2 + 52);
    v12[1] = *(_DWORD *)(v7 + 56);
    v5 = FHOBJ::pbktSearch(this, 0, &v13, (struct _UNIVERSAL_FONT_ID *)v12, 0);
  }
  else
  {
    v4 = FHOBJ::pwszName(this, a2);
    cCapString(v14, v4, 32);
    v5 = FHOBJ::pbktSearch(this, v14, &v13, 0, 0);
  }
  if ( FHOBJ::bAddPFELink(this, v5, v13, v14, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 20) + 48) & 0x8000000) != 0
      && *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 1 )
    {
      v8 = FHOBJ::pwszName(this, a2);
      while ( *v8++ )
        ;
      while ( *v8 )
      {
        cCapString(v14, v8, 32);
        v10 = FHOBJ::pbktSearch(this, v14, &v13, 0, 1);
        if ( !FHOBJ::bAddPFELink(this, v10, v13, v14, a2, 1) )
          return 0;
        while ( *v8++ )
          ;
      }
    }
    return 1;
  }
  return 0;
}
