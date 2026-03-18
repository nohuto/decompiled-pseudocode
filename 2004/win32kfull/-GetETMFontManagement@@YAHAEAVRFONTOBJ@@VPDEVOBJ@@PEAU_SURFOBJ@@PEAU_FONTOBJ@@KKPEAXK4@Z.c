/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C0132E04
 * Callers:
 *     NtGdiGetETM @ 0x1C0132240 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C2640 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        struct PDEV *a2,
        struct _SURFOBJ *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v8; // rdx
  int *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v14; // r14d
  int v15; // r13d
  struct _SURFOBJ *v16; // r10
  __int64 v17; // rcx
  int v19; // eax
  unsigned int v20; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-55h] BYREF
  int *v22; // [rsp+48h] [rbp-51h] BYREF
  struct _SURFOBJ *v23; // [rsp+50h] [rbp-49h]
  void *v24; // [rsp+58h] [rbp-41h] BYREF
  int v25[10]; // [rsp+68h] [rbp-31h] BYREF

  v23 = a3;
  v8 = a7;
  v9 = v25;
  v10 = 0;
  v24 = a7;
  v11 = 0;
  v20 = 0;
  v12 = *((_DWORD *)a2 + 10);
  v21 = 0;
  v22 = v25;
  v14 = 0;
  v15 = 0;
  v16 = a3;
  if ( (v12 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v19 = UMPDReleaseRFONTSem(a1, 0LL, &v20, &v21, (void **)&v22);
    v16 = v23;
    v15 = v19;
    v8 = v24;
    v10 = v20;
    v11 = v21;
    v9 = v22;
  }
  v17 = *(_QWORD *)a1;
  if ( a2 != qword_1C0341A00 || v17 && *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL) == 3 )
  {
    v24 = *(void **)(v17 + 128);
    v14 = PFFOBJ::FontManagement((PFFOBJ *)&v24, v16, 0LL, 8u, 4u, v8, 0, 0LL);
  }
  if ( v15 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v9);
    if ( v9 )
    {
      if ( v9 != v25 )
        Win32FreePool(v9);
    }
  }
  return v14;
}
