/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z @ 0x22419E
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bAdjusBaseLine@@YGHAAVRFONTOBJ@@0PAU_POINTL@@@Z @ 0x1F8207 (-bAdjusBaseLine@@YGHAAVRFONTOBJ@@0PAU_POINTL@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z @ 0x207CEA (-ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F (-bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 */

int __thiscall ESTROBJ::bLinkedTextToPath(STROBJ *this, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  LONG v3; // ebx
  STROBJ *v4; // esi
  ULONG cGlyphs; // ecx
  ULONG ulCharInc; // edi
  LPWSTR pwszOrg; // edx
  ULONG v8; // eax
  ULONG v9; // eax
  int v10; // eax
  int v11; // eax
  ULONG v12; // edx
  _DWORD *v13; // eax
  LPWSTR v14; // edi
  unsigned int v15; // esi
  LPWSTR v16; // ecx
  int *v17; // ecx
  struct RFONTOBJ *v19; // [esp+0h] [ebp-48h]
  struct _POINTL *v20; // [esp+4h] [ebp-44h]
  struct _POINTL v21; // [esp+10h] [ebp-38h] BYREF
  int v22; // [esp+18h] [ebp-30h]
  STROBJ *pstro; // [esp+1Ch] [ebp-2Ch]
  unsigned int v24; // [esp+20h] [ebp-28h]
  LPWSTR v25; // [esp+24h] [ebp-24h]
  unsigned int v26; // [esp+28h] [ebp-20h]
  LPWSTR v27; // [esp+2Ch] [ebp-1Ch]
  ULONG v28; // [esp+30h] [ebp-18h]
  int *v29; // [esp+34h] [ebp-14h]
  ULONG v30; // [esp+38h] [ebp-10h]
  WCHAR *v31; // [esp+3Ch] [ebp-Ch]
  _DWORD *v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h] BYREF

  v3 = 0;
  v4 = this;
  pstro = this;
  cGlyphs = this->cGlyphs;
  ulCharInc = pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  pstro->pgp = 0;
  v4->flAccel = 0;
  v4->ulCharInc = 0;
  v8 = v4[5].cGlyphs;
  v30 = ulCharInc;
  v31 = pwszOrg;
  v28 = v8 + 4 * cGlyphs;
  v22 = *(_DWORD *)(*(_DWORD *)ulCharInc + 780) + 4;
  if ( v22 <= 0 )
  {
LABEL_32:
    v4->pwszOrg = pwszOrg;
    v4[1].ulCharInc = ulCharInc;
    return 1;
  }
  while ( 1 )
  {
    v33 = 0;
    v4[1].ulCharInc = ulCharInc;
    if ( !v3 )
    {
      v29 = (int *)ulCharInc;
      goto LABEL_20;
    }
    if ( v3 != 1 )
      break;
    if ( v4[5].pgp )
    {
      v11 = *(_DWORD *)(*(_DWORD *)ulCharInc + 716);
      goto LABEL_18;
    }
LABEL_31:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
    pwszOrg = v31;
    if ( ++v3 >= v22 )
      goto LABEL_32;
  }
  if ( v3 == 2 )
  {
    if ( v4[5].pwszOrg )
    {
      v11 = *(_DWORD *)(*(_DWORD *)ulCharInc + 720);
      goto LABEL_18;
    }
    goto LABEL_31;
  }
  if ( v3 == 3 )
  {
    if ( v4[6].cGlyphs )
    {
      v11 = *(_DWORD *)(*(_DWORD *)ulCharInc + 724);
      goto LABEL_18;
    }
    goto LABEL_31;
  }
  v9 = v4[6].ulCharInc;
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 4 * v3 - 16);
  else
    v10 = 0;
  if ( !v10 )
    goto LABEL_31;
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)ulCharInc + 728) + 4 * v3 - 16);
LABEL_18:
  if ( !v11 )
    goto LABEL_34;
  v33 = v11;
  v29 = &v33;
LABEL_20:
  v32 = (_DWORD *)v4[5].cGlyphs;
  v25 = v4[4].pwszOrg;
  v27 = pwszOrg;
  v12 = 0;
  v26 = 0;
  v24 = v28 >= (unsigned int)v32 ? (v28 - (unsigned int)v32 + 3) >> 2 : 0;
  ulCharInc = v30;
  if ( !v24 )
    goto LABEL_30;
  v13 = v32;
  v14 = v27;
  v15 = v26;
  v16 = v25;
  do
  {
    if ( *v13 == v3 )
    {
      *v16++ = *v14;
      v13 = v32;
      ++v12;
    }
    ++v13;
    ++v14;
    ++v15;
    v32 = v13;
  }
  while ( v15 < v24 );
  v4 = pstro;
  ulCharInc = v30;
  v17 = v29;
  if ( !v12 )
    goto LABEL_30;
  pstro->pwszOrg = pstro[4].pwszOrg;
  v4->cGlyphs = v12;
  v4[1].ulCharInc = (ULONG)v17;
  v4[5].rclBkGround.top = v3;
  v4[1].cGlyphs = 0;
  if ( v3 )
  {
    v21.x = 0;
    v21.y = 0;
    if ( bAdjusBaseLine(&v33, v17, (struct RFONTOBJ *)&v21, v19, v20) )
      ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v4, &v21);
  }
  if ( ESTROBJ::bTextToPathWorkhorse(v4, a2) )
  {
LABEL_30:
    v33 = 0;
    goto LABEL_31;
  }
  v4->pwszOrg = v31;
  v4[1].ulCharInc = ulCharInc;
LABEL_34:
  v33 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
  return 0;
}
