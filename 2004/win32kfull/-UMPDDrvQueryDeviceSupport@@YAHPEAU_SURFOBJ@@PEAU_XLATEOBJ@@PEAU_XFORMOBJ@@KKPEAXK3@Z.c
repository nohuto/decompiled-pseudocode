/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02ABC90
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00D8188 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00EEBB0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00EEDC0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00EEE58 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00EF068 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00EF3F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C014180C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02AD44C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  ULONG v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // r8d
  ULONG v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  char *v20; // rdx
  char *KernelPtr; // rax
  size_t v23; // [rsp+20h] [rbp-128h]
  int v24; // [rsp+40h] [rbp-108h] BYREF
  int v25; // [rsp+44h] [rbp-104h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-100h] BYREF
  int v27; // [rsp+4Ch] [rbp-FCh] BYREF
  UMPDOBJ *v28; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-F0h] BYREF
  void *v30; // [rsp+60h] [rbp-E8h]
  void *v31; // [rsp+68h] [rbp-E0h] BYREF
  void *v32; // [rsp+70h] [rbp-D8h] BYREF
  int v33; // [rsp+78h] [rbp-D0h]
  unsigned int v34; // [rsp+7Ch] [rbp-CCh]
  int v35; // [rsp+80h] [rbp-C8h]
  unsigned int v36; // [rsp+84h] [rbp-C4h]
  struct _XLATEOBJ *v37; // [rsp+88h] [rbp-C0h]
  struct _XFORMOBJ *v38; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+98h] [rbp-B0h]
  struct _SURFOBJ *v40; // [rsp+A0h] [rbp-A8h]
  _QWORD v41[10]; // [rsp+B0h] [rbp-98h] BYREF

  v26 = a4;
  v38 = a3;
  v37 = a2;
  v30 = a8;
  v39 = (unsigned __int64)a6;
  v40 = a1;
  v10 = 1;
  v24 = 1;
  v27 = 0;
  v11 = 0;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v31 = 0LL;
  v32 = 0LL;
  memset(v41, 0, sizeof(v41));
  v12 = v28;
  if ( !v28 )
    goto LABEL_36;
  if ( !*((_DWORD *)v28 + 106) )
  {
    v14 = a5;
    goto LABEL_14;
  }
  v13 = a2 ? ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120 : 96;
  v14 = a5;
  if ( a5 + 7 < a5 )
    goto LABEL_36;
  v33 = a5 + 7;
  v34 = (a5 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_36;
  v35 = Size + 7;
  v15 = (Size + 7) & 0xFFFFFFF8;
  v36 = v15;
  v16 = v13 + ((a5 + 7) & 0xFFFFFFF8);
  if ( v16 < v13 )
    goto LABEL_36;
  v17 = v13 + ((a5 + 7) & 0xFFFFFFF8);
  v18 = v16 + v15;
  v19 = -1;
  if ( v17 + v15 >= v17 )
    v19 = v18;
  v29 = v19;
  if ( v18 < v17 )
  {
LABEL_36:
    XUMPDOBJ::~XUMPDOBJ(&v28);
    return 0LL;
  }
  v10 = UMPDOBJ::bThunkLargeBitmap(v28, a1, &v31, &v32, &v27, &v25, &v29);
  v24 = v10;
  v11 = v25;
LABEL_14:
  if ( v10 )
  {
    v41[0] = 0x4C00000050LL;
    v41[2] = *(_QWORD *)v12;
    v41[3] = a1;
    v41[4] = v37;
    v41[5] = v38;
    v30 = (void *)((unsigned __int64)v30 & -(__int64)(Size != 0));
    v41[6] = __PAIR64__(v14, v26);
    v41[7] = v39 & -(__int64)(v14 != 0);
    LODWORD(v41[8]) = Size;
    v41[9] = v30;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v41[7], v14))
      && (!Size || (v41[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v41[3])
      && (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&v41[4])
      && (!v41[5]
       || (v26 = 0,
           (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&v41[5], 4u, &v26)))
      && (LODWORD(v23) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v41, 0x50u, &v24, v23) != -1) )
    {
      if ( Size )
      {
        v20 = (char *)v41[9];
        if ( (unsigned __int64)Size + v41[9] > MmUserProbeAddress || (unsigned __int64)Size + v41[9] < v41[9] )
          *(_BYTE *)MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, v20);
        memmove(v30, KernelPtr, Size);
      }
      v10 = v24;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v27 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v31;
    a1->pvScan0 = v32;
  }
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v10;
}
