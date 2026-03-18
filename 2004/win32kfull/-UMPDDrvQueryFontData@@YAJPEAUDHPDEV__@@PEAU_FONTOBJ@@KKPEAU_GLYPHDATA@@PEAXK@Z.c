/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02AC240
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00EEBB0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00EEDC0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C0130E88 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  struct UMPDOBJ *v9; // rbx
  void *v10; // r15
  int v11; // eax
  unsigned int v12; // r14d
  char *KernelPtr; // rax
  size_t v15; // [rsp+20h] [rbp-91h]
  struct _FONTOBJ *v16; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-75h]
  UMPDOBJ *v19[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v20[10]; // [rsp+50h] [rbp-61h] BYREF

  v17 = 0;
  LODWORD(v16) = a4;
  v18 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v19);
  memset(v20, 0, 0x48uLL);
  v9 = v19[0];
  if ( !v19[0] )
    goto LABEL_12;
  v20[0] = 0x1C00000048LL;
  v20[2] = *(_QWORD *)v19[0];
  v20[3] = a1;
  v20[5] = __PAIR64__((unsigned int)v16, v18);
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v20[7] = v10;
  v20[4] = a2;
  v20[6] = a5;
  LODWORD(v20[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v19[0], (const void **)&v20[6], 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&v20[7], Size)
    && (unsigned int)UMPDOBJ::pfo(v9, (__m128i **)&v20[4]) )
  {
    v16 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v9, 0LL, 0LL, 0LL);
    LODWORD(v15) = 4;
    v11 = UMPDOBJ::Thunk(v9, v20, 0x48u, &v17, v15);
    v12 = v17;
    if ( v11 == -1 )
      v12 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v9, 0, 0, 0LL);
    v16 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    if ( v12 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v20[7]);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr(v9, (char *)v20[6]);
    }
  }
  else
  {
LABEL_12:
    v12 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v19);
  return v12;
}
