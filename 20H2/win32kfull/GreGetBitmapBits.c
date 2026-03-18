/*
 * XREFs of GreGetBitmapBits @ 0x1C00F1B94
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00F1AB0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0242144 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00F2128 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBits(__int64 a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  LONG v11; // ecx
  LONG v12; // edx
  _DWORD *v13; // r12
  __int64 v14; // rax
  HDEV v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // rdi
  int v18; // eax
  unsigned int v19; // r14d
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  char v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-90h]
  _DWORD *v25; // [rsp+78h] [rbp-88h] BYREF
  char v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+84h] [rbp-7Ch]
  HDEV v28; // [rsp+88h] [rbp-78h] BYREF
  void *v29; // [rsp+90h] [rbp-70h]
  char v30[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v32[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  _SURFOBJ v36; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v24 = a4;
  v29 = a3;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  LOBYTE(v8) = 5;
  v9 = (_DWORD *)HmgShareLockCheck(a1, v8);
  v10 = v9;
  if ( v9 && (v9[28] & 0x4000000) != 0 )
  {
    v11 = v9[14];
    v12 = v9[15];
    v13 = v9;
    v14 = (unsigned int)v9[24];
    v25 = 0LL;
    v26 = 0;
    v27 = 0;
    cjBits = v12 * (((unsigned int)(v11 * *((_DWORD *)&galBitsPerPixel + v14) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_20:
      SURFMEM::~SURFMEM((SURFMEM *)&v25);
      goto LABEL_21;
    }
    v36.dhpdev = (DHPDEV)*((_QWORD *)v10 + 5);
    v15 = (HDEV)*((_QWORD *)v10 + 6);
    v36.sizlBitmap.cx = v11;
    v36.sizlBitmap.cy = v12;
    prclDest.right = v11;
    prclDest.bottom = v12;
    v36.hdev = v15;
    v28 = v15;
    memset(&v36.cjBits, 0, 40);
    *(_OWORD *)&v36.dhsurf = 0LL;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v28);
    v16 = (__int64)(v10 + 6);
    v17 = 0LL;
    if ( v10 != (_DWORD *)-24LL )
    {
      v18 = v10[28];
      if ( (v18 & 0x80004000) != 0 && (v18 & 0x200) == 0 )
      {
        v17 = v10;
        GreLockDisplayDevice(*((_QWORD *)v10 + 6));
      }
    }
    v31[0] = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v31, (struct _SURFOBJ *)(v10 + 6)) )
    {
      if ( *((_WORD *)v10 + 50) == 3 )
      {
        v32[0] = v10[24];
        v32[1] = v10[14];
        v32[2] = v10[15];
        v34 = v10[28] & 0x40000;
        v32[3] = 0;
        v35 = 0;
        v33 = 0LL;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_26;
        v13 = v25;
        v16 = (__int64)(v25 + 6);
        EngCopyBits(
          (SURFOBJ *)((unsigned __int64)(v25 + 6) & -(__int64)(v25 != 0LL)),
          (SURFOBJ *)(v10 + 6),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v19 = *v24;
        if ( (*v24 & 0x80000000) == 0 && v19 < cjBits )
        {
          if ( a2 + v19 > cjBits )
            a2 = cjBits - v19;
          if ( a2 )
          {
            v36.cjBits = a2;
            v36.lDelta = v19;
            v36.pvBits = v29;
            bDoGetSetBitmapBits(&v36, (struct _SURFOBJ *)(v16 & -(__int64)(v13 != 0LL)), 1);
            cjBits = v36.cjBits;
            *v24 = v19 + v36.cjBits;
            goto LABEL_17;
          }
        }
LABEL_26:
        cjBits = 0;
      }
    }
LABEL_17:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    if ( v17 )
      GreUnlockDisplayDevice(*((_QWORD *)v17 + 6));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
    goto LABEL_20;
  }
  EngSetLastError(6u);
LABEL_21:
  if ( v10 )
    DEC_SHARE_REF_CNT(v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
  return cjBits;
}
