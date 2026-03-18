/*
 * XREFs of ?bPaintPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@KHK@Z @ 0x23A012
 * Callers:
 *     ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843 (-EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30 (-bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 */

int __userpurge bPaintPath@<eax>(
        EPATHOBJ *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SURFACE *a3,
        unsigned int a4,
        struct _RECTL *a5,
        struct EPATHOBJ *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // eax
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // eax
  void (__stdcall *v15)(int, struct _ROW *, unsigned int, void *); // [esp+0h] [ebp-20h]
  void *v16; // [esp+4h] [ebp-1Ch]
  void (__stdcall *v17)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, char); // [esp+8h] [ebp-18h] BYREF
  void (__stdcall *v18)(struct _ROW *, unsigned int, int, unsigned __int8 *, unsigned int, int, unsigned int); // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h]
  unsigned int *v20; // [esp+14h] [ebp-Ch]
  unsigned int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v10 = a2[15];
  if ( (!v10 || v10 > 6) && bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fastfill.cxx:%d:bPaintPath:Invalid surface format.\n",
        116);
    return 0;
  }
  v12 = a2[15];
  v13 = a4;
  v20 = (&aulShiftFormat)[v12];
  switch ( v12 )
  {
    case 1:
      if ( a4 )
        v13 = -1;
      break;
    case 2:
      v13 = (16 * a4) | a4;
      goto LABEL_13;
    case 3:
LABEL_13:
      v13 |= v13 << 8;
LABEL_14:
      v13 |= v13 << 16;
      break;
    case 4:
      goto LABEL_14;
  }
  v22 = a2[12];
  v14 = a2[13];
  v21 = v13;
  v19 = v14;
  if ( a5 )
  {
    if ( v12 == 5 )
    {
      v17 = (void (__stdcall *)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, char))vSolidXorRect24;
      v18 = vSolidXorRow24;
    }
    else
    {
      v17 = vSolidXorRect1;
      v18 = vSolidXorRow1;
    }
  }
  else if ( v12 == 5 )
  {
    v17 = (void (__stdcall *)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, char))vSolidFillRect24;
    v18 = vSolidFillRow24;
  }
  else if ( a2[111] )
  {
    v22 = a2[111];
    v17 = (void (__stdcall *)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, char))vSolidFillRectWithCallback;
    v18 = vSolidFillRowWithCallback;
  }
  else
  {
    v17 = vSolidFillRect1;
    v18 = vSolidFillRow1;
  }
  return bEngFastFillEnum(
           (int)a3,
           a1,
           a6,
           (struct _RECTL *)vPaintPathEnum,
           (struct _RECTL *)vPaintPathEnumRow,
           (void (__stdcall *)(struct _RECTL *, unsigned int, void *))&v17,
           v15,
           v16);
}
