/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bSimItalic@IFIOBJ@@QAEHXZ @ 0xC52CA (-bSimItalic@IFIOBJ@@QAEHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QAEPAXXZ @ 0xC93D0 (-pvSimBold@IFIOBJ@@QAEPAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bInitPrivatePFT@@YGHXZ @ 0x1D0823 (-bInitPrivatePFT@@YGHXZ.c)
 *     _ulCharsetToCodePage@4 @ 0x24964C (_ulCharsetToCodePage@4.c)
 */

struct PFE *__thiscall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  int v5; // ebx
  unsigned int v6; // ecx
  char *v7; // esi
  int *v8; // eax
  struct PFE *result; // eax
  struct PFF *v10; // edx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // esi
  char *v14; // edx
  char *v15; // eax
  bool v16; // zf
  __int16 v17; // ax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  _DWORD v23[3]; // [esp+Ch] [ebp-28h] BYREF
  MAPPER *v24; // [esp+18h] [ebp-1Ch]
  int v25; // [esp+1Ch] [ebp-18h]
  unsigned int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h] BYREF
  int v28; // [esp+28h] [ebp-Ch]
  struct PFF *v29; // [esp+2Ch] [ebp-8h] BYREF
  unsigned int v30; // [esp+30h] [ebp-4h] BYREF

  v5 = 0;
  v6 = 0;
  v24 = this;
  v30 = 0;
  if ( (*((_BYTE *)this + 76) & 1) != 0 )
    v7 = (char *)this + 80;
  else
    v7 = (char *)(*((_DWORD *)this + 1) + 348);
  v26 = 4 * *((_DWORD *)v7 + 1) + 8;
  v8 = (int *)*((_DWORD *)this + 62);
  if ( !v8 )
    return (struct PFE *)v5;
  v10 = 0;
  v28 = *v8;
  v29 = 0;
  if ( !v28 )
    return (struct PFE *)v5;
  if ( gpPFTPrivate )
  {
LABEL_11:
    v25 = 64;
    v27 = (int)gpPFTPrivate;
    if ( (*(_BYTE *)(v28 + 32) & 0x10) == 0 )
    {
      v11 = PUBLIC_PFTOBJ::bLoadFonts(
              (PUBLIC_PFTOBJ *)&v27,
              *(unsigned __int16 **)(v28 + 12),
              *(_DWORD *)(v28 + 16),
              *(_DWORD *)(v28 + 20),
              (struct tagDESIGNVECTOR *)v7,
              v26,
              &v30,
              0x40u,
              &v29,
              0x30u,
              1,
              0,
              0,
              0);
      this = v24;
      v30 &= -(v11 != 0);
      if ( !v30 )
        return (struct PFE *)v5;
      GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      v6 = v30;
      v10 = v29;
    }
    if ( v6 && v10 )
    {
      if ( v6 == 1 )
      {
        v5 = *((_DWORD *)v10 + 33);
LABEL_29:
        v18 = 0;
        *a2 = 0;
        v28 = *(_DWORD *)(v5 + 20);
        v23[0] = v28;
        v19 = v28;
        if ( *(_BYTE *)(*((_DWORD *)this + 1) + 20) && (*(_BYTE *)(v28 + 52) & 1) == 0 )
        {
          if ( IFIOBJ::bSimItalic((IFIOBJ *)v23) )
          {
            v18 = 0x4000;
            *a2 = 0x4000;
          }
          v19 = v28;
        }
        v20 = *(unsigned __int16 *)(v19 + 46) - *((_DWORD *)this + 40);
        if ( (((unsigned int)&loc_1FFFFC + 4) & *((_DWORD *)this + 55)) == 0 && v20 < 0 && -v20 > 150 )
        {
          if ( IFIOBJ::pvSimBold((IFIOBJ *)v23) )
            *a2 = v18 | 0x2000;
        }
        v21 = *(unsigned __int8 *)(*((_DWORD *)this + 1) + 23) << 24;
        *a3 = v21;
        v22 = ulCharsetToCodePage();
        *(_DWORD *)HIDWORD(v22) = v21 | ((_DWORD)v22 << 8);
        a4->y = 1;
        a4->x = 1;
        return (struct PFE *)v5;
      }
      v12 = 0;
      v27 = 0x7FFFFFFF;
      v13 = 0;
      v28 = *((_DWORD *)this + 40);
      v24 = (struct PFF *)((char *)v10 + 132);
      v14 = (char *)v10 + 132;
      while ( 1 )
      {
        v26 = *(_DWORD *)(*(_DWORD *)v14 + 20);
        v24 = (MAPPER *)*(unsigned __int16 *)(v26 + 46);
        v15 = (char *)v24 - v28;
        if ( (int)v24 - v28 < 0 )
          v15 = (char *)(v28 - (_DWORD)v24);
        if ( (int)v15 > v27 )
          goto LABEL_27;
        v16 = (*((_DWORD *)this + 55) & 0x2000000) == 0;
        v27 = (int)v15;
        v17 = *(_WORD *)(v26 + *(_DWORD *)(v26 + 8));
        v6 = v30;
        if ( !v16 )
          break;
        if ( v17 != (_WORD)v25 )
          goto LABEL_26;
LABEL_27:
        ++v13;
        v14 += 4;
        if ( v13 >= v6 )
        {
          v5 = *((_DWORD *)v29 + v12 + 33);
          goto LABEL_29;
        }
      }
      if ( v17 != (_WORD)v25 )
        goto LABEL_27;
LABEL_26:
      v12 = v13;
      goto LABEL_27;
    }
    return (struct PFE *)v5;
  }
  result = (struct PFE *)bInitPrivatePFT();
  if ( result )
  {
    v6 = v30;
    v10 = v29;
    goto LABEL_11;
  }
  return result;
}
