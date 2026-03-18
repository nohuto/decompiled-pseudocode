/*
 * XREFs of ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2
 * Callers:
 *     _NtGdiAbortDoc@4 @ 0x1D907F (_NtGdiAbortDoc@4.c)
 *     _NtGdiEndDoc@4 @ 0x1D93E5 (_NtGdiEndDoc@4.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QAE@XZ @ 0x1D6FE3 (--1RESTORESAVEDCATTRS@@QAE@XZ.c)
 *     ?vDec_cRef@SURFACE@@QAEXXZ @ 0x1D8765 (-vDec_cRef@SURFACE@@QAEXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QAEXXZ @ 0x1D885B (-vDone@RESTORESAVEDCATTRS@@QAEXXZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QAEXPAVXDCOBJ@@@Z @ 0x1D88B1 (-vInit@RESTORESAVEDCATTRS@@QAEXPAVXDCOBJ@@@Z.c)
 *     ?bIsProcessLocalSystem@@YGHXZ @ 0x1E7C8E (-bIsProcessLocalSystem@@YGHXZ.c)
 *     ?UMPDServer@@YGHPAVSURFACE@@@Z @ 0x20FC34 (-UMPDServer@@YGHPAVSURFACE@@@Z.c)
 */

int __userpurge bEndDocInternal@<eax>(int a1@<edx>, HDC a2@<ecx>, HDC a3, unsigned int a4, unsigned __int16 a5)
{
  DC *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // esi
  bool v12; // zf
  int v13; // edx
  int v14; // ebx
  int v15; // esi
  DC *v16; // eax
  SURFACE *v17; // ecx
  int v18; // edx
  struct SURFACE *v20; // [esp+0h] [ebp-38h]
  int v21; // [esp+10h] [ebp-28h] BYREF
  int v22; // [esp+14h] [ebp-24h] BYREF
  int v23; // [esp+18h] [ebp-20h]
  int v24; // [esp+1Ch] [ebp-1Ch]
  DC *v25[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v26[3]; // [esp+2Ch] [ebp-Ch] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a2);
  v7 = v25[0];
  if ( !v25[0]
    || (((unsigned int)&loc_2007FE + 2) & *((_DWORD *)v25[0] + 6)) != 0
    || *((_WORD *)v25[0] + 4) != (_WORD)a3
    || !XDCOBJ::bValidSurf(v25)
    || ((unsigned int)a2 & 0x7F0000) == 0x10000
    || ((unsigned int)a2 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_35;
  }
  if ( *((_DWORD *)v7 + 17) > *((_DWORD *)v7 + 18) )
  {
    GreRestoreDC(a2, *((_DWORD *)v7 + 18));
    v7 = v25[0];
  }
  *((_DWORD *)v7 + 6) |= (unsigned int)&loc_1FFFFC + 4;
  v8 = 0;
  v9 = *((_DWORD *)v25[0] + 9);
  v21 = v9;
  v10 = *(_DWORD *)(v9 + 24);
  if ( (v10 & 1) != 0 || !*(_DWORD *)(v9 + 1824) )
  {
LABEL_35:
    EngSetLastError(0x3EBu);
    v14 = 0;
  }
  else
  {
    v11 = *((_DWORD *)v25[0] + 126);
    v22 = 0;
    if ( (v10 & 0x8000) != 0 )
    {
      RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v22, (struct XDCOBJ *)v25);
      v9 = v21;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v12 = bIsProcessLocalSystem() == 0, v9 = v21, !v12)
      || *(_DWORD *)(v9 + 2036) )
    {
      v8 = (*(int (__stdcall **)(int, int))(v9 + 2036))(v11 != 0 ? v11 + 16 : 0, a1);
    }
    else if ( gfUMPDDebug )
    {
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n",
        2088);
    }
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
    v24 = *(_DWORD *)(v21 + 24) & 0x8000;
    *((_WORD *)v25[0] + 912) = -1;
    UMPDServer(v20);
    DC::pSurface(v25[0], 0);
    v23 = 0;
    v14 = 1;
    *((_DWORD *)v25[0] + 59) |= 0xFu;
    v15 = *((_DWORD *)v25[0] + 19);
    if ( *((_DWORD *)v25[0] + 17) - 1 > 0 )
    {
      while ( 1 )
      {
        LOBYTE(v13) = 1;
        memset(v26, 0, sizeof(v26));
        v16 = (DC *)HmgLockIgnoreOwner(v15, v13);
        v26[0] = v16;
        if ( !v16 )
          goto LABEL_31;
        v17 = (SURFACE *)*((_DWORD *)v16 + 126);
        if ( !v17 )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)v26);
          goto LABEL_31;
        }
        v18 = *((_DWORD *)v17 + 18);
        if ( (v18 & 0x800) != 0 )
          break;
        if ( v18 >= 0 )
        {
          SURFACE::vDec_cRef(v17);
          goto LABEL_27;
        }
LABEL_28:
        DC::pSurface(v16, 0);
        *(_DWORD *)(v26[0] + 236) |= 0xFu;
        v15 = *(_DWORD *)(v26[0] + 76);
        XDCOBJ::vUnlockFast((XDCOBJ *)v26);
        if ( ++v23 >= *((_DWORD *)v25[0] + 17) - 1 )
          goto LABEL_31;
      }
      DEC_SHARE_REF_CNT(*((_DWORD *)v16 + 126));
LABEL_27:
      v16 = (DC *)v26[0];
      goto LABEL_28;
    }
LABEL_31:
    PDEVOBJ::vDisableSurface(&v21, 0, 1);
    *((_DWORD *)v25[0] + 6) &= ~0x200000u;
    if ( !v24 || !v8 )
      v14 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((RESTORESAVEDCATTRS *)&v22);
  }
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  return v14;
}
