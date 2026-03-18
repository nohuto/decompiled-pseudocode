/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A9C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0072114 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00721AC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00723BC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007274C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02ABE28 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // edi
  int v11; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  int v16; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v19; // [rsp+40h] [rbp-91h] BYREF
  int v20; // [rsp+44h] [rbp-8Dh] BYREF
  int v21; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-85h]
  void *v23; // [rsp+50h] [rbp-81h] BYREF
  void *v24; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-71h] BYREF
  struct _RECTL *v26; // [rsp+68h] [rbp-69h]
  _QWORD v27[10]; // [rsp+70h] [rbp-61h] BYREF

  v9 = 0;
  v26 = a8;
  v21 = 0;
  v11 = 0;
  v20 = 0;
  v22 = a4;
  v19 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  memset(v27, 0, sizeof(v27));
  v14 = v25;
  if ( v25 )
  {
    if ( !*((_DWORD *)v25 + 106)
      || (v19 = 152,
          v15 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v21, &v20, &v19),
          v11 = v20,
          v16 = v15,
          (v19 = v15) != 0) )
    {
      v27[0] = 0x1F00000050LL;
      v27[2] = *(_QWORD *)v14;
      v27[6] = __PAIR64__(a5, v22);
      v27[7] = __PAIR64__(a7, a6);
      v27[8] = v26;
      LODWORD(v27[9]) = a9;
      v27[3] = a1;
      v27[4] = a2;
      v27[5] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v27[3])
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v27[4], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v27[5], 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v27[8], 0x10u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v27, 0x50u, &v19, Size) == -1)
        || (v16 = 1, !v19) )
      {
        v16 = 0;
      }
    }
    if ( v21 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v23;
      a1->pvScan0 = v24;
    }
    v9 = v16;
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v9;
}
