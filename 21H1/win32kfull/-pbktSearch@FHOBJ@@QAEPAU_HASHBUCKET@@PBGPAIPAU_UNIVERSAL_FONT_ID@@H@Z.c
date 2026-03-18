/*
 * XREFs of ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170 (-bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QAEHPBG@Z @ 0x8ADEA (-bFindBitmapFont@MAPPER@@QAEHPBG@Z.c)
 *     ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA (-vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E (-bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628 (-ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z @ 0x207C74 (-ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YGIPBGI@Z @ 0x89CAC (-iHash@@YGIPBGI@Z.c)
 */

struct _HASHBUCKET *__thiscall FHOBJ::pbktSearch(
        FHOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  int v6; // edi
  int v7; // eax
  int *i; // ecx
  unsigned __int16 v9; // bx
  const unsigned __int16 *v10; // edx
  int v12; // eax
  BOOL v13; // eax
  unsigned int v14; // eax
  const unsigned __int16 *v15; // [esp+0h] [ebp-10h]
  unsigned int v16; // [esp+4h] [ebp-Ch]
  int *v17; // [esp+Ch] [ebp-4h]

  v17 = 0;
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 1);
    v7 = iHash(v15, v16);
LABEL_3:
    if ( a3 )
    {
      *a3 = v7;
      v6 = *((_DWORD *)this + 1);
    }
    for ( i = *(int **)(v6 + 4 * v7 + 28); ; i = (int *)*i )
    {
      if ( !i )
        return (struct _HASHBUCKET *)v17;
      if ( a4 )
      {
        v12 = i[9];
        if ( v12 == 1 && *(_DWORD *)a4 == 1 )
        {
          v13 = *((_DWORD *)a4 + 1) == i[10];
        }
        else
        {
          if ( v12 == *(_DWORD *)a4 )
            return (struct _HASHBUCKET *)i;
          v13 = 0;
        }
        if ( v13 )
          return (struct _HASHBUCKET *)i;
      }
      else if ( a2 && (!a5 || (i[5] & 2) != 0) )
      {
        v9 = *a2;
        v10 = a2;
        if ( *a2 == *((_WORD *)i + 18) )
        {
          while ( v9 )
          {
            v9 = *++v10;
            if ( *v10 != *(const unsigned __int16 *)((char *)v10 + (char *)(i + 9) - (char *)a2) )
              goto LABEL_11;
          }
          if ( a5 || (i[5] & 2) == 0 )
            return (struct _HASHBUCKET *)i;
          v17 = i;
        }
      }
LABEL_11:
      ;
    }
  }
  if ( a4 )
  {
    v14 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v14 = *((_DWORD *)a4 + 1);
    v6 = *((_DWORD *)this + 1);
    v7 = v14 % *(_DWORD *)(v6 + 8);
    goto LABEL_3;
  }
  return 0;
}
