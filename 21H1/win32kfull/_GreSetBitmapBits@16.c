/*
 * XREFs of _GreSetBitmapBits@16 @ 0x20D9E
 * Callers:
 *     _NtGdiSetBitmapBits@12 @ 0xBF7AA (_NtGdiSetBitmapBits@12.c)
 * Callees:
 *     ?bDoGetSetBitmapBits@@YGHPAU_SURFOBJ@@0H@Z @ 0x21096 (-bDoGetSetBitmapBits@@YGHPAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall GreSetBitmapBits(int a1, int a2, int a3, int *a4)
{
  int v5; // ebx
  int v6; // edx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ebx
  int v10; // edx
  int v11; // eax
  LONG v12; // eax
  LONG v13; // ecx
  _DWORD *v14; // edi
  struct _SURFOBJ *v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  bool v18; // sf
  SURFOBJ *v19; // eax
  int v20; // eax
  int v21; // ebx
  struct _SURFOBJ *v22; // eax
  int (__stdcall *v23)(struct _SURFOBJ *, int, _DWORD, _DWORD, RECTL *, POINTL *); // edx
  struct _SURFOBJ *v24; // [esp+34h] [ebp-A8h]
  int v25; // [esp+38h] [ebp-A4h]
  int v26; // [esp+44h] [ebp-98h]
  int v27; // [esp+48h] [ebp-94h]
  char v28; // [esp+4Fh] [ebp-8Dh] BYREF
  int v29; // [esp+50h] [ebp-8Ch] BYREF
  int *v30; // [esp+54h] [ebp-88h]
  int v31; // [esp+58h] [ebp-84h]
  char v32[4]; // [esp+5Ch] [ebp-80h] BYREF
  POINTL pptlSrc; // [esp+60h] [ebp-7Ch] BYREF
  _DWORD v34[2]; // [esp+68h] [ebp-74h] BYREF
  _DWORD *v35; // [esp+70h] [ebp-6Ch] BYREF
  char v36; // [esp+74h] [ebp-68h]
  int v37; // [esp+78h] [ebp-64h]
  int v38; // [esp+7Ch] [ebp-60h]
  int v39; // [esp+80h] [ebp-5Ch]
  int v40; // [esp+84h] [ebp-58h]
  int v41; // [esp+88h] [ebp-54h]
  LONG v42; // [esp+8Ch] [ebp-50h]
  LONG v43; // [esp+90h] [ebp-4Ch]
  int v44; // [esp+94h] [ebp-48h]
  int v45; // [esp+98h] [ebp-44h]
  int v46; // [esp+9Ch] [ebp-40h]
  int v47; // [esp+A0h] [ebp-3Ch]
  int v48; // [esp+A4h] [ebp-38h]
  int v49; // [esp+A8h] [ebp-34h]
  int v50; // [esp+ACh] [ebp-30h]
  _DWORD v51[6]; // [esp+B0h] [ebp-2Ch] BYREF
  RECTL prclDest; // [esp+C8h] [ebp-14h] BYREF

  v29 = a3;
  v30 = a4;
  if ( !a2 )
    return 0;
  v5 = 0;
  v27 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
  LOBYTE(v6) = 5;
  v7 = (_DWORD *)HmgShareLockCheck(a1, v6);
  v8 = v7;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v7 && (v7[18] & 0x4000000) != 0 )
  {
    v9 = v7;
    v10 = v7[7];
    v46 = 0;
    v48 = 0;
    v26 = *v30;
    v11 = v7[6];
    v44 = a2;
    v40 = v11;
    v12 = v8[9];
    v45 = v29;
    v49 = 0;
    v38 = 0;
    v39 = 0;
    v13 = v8[8];
    v43 = v12;
    prclDest.bottom = v12;
    v47 = v26;
    v14 = 0;
    v42 = v13;
    prclDest.right = v13;
    v41 = v10;
    v50 = 0;
    pptlSrc.x = 0;
    pptlSrc.y = 0;
    prclDest.left = 0;
    prclDest.top = 0;
    v29 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v29);
    v15 = (struct _SURFOBJ *)(v8 + 4);
    if ( v8 != (_DWORD *)-16 )
    {
      v16 = v8[18];
      if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
      {
        v14 = v8;
        GreLockDisplayDevice(v8[7]);
        v15 = (struct _SURFOBJ *)(v8 + 4);
      }
    }
    v34[0] = 0;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v34, v15) )
      goto LABEL_18;
    if ( *((_WORD *)v8 + 32) == 3 )
    {
      v51[0] = v8[15];
      v51[1] = v8[8];
      v51[2] = v8[9];
      v17 = ((unsigned int)&loc_3FFFD + 3) & v8[18];
      v51[3] = 0;
      v51[5] = v17;
      v51[4] = 0;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v35, (struct _DEVBITMAPINFO *)v51, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
      {
LABEL_18:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
        if ( v14 )
          GreUnlockDisplayDevice(v14[7]);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
        v5 = v27;
        goto LABEL_22;
      }
      v9 = v35;
      v18 = v26 < 0;
      if ( !v26 )
      {
LABEL_15:
        if ( !v18 )
        {
          v20 = v8[7];
          ++v8[14];
          v31 = v20;
          v21 = v9 != 0 ? (unsigned int)(v9 + 4) : 0;
          bDoGetSetBitmapBits(0, v24, v25);
          v27 = v44;
          *v30 = v26 + v44;
          if ( *((_WORD *)v8 + 32) == 3 )
          {
            v22 = SURFACE::pSurfobj((SURFACE *)v8);
            v27 = v23(v22, v21, 0, 0, &prclDest, &pptlSrc) != 0 ? v27 : 0;
          }
        }
        goto LABEL_18;
      }
      v19 = SURFACE::pSurfobj((SURFACE *)v8);
      EngCopyBits(v9 != 0 ? (SURFOBJ *)(v9 + 4) : 0, v19, 0, 0, &prclDest, &pptlSrc);
    }
    v18 = v26 < 0;
    goto LABEL_15;
  }
  EngSetLastError(6u);
LABEL_22:
  SURFMEM::~SURFMEM((SURFMEM *)&v35);
  if ( v8 )
    DEC_SHARE_REF_CNT(v8);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v5;
}
