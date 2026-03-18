/*
 * XREFs of vLinkEudcPFEsWorker @ 0xDC252
 * Callers:
 *     vLinkEudcPFEs @ 0xDC1CC (vLinkEudcPFEs.c)
 * Callees:
 *     ?pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z @ 0x4BF60 (-pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z.c)
 *     ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294 (-FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z @ 0xDDD0C (-bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z.c)
 */

void __usercall vLinkEudcPFEsWorker(int a1@<edx>, int a2@<ecx>, const unsigned __int16 *a3@<esi>)
{
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // esi
  int v6; // esi
  struct _FLENTRY *BaseFontEntry; // ebx
  struct _FLENTRY *v8; // eax
  const unsigned __int16 *v9; // [esp-8h] [ebp-24h]
  int v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch] BYREF
  const unsigned __int16 *v13; // [esp+14h] [ebp-8h] BYREF
  unsigned int v14; // [esp+18h] [ebp-4h]

  v3 = a1;
  v11 = a2;
  if ( a1 )
  {
    v9 = a3;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v3 + 32) & 8) == 0 )
      {
        v4 = 0;
        v14 = 0;
        if ( *(_DWORD *)(v3 + 124) )
          break;
      }
LABEL_13:
      v3 = *(_DWORD *)(v3 + 4);
      if ( !v3 )
        return;
    }
    v5 = (int *)(v3 + 132);
    v10 = v3 + 132;
    while ( 1 )
    {
      v6 = *v5;
      v13 = (const unsigned __int16 *)v6;
      if ( v6 )
        break;
LABEL_12:
      ++v4;
      v5 = (int *)(v10 + 4);
      v14 = v4;
      v10 += 4;
      if ( v4 >= *(_DWORD *)(v3 + 124) )
        goto LABEL_13;
    }
    BaseFontEntry = (struct _FLENTRY *)a2;
    if ( a2 )
    {
      v8 = (struct _FLENTRY *)PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, (wchar_t *)(a2 + 16), 0, 0);
    }
    else
    {
      v12 = 0;
      v13 = PFEOBJ::pwszFamilyNameAlias((PFEOBJ *)&v13, &v12);
      BaseFontEntry = FindBaseFontEntry(v9);
      if ( BaseFontEntry )
        goto LABEL_15;
      if ( !v12 )
      {
LABEL_10:
        *(_DWORD *)(v6 + 76) = 0;
LABEL_11:
        a2 = v11;
        v4 = v14;
        goto LABEL_12;
      }
      wcslen(v13);
      v8 = FindBaseFontEntry(v9);
      BaseFontEntry = v8;
      if ( v8 )
      {
LABEL_15:
        *(_DWORD *)(v6 + 76) = BaseFontEntry;
        goto LABEL_11;
      }
    }
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_15;
  }
}
