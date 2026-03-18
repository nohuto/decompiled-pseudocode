/*
 * XREFs of ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3
 * Callers:
 *     _NtGdiGetStringBitmapW@20 @ 0x1F966E (_NtGdiGetStringBitmapW@20.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1ESTROBJ@@QAE@XZ @ 0xF7084 (--1ESTROBJ@@QAE@XZ.c)
 *     vStringBitmapTextOut @ 0xF725E (vStringBitmapTextOut.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z @ 0x207CEA (-ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z @ 0x225464 (-vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z.c)
 */

unsigned int __userpurge GreGetStringBitmapW@<eax>(
        unsigned __int16 *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        unsigned __int16 *a4,
        unsigned int a5,
        struct STRINGBITMAP *a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v17; // [esp-Ch] [ebp-15Ch]
  int v18; // [esp-8h] [ebp-158h]
  void *v19; // [esp-4h] [ebp-154h]
  _DWORD v20[3]; // [esp+Ch] [ebp-144h] BYREF
  unsigned int *v21; // [esp+18h] [ebp-138h]
  int v22; // [esp+1Ch] [ebp-134h]
  struct _POINTL v23; // [esp+20h] [ebp-130h] BYREF
  int v24[3]; // [esp+28h] [ebp-128h] BYREF
  int v25; // [esp+34h] [ebp-11Ch] BYREF
  int v26; // [esp+38h] [ebp-118h] BYREF
  int v27; // [esp+3Ch] [ebp-114h] BYREF
  STROBJ pstro; // [esp+40h] [ebp-110h] BYREF
  int v29; // [esp+64h] [ebp-ECh]
  int *v30; // [esp+6Ch] [ebp-E4h]
  int v31; // [esp+70h] [ebp-E0h]
  int *v32; // [esp+F4h] [ebp-5Ch]
  int v33; // [esp+100h] [ebp-50h]
  int v34; // [esp+104h] [ebp-4Ch]

  v7 = 0;
  v21 = (unsigned int *)a4;
  memset(v24, 0, sizeof(v24));
  XDCOBJ::vLock((XDCOBJ *)v24, a2);
  if ( !v24[0] )
  {
    EngSetLastError(6u);
    goto LABEL_31;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)v24, 516);
  if ( (*(_BYTE *)(v20[0] + 56) & 0x43) == 0x43 )
  {
    v27 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v27, (struct XDCOBJ *)v24, 0, 2u) )
      GreAcquireSemaphore(*(_DWORD *)(v27 + 548));
    if ( !v27 || (*(_BYTE *)(v27 + 60) & 2) != 0 || *(_DWORD *)(v27 + 396) | *(_DWORD *)(v24[0] + 1560) )
      goto LABEL_30;
    v33 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)&pstro, a1, 0, (struct XDCOBJ *)v24, (struct RFONTOBJ *)&v27, v17, v18, v19);
    if ( (v33 & 4) == 0
      || (v26 = pstro.rclBkGround.bottom - pstro.rclBkGround.top,
          v9 = pstro.rclBkGround.right
             + (*(int *)(*(_DWORD *)(v31 + 4) + 12) >> 4)
             + ((*(_DWORD *)(*(_DWORD *)(v31 + 16 * pstro.cGlyphs - 12) + 8)
               - *(_DWORD *)(*(_DWORD *)(v31 + 16 * pstro.cGlyphs - 12) + 16)) >> 4)
             - pstro.rclBkGround.left,
          v22 = (unsigned int)(v9 + 7) >> 3,
          v7 = (pstro.rclBkGround.bottom - pstro.rclBkGround.top) * v22 + 8,
          a5 < v7) )
    {
LABEL_29:
      ESTROBJ::~ESTROBJ((ESTROBJ *)&pstro);
LABEL_30:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
      goto LABEL_31;
    }
    memset(a4 + 4, 0, (pstro.rclBkGround.bottom - pstro.rclBkGround.top) * v22);
    v10 = v26;
    v23.x = 0;
    v23.y = 0;
    *(_DWORD *)a4 = v9;
    v11 = 0;
    *((_DWORD *)a4 + 1) = v10;
    v12 = 0;
    if ( (v33 & 0x1400) != 0 )
    {
      v12 = *v32;
      if ( *v32 )
      {
        if ( *v32 == 1 )
        {
          v13 = v27;
          v11 = *(_DWORD *)(v27 + 716);
        }
        else if ( *v32 == 2 )
        {
          v13 = v27;
          v11 = *(_DWORD *)(v27 + 720);
        }
        else
        {
          v13 = v27;
          v11 = *v32 == 3 ? *(_DWORD *)(v27 + 724) : *(_DWORD *)(*(_DWORD *)(v27 + 728) + 4 * v12 - 16);
        }
        if ( v11 )
        {
          v14 = *(_DWORD *)(v11 + 320);
          v15 = *(_DWORD *)(v11 + 324);
          v26 = *(_DWORD *)(v13 + 320);
          if ( v26 < v14 - v15 )
            v15 = v14 - v26;
          v23.y = v15 >> 4;
          v26 = 0;
          pstro.pgp = v15 >> 4 == 0 ? pstro.pgp : 0;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
        }
      }
    }
    v29 = 0;
    v34 = v12;
    v25 = v11;
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 60) & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_28;
      }
      v30 = &v25;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)&pstro, &v23);
    vStringBitmapTextOut(&pstro, v21, v22);
LABEL_28:
    v25 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    goto LABEL_29;
  }
LABEL_31:
  if ( v24[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
  return v7;
}
