/*
 * XREFs of GreSetBitmapBits @ 0x1C00F1EF0
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C00F1E10 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00F2128 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBits(__int64 a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  HDEV v12; // rdx
  __int64 v13; // r13
  LONG v14; // ecx
  LONG v15; // esi
  LONG v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  bool v19; // sf
  __int64 v20; // rsi
  struct _SURFOBJ *v21; // r12
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  int v24; // eax
  char v25[4]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v26; // [rsp+64h] [rbp-9Ch]
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  char v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  HDEV v31; // [rsp+80h] [rbp-80h] BYREF
  LONG *v32; // [rsp+88h] [rbp-78h]
  char v33[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v35[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  struct _SURFOBJ v39; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v32 = a4;
  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v25);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v28 = 0LL;
  v11 = v10;
  v29 = 0;
  v30 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(HDEV *)(v10 + 48);
    v13 = v10;
    v14 = *(_DWORD *)(v10 + 56);
    v15 = *a4;
    v39.dhpdev = *(DHPDEV *)(v10 + 40);
    v16 = *(_DWORD *)(v10 + 60);
    v39.hdev = v12;
    v39.sizlBitmap.cx = v14;
    prclDest.right = v14;
    v31 = v12;
    v39.sizlBitmap.cy = v16;
    prclDest.bottom = v16;
    v26 = v15;
    *(&v39.cjBits + 1) = 0;
    *(_QWORD *)&v39.iUniq = 0LL;
    *(_OWORD *)&v39.dhsurf = 0LL;
    v39.cjBits = a2;
    v39.pvBits = a3;
    v39.pvScan0 = 0LL;
    v39.lDelta = v15;
    *(_DWORD *)&v39.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v31);
    v17 = 0LL;
    if ( v11 != -24 )
    {
      v18 = *(_DWORD *)(v11 + 112);
      if ( (v18 & 0x80004000) != 0 && (v18 & 0x200) == 0 )
      {
        v17 = v11;
        GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
      }
    }
    v34[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v34, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_13;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      v35[0] = *(_DWORD *)(v11 + 96);
      v35[1] = *(_DWORD *)(v11 + 56);
      v35[2] = *(_DWORD *)(v11 + 60);
      v37 = *(_DWORD *)(v11 + 112) & 0x40000;
      v35[3] = 0;
      v38 = 0;
      v36 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)v35, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_13:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
        goto LABEL_16;
      }
      v13 = v28;
      v19 = v15 < 0;
      if ( !v15 )
      {
LABEL_11:
        if ( !v19 )
        {
          ++*(_DWORD *)(v11 + 92);
          v20 = *(_QWORD *)(v11 + 48);
          v21 = (struct _SURFOBJ *)((v13 + 24) & -(__int64)(v13 != 0));
          bDoGetSetBitmapBits(v21, &v39, 0);
          cjBits = v39.cjBits;
          *v32 = v39.cjBits + v26;
          if ( *(_WORD *)(v11 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
              v24 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v20 + 2840))(
                      v11 + 24,
                      v21,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v24 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      v11 + 24,
                      v21,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v24 != 0);
          }
        }
        goto LABEL_13;
      }
      EngCopyBits((SURFOBJ *)((v28 + 24) & -(__int64)(v28 != 0)), (SURFOBJ *)(v11 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
    }
    v19 = v15 < 0;
    goto LABEL_11;
  }
  EngSetLastError(6u);
LABEL_16:
  SURFMEM::~SURFMEM((SURFMEM *)&v28);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
  return cjBits;
}
