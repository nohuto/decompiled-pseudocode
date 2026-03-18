/*
 * XREFs of _GreGetKerningPairs@12 @ 0x1EBB0B
 * Callers:
 *     _NtGdiGetKerningPairs@12 @ 0x21304A (_NtGdiGetKerningPairs@12.c)
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z @ 0x1EB7D0 (-bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QAEKPAPAU_FD_KERNINGPAIR@@@Z @ 0x229413 (-cKernPairs@PFEOBJ@@QAEKPAPAU_FD_KERNINGPAIR@@@Z.c)
 */

unsigned int __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, struct _FD_KERNINGPAIR *a3)
{
  int *v4; // edi
  int v5; // esi
  struct _FD_KERNINGPAIR *v6; // esi
  unsigned int v7; // edi
  struct _FD_KERNINGPAIR *v8; // ebx
  struct _FD_KERNINGPAIR *v9; // ecx
  struct RFONTOBJ *v11; // [esp+0h] [ebp-50h]
  struct PFEOBJ *v12; // [esp+4h] [ebp-4Ch]
  _DWORD v13[3]; // [esp+10h] [ebp-40h] BYREF
  int v14; // [esp+1Ch] [ebp-34h] BYREF
  int v15; // [esp+20h] [ebp-30h]
  struct _FD_KERNINGPAIR *v16; // [esp+24h] [ebp-2Ch]
  int v17; // [esp+28h] [ebp-28h] BYREF
  int v18; // [esp+2Ch] [ebp-24h] BYREF
  int *v19; // [esp+30h] [ebp-20h] BYREF
  char v20; // [esp+37h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( !v13[0] )
    goto LABEL_21;
  v20 = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v19, (struct XDCOBJ *)v13, 0, 2u) )
    GreAcquireSemaphore(v19[137]);
  if ( !v19
    || (v18 = v19[20], !bGetNtoWScale((struct XDCOBJ *)v13, &v14, (struct EFLOAT *)&v19, (struct DCOBJ *)&v18, v11, v12)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return 0;
  }
  v4 = (int *)v19[20];
  v5 = v19[21];
  if ( (*(_DWORD *)(*(_DWORD *)(v5 + 60) + 24) & 0x8000) != 0 )
  {
    v18 = _ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    ++*(_DWORD *)(v5 + 48);
    v20 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  v19 = v4;
  if ( a2 && (v6 = a3) != 0 )
  {
    a3 = 0;
    v7 = PFEOBJ::cKernPairs((PFEOBJ *)&v19, &a3);
    if ( v7 >= a2 )
      v7 = a2;
    v8 = (struct _FD_KERNINGPAIR *)((char *)v6 + 8 * v7);
    ms_exc.registration.TryLevel = 0;
    while ( v6 < v8 )
    {
      v9 = a3;
      v6->wcFirst = a3->wcFirst;
      v6->wcSecond = v9->wcSecond;
      *(_DWORD *)&v6->fwdKern = lCvt(v14, v15, v9->fwdKern);
      ++a3;
      v6 = (struct _FD_KERNINGPAIR *)((char *)v6 + 8);
      v16 = v6;
    }
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v7 = *(_DWORD *)(v4[5] + 164);
  }
  if ( v20 )
  {
    v17 = *v19;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v17);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v7;
}
