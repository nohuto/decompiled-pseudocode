/*
 * XREFs of bInitPALOBJ @ 0x1C0295648
 * Callers:
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 * Callees:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015620 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C00A56B4 (GreCreateSemaphoreInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00C1DF0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CF540 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 */

__int64 bInitPALOBJ()
{
  unsigned int v0; // edi
  int *v1; // rcx
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  struct HOBJ__ **v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r10
  HPALETTE v14; // rax
  struct PALETTE *v15; // rax
  struct HOBJ__ **v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  HPALETTE *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  __int64 *v20; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  v1 = (int *)&unk_1C024FE1C;
  *(_QWORD *)&pArrayOfSquares.peRed = &unk_1C024FE1C;
  v2 = 0;
  v3 = (int *)&unk_1C024FE1C;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v1++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (PERESOURCE)GreCreateSemaphoreInternal(0);
  if ( !ghsemPalette )
    return 0LL;
  if ( logDefaultPal != 768 || !word_1C0247362 )
    goto LABEL_8;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        (struct _SLIST_ENTRY **)&v16,
                        1,
                        (unsigned __int16)word_1C0247362,
                        dword_1C0247364,
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v16);
LABEL_8:
    v6 = 0LL;
    goto LABEL_9;
  }
  v17 = 1;
  v6 = (unsigned __int64)*v16;
  PALMEMOBJ::~PALMEMOBJ(&v16);
LABEL_9:
  if ( !(unsigned int)bSetStockObject(v6, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)gahStockObjects[15]);
  v7 = (__int64)v20;
  HmgSetOwner(*v20, 0, 8);
  ppalDefault = (struct PALETTE *)v7;
  dclevelDefault = gahStockObjects[15];
  qword_1C0246D28 = v7;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((struct _SLIST_ENTRY **)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v16);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
    return 0LL;
  }
  v9 = v16;
  ppalDefaultSurface8bpp = (struct PALETTE *)v16;
  v10 = *(_DWORD *)(v7 + 28) >> 1;
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      *(_DWORD *)((char *)v9[14] + v11) = *(_DWORD *)(v11 + *(_QWORD *)(v7 + 112));
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v13 = v10;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      *((_DWORD *)v9[14] + v4) = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4LL * (unsigned int)(v4 - 236));
      --v13;
    }
    while ( v13 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ(&v16);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((struct _SLIST_ENTRY **)&v18, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u, 1) )
  {
    v14 = *v18;
    ppalMono = (struct PALETTE *)v18;
    v19 = 1;
    hpalMono = v14;
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((struct _SLIST_ENTRY **)&v16, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v15 = (struct PALETTE *)v16;
      v16 = 0LL;
      v0 = 1;
      gppalRGB = v15;
    }
    PALMEMOBJ::~PALMEMOBJ(&v16);
  }
  PALMEMOBJ::~PALMEMOBJ((struct HOBJ__ ***)&v18);
  return v0;
}
