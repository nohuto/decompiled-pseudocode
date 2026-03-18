/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00D9D6C
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0010A10 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0010D0C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C009E080 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00DB150 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C00FB83C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0141C80 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A7EF8 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C00D9E9C (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r10
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // r11
  unsigned int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  BOOL v15; // edx
  unsigned __int16 v17; // ax
  const unsigned __int16 *v18; // rdx

  v5 = a4;
  v9 = 0LL;
  if ( a2 )
  {
    v12 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    goto LABEL_6;
  }
  if ( a4 )
  {
    v10 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v10 = *((_DWORD *)a4 + 1);
    v11 = *((_QWORD *)this + 1);
    v12 = v10 % *(_DWORD *)(v11 + 8);
LABEL_6:
    if ( a3 )
    {
      *a3 = v12;
      v11 = *((_QWORD *)this + 1);
    }
    v13 = *(__int64 **)(v11 + 8LL * v12 + 40);
    if ( !v13 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v14 = *((_DWORD *)v13 + 15);
        if ( v14 == 1 && *(_DWORD *)v5 == 1 )
        {
          v15 = *((_DWORD *)v13 + 16) == *((_DWORD *)v5 + 1);
        }
        else
        {
          if ( v14 == *(_DWORD *)v5 )
            return (struct _HASHBUCKET *)v13;
          v15 = 0;
        }
        if ( v15 )
          return (struct _HASHBUCKET *)v13;
      }
      else if ( a2 && (!a5 || (v13[4] & 2) != 0) )
      {
        v17 = *a2;
        v18 = a2;
        if ( *a2 == *((_WORD *)v13 + 30) )
        {
          while ( v17 )
          {
            v17 = *++v18;
            if ( *v18 != *(const unsigned __int16 *)((char *)v18 + (char *)v13 - (char *)a2 + 60) )
              goto LABEL_14;
          }
          if ( a5 || (v13[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v13;
          v9 = v13;
        }
      }
LABEL_14:
      v13 = (__int64 *)*v13;
      if ( !v13 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
