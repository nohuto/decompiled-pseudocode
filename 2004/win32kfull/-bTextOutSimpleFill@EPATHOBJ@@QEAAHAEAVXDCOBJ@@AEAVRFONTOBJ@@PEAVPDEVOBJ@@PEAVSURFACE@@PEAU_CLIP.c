/*
 * XREFs of ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0287078
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013A088 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ::bTextOutSimpleFill(
        PATHOBJ *ppo,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct PDEVOBJ *a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8)
{
  int *v8; // rbx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // esi
  unsigned int v21; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-65h] BYREF
  int *v23; // [rsp+58h] [rbp-61h] BYREF
  struct _POINTL *v24; // [rsp+60h] [rbp-59h]
  BRUSHOBJ *pbo; // [rsp+68h] [rbp-51h]
  CLIPOBJ *pco; // [rsp+70h] [rbp-49h]
  struct SURFACE *v27; // [rsp+78h] [rbp-41h]
  struct PDEVOBJ *v28; // [rsp+80h] [rbp-39h]
  int v29[10]; // [rsp+88h] [rbp-31h] BYREF

  v8 = v29;
  v27 = a5;
  v10 = 0;
  pco = a6;
  v11 = 0;
  v13 = *(_QWORD *)a2;
  v14 = 0;
  pbo = a7;
  v24 = a8;
  v16 = *(_QWORD *)(v13 + 48);
  v28 = a4;
  v21 = 0;
  v22 = 0;
  v17 = *(_DWORD *)(v16 + 40) & 0x8080;
  v23 = v29;
  if ( v17 == 32896 && *(_QWORD *)a3 )
  {
    v18 = UMPDReleaseRFONTSem(a3, 0LL, &v21, &v22, (void **)&v23);
    v13 = *(_QWORD *)a2;
    v14 = v18;
    v10 = v21;
    v11 = v22;
    v8 = v23;
  }
  v19 = EPATHOBJ::bSimpleFill(ppo, *(_DWORD *)(v13 + 72), v28, v27, pco, pbo, v24, 0xD0Du, 2u);
  if ( v14 )
  {
    UMPDAcquireRFONTSem(a3, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v29 )
        Win32FreePool(v8);
    }
  }
  return v19;
}
