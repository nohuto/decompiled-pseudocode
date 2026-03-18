/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C02AA3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00EEDC0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00EEE58 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00EF068 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C00EF11C (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00EF3F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02AD44C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v7; // edi
  int v9; // r15d
  UMPDOBJ *v10; // rbx
  int v11; // eax
  UMPDOBJ *v12; // rcx
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v15; // [rsp+40h] [rbp-99h] BYREF
  int v16; // [rsp+44h] [rbp-95h] BYREF
  int v17; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v19; // [rsp+50h] [rbp-89h] BYREF
  void *v20; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v21; // [rsp+60h] [rbp-79h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-71h]
  struct _RECTL *v23; // [rsp+70h] [rbp-69h]
  _QWORD v24[10]; // [rsp+80h] [rbp-59h] BYREF

  v7 = -1;
  v23 = a4;
  v16 = -1;
  v22 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0LL;
  v20 = 0LL;
  v9 = 0;
  v17 = 0;
  v15 = 0;
  memset(v24, 0, 0x48uLL);
  v10 = v21;
  if ( v21 )
  {
    if ( !*((_DWORD *)v21 + 106) )
      goto LABEL_6;
    if ( a5 + 7 < a5 || ((a5 + 7) & 0xFFFFFFF8) + 120 < 0x78 )
      goto LABEL_18;
    v18 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v11 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v19, &v20, &v17, &v15, &v18);
    v9 = v15;
    if ( v11 )
    {
LABEL_6:
      v24[0] = 0x1900000048LL;
      v24[2] = *(_QWORD *)v10;
      v24[3] = a1;
      v24[5] = v22;
      LODWORD(v24[4]) = a2;
      v24[6] = v23;
      LODWORD(v24[7]) = a5;
      v24[8] = a6 & -(__int64)(a5 != 0);
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v10, (PVOID)(a6 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v24[8], a5) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v24[3]) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                               v10,
                               (UMPDOBJ *)((char *)v10 + 112),
                               (const void **)&v24[5],
                               0x18u,
                               0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v24[6], 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, v24, 0x48u, &v16, Size) != -1 )
                v7 = v16;
            }
          }
        }
      }
    }
    if ( v17 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v19;
      a1->pvScan0 = v20;
    }
  }
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v7;
}
