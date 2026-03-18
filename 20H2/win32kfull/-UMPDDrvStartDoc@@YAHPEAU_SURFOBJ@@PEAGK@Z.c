/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C0152F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00721AC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007274C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C010C450 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02ABE28 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  int v4; // esi
  UMPDOBJ *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+44h] [rbp-35h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  void *v17; // [rsp+50h] [rbp-29h] BYREF
  void *v18; // [rsp+58h] [rbp-21h] BYREF
  UMPDOBJ *v19; // [rsp+60h] [rbp-19h] BYREF
  __int128 v20; // [rsp+68h] [rbp-11h] BYREF
  struct _SURFOBJ *v21[2]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int16 *v22[2]; // [rsp+88h] [rbp+Fh] BYREF

  v14 = 1;
  v16 = 0;
  v15 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v7 = v19;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  *(_OWORD *)v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  if ( !v19 )
    goto LABEL_10;
  if ( !*((_DWORD *)v19 + 106) )
  {
LABEL_3:
    *(_QWORD *)&v20 = 0x2300000030LL;
    v21[0] = *(struct _SURFOBJ **)v7;
    v21[1] = a1;
    v22[0] = a2;
    LODWORD(v22[1]) = a3;
    if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), &v21[1])
      || !(unsigned int)UMPDOBJ::ThunkStringW(v7, v22)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v7, &v20, 0x30u, &v14, Size) == -1)
      || (v8 = 1, !v14) )
    {
      v8 = 0;
    }
    goto LABEL_7;
  }
  v14 = 56;
  if ( a2 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = 2 * v10 + 2;
    if ( v11 + 7 >= v11 && ((v11 + 7) & 0xFFFFFFF8) + 56 >= 0x38 )
    {
      v14 = ((v11 + 7) & 0xFFFFFFF8) + 56;
      goto LABEL_17;
    }
LABEL_10:
    v8 = 0;
    goto LABEL_8;
  }
LABEL_17:
  v12 = UMPDOBJ::bThunkLargeBitmap(v19, a1, &v17, &v18, &v16, &v15, &v14);
  v4 = v15;
  v8 = v12;
  v14 = v12;
  if ( v12 )
    goto LABEL_3;
LABEL_7:
  if ( v16 )
  {
    if ( v4 )
      UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
    a1->pvBits = v17;
    a1->pvScan0 = v18;
  }
LABEL_8:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v8;
}
