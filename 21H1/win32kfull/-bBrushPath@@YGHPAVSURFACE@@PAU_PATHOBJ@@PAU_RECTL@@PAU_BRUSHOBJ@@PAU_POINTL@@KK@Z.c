/*
 * XREFs of ?bBrushPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238BB9
 * Callers:
 *     ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843 (-EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30 (-bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 */

int __userpurge bBrushPath@<eax>(
        _DWORD *a1@<ecx>,
        struct SURFACE *a2,
        struct _PATHOBJ *a3,
        struct _RECTL *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v9; // eax
  int v11; // eax
  unsigned int *v12; // edx
  _DWORD *cCurves; // ecx
  unsigned int v14; // edi
  unsigned int v15; // esi
  LONG top; // ecx
  int v17; // eax
  char *v18; // ecx
  void (__stdcall *v19)(int, struct _ROW *, unsigned int, void *); // [esp+0h] [ebp-44h]
  void *v20; // [esp+4h] [ebp-40h]
  _DWORD v21[7]; // [esp+Ch] [ebp-38h] BYREF
  unsigned int v22; // [esp+28h] [ebp-1Ch]
  unsigned int v23; // [esp+2Ch] [ebp-18h]
  unsigned int v24; // [esp+30h] [ebp-14h]
  unsigned int v25; // [esp+34h] [ebp-10h]
  unsigned int *v26; // [esp+38h] [ebp-Ch]
  int v27; // [esp+3Ch] [ebp-8h]

  v9 = a1[15];
  if ( v9 && v9 <= 6 || !bUMPDSecurityGateEx() )
  {
    v11 = a1[15];
    v21[6] = 0;
    v27 = v11;
    v12 = (&aulMulFormat)[v11];
    v21[2] = a1[12];
    v21[4] = a1[13];
    v26 = v12;
    cCurves = (_DWORD *)a3[2].cCurves;
    v21[3] = cCurves[8];
    v21[5] = cCurves[7];
    v14 = (_DWORD)v12 * cCurves[5];
    v24 = v14;
    v15 = cCurves[6];
    v25 = v15;
    top = a4->top;
    v17 = (_DWORD)v12 * a4->left;
    v23 = top;
    v22 = v17;
    if ( v17 < 0 )
      v22 = v14 - ~v17 % v14 - 1;
    if ( top < 0 )
      v23 = v15 - ~top % v15 - 1;
    v18 = (char *)a5 + 3 * v27;
    v21[0] = *(&apfnPatRect + (_DWORD)v18);
    v21[1] = *(&apfnPatRow + (_DWORD)v18);
    return bEngFastFillEnum(
             (struct EPATHOBJ *)a6,
             (struct _RECTL *)vBrushPathEnum,
             (unsigned int)vBrushPathEnumRow,
             (void (__stdcall *)(struct _RECTL *, unsigned int, void *))v21,
             v19,
             v20);
  }
  else
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fastfill.cxx:%d:bBrushPath:Invalid surface format.\n",
        250);
    return 0;
  }
}
