/*
 * XREFs of ?bFindBitmapFont@MAPPER@@QAEHPBG@Z @ 0x8ADEA
 * Callers:
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z @ 0x886E4 (-pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z.c)
 *     ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E (-bValid@FHOBJ@@QBEHXZ.c)
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

int __thiscall MAPPER::bFindBitmapFont(MAPPER *this, unsigned __int16 *a2)
{
  int v4; // esi
  struct _HASHBUCKET *v5; // eax
  _DWORD *i; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // eax
  struct _FONTSUB *v10; // eax
  int v11; // edx
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (*((_DWORD *)this + 55) & 0x10000000) != 0 )
    return 0;
  v12[0] = gpPFTPublic;
  v12[1] = *gpPFTPublic;
  v4 = 0;
  if ( FHOBJ::bValid((FHOBJ *)v12) )
  {
    v5 = FHOBJ::pbktSearch((FHOBJ *)v12, a2, 0, 0, 0);
    if ( v5
      || (v10 = pfsubAlternateFacename()) != 0
      && (*((_BYTE *)v10 + 195) & 1) != 0
      && (v5 = FHOBJ::pbktSearch((FHOBJ *)v12, (unsigned __int16 *)v10 + 65, 0, 0, 0)) != 0 )
    {
      for ( i = (_DWORD *)*((_DWORD *)v5 + 1); i; i = (_DWORD *)*i )
      {
        v7 = *(_DWORD *)(i[1] + 20);
        if ( (*(_BYTE *)(v7 + 48) & 2) != 0 )
        {
          v8 = (*((_BYTE *)this + 220) & 2) != 0 ? *(__int16 *)(v7 + 56) : *(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62);
          v9 = *((_DWORD *)this + 38);
          if ( v9 == v8 || v9 == 2 && v8 == 3 )
          {
            v11 = *((_DWORD *)this + 39);
            if ( !v11 || v11 == *(__int16 *)(v7 + 76) )
              return 1;
          }
        }
      }
    }
  }
  return v4;
}
