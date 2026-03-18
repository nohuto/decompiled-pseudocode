/*
 * XREFs of _GrePlgBlt@44 @ 0x1EDD56
 * Callers:
 *     _NtGdiPlgBlt@44 @ 0x1EE276 (_NtGdiPlgBlt@44.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ??1BLTRECORD@@QAE@XZ @ 0x79466 (--1BLTRECORD@@QAE@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?Src@BLTRECORD@@QAEHHHHH@Z @ 0x79610 (-Src@BLTRECORD@@QAEHHHHH@Z.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QBEHXZ @ 0x798F8 (-bEqualExtents@BLTRECORD@@QBEHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0DEVLOCKBLTOBJ@@QAE@AAVXDCOBJ@@0@Z @ 0x1EBF73 (--0DEVLOCKBLTOBJ@@QAE@AAVXDCOBJ@@0@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QAEHXZ @ 0x1EC9F7 (-bRotated@BLTRECORD@@QAEHXZ.c)
 *     ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C (-vBound@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QAEXXZ @ 0x1ECAD0 (-vExtrema@BLTRECORD@@QAEXXZ.c)
 */

int __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        LONG a4,
        struct XDCOBJ *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ebx
  int valid; // eax
  DC *v13; // edi
  DC *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct SURFACE *v18; // eax
  struct SURFACE *v19; // eax
  int v20; // edx
  unsigned int v21; // edi
  int v22; // eax
  int v23; // esi
  bool v24; // zf
  BLTRECORD *v25; // ecx
  int v26; // eax
  unsigned __int8 v27; // bl
  BLTRECORD *v28; // ecx
  int v30; // [esp+14h] [ebp-170h]
  int v31; // [esp+18h] [ebp-16Ch]
  DC *v32[3]; // [esp+24h] [ebp-160h] BYREF
  DC *v33[3]; // [esp+30h] [ebp-154h] BYREF
  char v34[4]; // [esp+3Ch] [ebp-148h]
  struct _POINTL *v35; // [esp+40h] [ebp-144h]
  _BYTE v36[16]; // [esp+44h] [ebp-140h] BYREF
  _BYTE v37[112]; // [esp+54h] [ebp-130h] BYREF
  struct ECLIPOBJ *v38[3]; // [esp+C4h] [ebp-C0h] BYREF
  _DWORD v39[3]; // [esp+D0h] [ebp-B4h] BYREF
  _DWORD *v40; // [esp+DCh] [ebp-A8h]
  int v41; // [esp+E0h] [ebp-A4h]
  _DWORD *v42; // [esp+E4h] [ebp-A0h]
  int v43; // [esp+E8h] [ebp-9Ch]
  struct SURFACE *v44; // [esp+ECh] [ebp-98h]
  struct SURFACE *v45; // [esp+F0h] [ebp-94h]
  int v46; // [esp+F4h] [ebp-90h]
  int v47[4]; // [esp+F8h] [ebp-8Ch] BYREF
  struct _POINTFIX v48[7]; // [esp+108h] [ebp-7Ch] BYREF
  int v49; // [esp+140h] [ebp-44h]
  int v50; // [esp+144h] [ebp-40h]
  int v51; // [esp+148h] [ebp-3Ch]
  int v52; // [esp+14Ch] [ebp-38h]
  int v53; // [esp+150h] [ebp-34h]
  int v54; // [esp+154h] [ebp-30h]
  int v55; // [esp+158h] [ebp-2Ch]
  int v56; // [esp+15Ch] [ebp-28h]
  int v57; // [esp+168h] [ebp-1Ch]
  int v58; // [esp+16Ch] [ebp-18h]

  v11 = 0;
  v35 = a2;
  *(_DWORD *)v34 = a8;
  v46 = 0;
  v58 = 0;
  memset(v32, 0, sizeof(v32));
  XDCOBJ::vLock((XDCOBJ *)v32, a1);
  memset(v33, 0, sizeof(v33));
  XDCOBJ::vLock((XDCOBJ *)v33, a3);
  if ( v32[0] && v33[0] && (*((_DWORD *)v32[0] + 6) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface(a4, (struct XDCOBJ *)v33, a5, a6, a7, v30, v31);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v37, v32, v33);
    if ( (v37[40] & 1) == 0 )
    {
      if ( XDCOBJ::bFullScreen(v32) || XDCOBJ::bFullScreen(v33) )
        v11 = 1;
      goto LABEL_45;
    }
    valid = XDCOBJ::bValidSurf(v32);
    v13 = v33[0];
    if ( valid && XDCOBJ::bValidSurf(v33) && (*(_DWORD *)(*((_DWORD *)v13 + 126) + 72) & 0x10000000) == 0 )
      goto LABEL_24;
    v14 = v32[0];
    v15 = *((_DWORD *)v32[0] + 255);
    if ( (*(_DWORD *)(v15 + 184) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v32[0], *(_DWORD *)(v15 + 188));
      v14 = v32[0];
      v13 = v33[0];
    }
    v16 = *((_DWORD *)v13 + 255);
    if ( (*(_DWORD *)(v16 + 184) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v13, *(_DWORD *)(v16 + 188));
      v14 = v32[0];
      v13 = v33[0];
    }
    if ( (*((_DWORD *)v14 + 5) == 2 || !XDCOBJ::bValidSurf(v33)) && (*((_BYTE *)v14 + 24) & 0xE0) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v32, 0x204u, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v38, v35, v48, 3u) )
        goto LABEL_19;
      BLTRECORD::vExtrema((BLTRECORD *)v38);
      BLTRECORD::vBound((BLTRECORD *)v38, (struct ERECTL *)v36);
      XDCOBJ::vAccumulate((XDCOBJ *)v32, (struct ERECTL *)v36);
      v14 = v32[0];
      v13 = v33[0];
    }
    if ( (*((_BYTE *)v13 + 24) & 1) != 0 )
    {
LABEL_24:
      v18 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
      if ( !SrcSurfaceAccessCheck(v18) || (v19 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32), !DestSurfaceAccessCheck(v19)) )
      {
        EngSetLastError(5u);
        goto LABEL_45;
      }
      EXFORMOBJ::vInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v32, 0x204u, 0);
      v44 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
      v40 = (_DWORD *)*((_DWORD *)v44 + 22);
      v41 = *((_DWORD *)v32[0] + 15);
      EXFORMOBJ::vInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v33, 0x204u, 0);
      v45 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
      v42 = (_DWORD *)*((_DWORD *)v45 + 22);
      v43 = *((_DWORD *)v33[0] + 15);
      if ( !EXLATEOBJ::bInitXlateObj(
              v47,
              0,
              *((_DWORD *)v32[0] + 20),
              v42,
              v40,
              v43,
              v41,
              *(_DWORD *)(*((_DWORD *)v32[0] + 255) + 204),
              *(_DWORD *)(*((_DWORD *)v32[0] + 255) + 196),
              a11,
              0) )
      {
LABEL_45:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v37);
        goto LABEL_47;
      }
      v58 |= 2u;
      v47[1] = 0;
      if ( (*(_BYTE *)(v39[0] + 56) & 1) == 0 || !BLTRECORD::Src((BLTRECORD *)v38, a4, (int)a5, a6, a7) )
        goto LABEL_19;
      if ( *(_DWORD *)v34 )
      {
        LOBYTE(v20) = 5;
        v22 = HmgShareLockCheck(*(_DWORD *)v34, v20);
        v23 = v22;
        if ( !v22 )
        {
          EngSetLastError(6u);
          goto LABEL_45;
        }
        INC_SHARE_REF_CNT(v22);
        v58 |= 0x30000u;
        v21 = 65540;
        v46 = v23;
        v57 = 43724;
        if ( *(_WORD *)(v23 + 64) || *(_DWORD *)(v23 + 60) != 1 )
        {
          EngSetLastError(6u);
          DEC_SHARE_REF_CNT(v23);
          goto LABEL_45;
        }
        v55 = a9 + v51 - v49;
        v53 = a9;
        v54 = a10;
        v56 = a10 + v52 - v50;
        DEC_SHARE_REF_CNT(v23);
      }
      else
      {
        v46 = 0;
        v57 = 52428;
        v21 = 4;
      }
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v38, v35, v48, 3u) )
      {
LABEL_19:
        EngSetLastError(0x57u);
        goto LABEL_45;
      }
      v24 = BLTRECORD::bRotated((BLTRECORD *)v38) == 0;
      v26 = *((_DWORD *)v32[0] + 255);
      if ( v24 )
      {
        v27 = *(_BYTE *)(v26 + 235);
        if ( v27 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v38) )
        {
          v34[0] = v27;
          v17 = BLTRECORD::bStretch(v38, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v21, v27);
        }
        else
        {
          v17 = BLTRECORD::bBitBlt(v28, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v21);
        }
      }
      else
      {
        v34[0] = *(_BYTE *)(v26 + 235);
        v17 = BLTRECORD::bRotate(v25, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v21, v34[0]);
      }
    }
    else
    {
      v17 = *((_DWORD *)v14 + 126) == 0;
    }
    v11 = v17;
    goto LABEL_45;
  }
  EngSetLastError(6u);
LABEL_47:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v38);
  return v11;
}
