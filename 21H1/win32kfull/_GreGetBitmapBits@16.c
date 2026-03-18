/*
 * XREFs of _GreGetBitmapBits@16 @ 0xE2B7A
 * Callers:
 *     _NtGdiGetBitmapBits@12 @ 0xE2ADA (_NtGdiGetBitmapBits@12.c)
 *     ?GetCursorHeight@@YGHXZ @ 0x1A07A4 (-GetCursorHeight@@YGHXZ.c)
 * Callees:
 *     ?bDoGetSetBitmapBits@@YGHPAU_SURFOBJ@@0H@Z @ 0x21096 (-bDoGetSetBitmapBits@@YGHPAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __fastcall GreGetBitmapBits(int a1, unsigned int a2, void *a3, LONG *a4)
{
  unsigned int v5; // ebx
  int v6; // edx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  LONG v9; // ecx
  LONG v10; // edx
  int v11; // eax
  _DWORD *v12; // edi
  struct _SURFOBJ *v13; // eax
  int v14; // ecx
  int v15; // eax
  SURFOBJ *v16; // eax
  int v17; // edx
  LONG v18; // ecx
  ULONG v19; // eax
  struct _SURFOBJ *v21; // [esp+20h] [ebp-B0h]
  int v22; // [esp+24h] [ebp-ACh]
  ULONG cjBits; // [esp+30h] [ebp-A0h]
  char v24; // [esp+37h] [ebp-99h] BYREF
  unsigned int v25; // [esp+38h] [ebp-98h]
  _DWORD *v26; // [esp+3Ch] [ebp-94h]
  LONG *v27; // [esp+40h] [ebp-90h]
  HDEV hdev; // [esp+44h] [ebp-8Ch] BYREF
  void *v29; // [esp+48h] [ebp-88h]
  LONG v30; // [esp+4Ch] [ebp-84h]
  int v31; // [esp+50h] [ebp-80h] BYREF
  _DWORD v32[2]; // [esp+54h] [ebp-7Ch] BYREF
  _DWORD *v33; // [esp+5Ch] [ebp-74h] BYREF
  char v34; // [esp+60h] [ebp-70h]
  int v35; // [esp+64h] [ebp-6Ch]
  POINTL pptlSrc; // [esp+68h] [ebp-68h] BYREF
  struct _SURFOBJ v37; // [esp+70h] [ebp-60h] BYREF
  _DWORD v38[6]; // [esp+A4h] [ebp-2Ch] BYREF
  RECTL prclDest; // [esp+BCh] [ebp-14h] BYREF

  v25 = a2;
  v29 = a3;
  v5 = 0;
  v27 = a4;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
  LOBYTE(v6) = 5;
  v7 = (_DWORD *)HmgShareLockCheck(a1, v6);
  v8 = v7;
  if ( v7 && (v7[18] & 0x4000000) != 0 )
  {
    v9 = v7[8];
    v10 = v7[9];
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v11 = v7[15];
    v26 = v8;
    v5 = v10 * (((unsigned int)(v9 * gaulConvert[v11] + 15) >> 3) & 0x1FFFFFFE);
    cjBits = v5;
    if ( !a3 )
    {
LABEL_24:
      SURFMEM::~SURFMEM((SURFMEM *)&v33);
      goto LABEL_26;
    }
    v37.sizlBitmap.cx = v9;
    v12 = 0;
    v37.dhsurf = 0;
    v37.hsurf = 0;
    v37.dhpdev = (DHPDEV)v8[6];
    v37.hdev = (HDEV)v8[7];
    hdev = v37.hdev;
    prclDest.right = v9;
    v37.sizlBitmap.cy = v10;
    memset(&v37.cjBits, 0, 28);
    pptlSrc.x = 0;
    pptlSrc.y = 0;
    prclDest.left = 0;
    prclDest.top = 0;
    prclDest.bottom = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v31, (struct PDEVOBJ *)&hdev);
    v13 = (struct _SURFOBJ *)(v8 + 4);
    if ( v8 != (_DWORD *)-16 )
    {
      v14 = v8[18];
      if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
      {
        v12 = v8;
        GreLockDisplayDevice(v8[7]);
        v13 = (struct _SURFOBJ *)(v8 + 4);
      }
    }
    v32[0] = 0;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v32, v13) )
    {
      if ( *((_WORD *)v8 + 32) == 3 )
      {
        v38[0] = v8[15];
        v38[1] = v8[8];
        v38[2] = v8[9];
        v15 = v8[18] & 0x40000;
        v38[3] = 0;
        v38[5] = v15;
        v38[4] = 0;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v33, (struct _DEVBITMAPINFO *)v38, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
          goto LABEL_20;
        v26 = v33;
        v16 = SURFACE::pSurfobj((SURFACE *)v8);
        EngCopyBits(v17 != 0 ? (SURFOBJ *)(v17 + 16) : 0, v16, 0, 0, &prclDest, &pptlSrc);
      }
      if ( v5 )
      {
        v18 = *v27;
        v30 = v18;
        if ( v18 >= 0 && v18 < v5 )
        {
          v19 = v18 + v25 <= v5 ? v25 : v5 - v18;
          if ( v19 )
          {
            v37.lDelta = v18;
            v37.cjBits = v19;
            v37.pvBits = v29;
            bDoGetSetBitmapBits(v26 != 0 ? (struct _SURFOBJ *)(v26 + 4) : 0, &v37, (struct _SURFOBJ *)1, v21, v22);
            cjBits = v37.cjBits;
            *v27 = v30 + v37.cjBits;
            goto LABEL_21;
          }
        }
LABEL_20:
        cjBits = 0;
      }
    }
LABEL_21:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
    if ( v12 )
      GreUnlockDisplayDevice(v12[7]);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v31);
    v5 = cjBits;
    goto LABEL_24;
  }
  EngSetLastError(6u);
LABEL_26:
  if ( v8 )
    DEC_SHARE_REF_CNT(v8);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v5;
}
