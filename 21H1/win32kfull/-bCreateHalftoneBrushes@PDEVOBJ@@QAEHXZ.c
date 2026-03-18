/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ @ 0x1E98A3
 * Callers:
 *     _PDEVOBJ_bCreateHalftoneBrushesWrap@4 @ 0x1E9AB3 (_PDEVOBJ_bCreateHalftoneBrushesWrap@4.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     _HT_CreateStandardMonoPattern@8 @ 0x1BA618 (_HT_CreateStandardMonoPattern@8.c)
 */

int __thiscall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  int v2; // esi
  void *v3; // eax
  void *v4; // eax
  int v5; // edi
  volatile unsigned int *v7; // [esp+1Ch] [ebp-48h]
  unsigned int v8; // [esp+20h] [ebp-44h]
  int v9; // [esp+28h] [ebp-3Ch]
  int StandardMonoPattern; // [esp+2Ch] [ebp-38h]
  int v11; // [esp+30h] [ebp-34h] BYREF
  char v12; // [esp+34h] [ebp-30h]
  int v13; // [esp+38h] [ebp-2Ch]
  int v14; // [esp+3Ch] [ebp-28h] BYREF
  int v15; // [esp+40h] [ebp-24h]
  int v16; // [esp+44h] [ebp-20h]
  int v17; // [esp+48h] [ebp-1Ch]
  _DWORD v18[6]; // [esp+4Ch] [ebp-18h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !PDEVOBJ::pDevHTInfo(this) && !PDEVOBJ::bEnableHalftone(this, 0) )
    return 0;
  v2 = 0;
  v9 = 908;
  do
  {
    v17 = 0;
    BYTE2(v14) = 4;
    LOWORD(v14) = 1;
    HIBYTE(v14) = byte_25D410[v2];
    LOWORD(v15) = 3848;
    v3 = PDEVOBJ::pDevHTInfo(this);
    StandardMonoPattern = HT_CreateStandardMonoPattern((int)v3, (int)&v14);
    if ( StandardMonoPattern <= 0 )
      break;
    v18[1] = (unsigned __int16)v16;
    v18[2] = HIWORD(v16);
    v18[3] = 0;
    v18[4] = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v18[0] = 1;
    v18[5] = 1;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v18, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( !v11
      || (v12 |= 1u,
          HmgSetOwner(*(_DWORD *)(v11 + 20), 0, 5),
          ++v2,
          *(_DWORD *)(v9 + *(_DWORD *)this) = *(_DWORD *)(v11 + 20),
          v9 += 4,
          v17 = *(_DWORD *)(v11 + 44),
          v4 = PDEVOBJ::pDevHTInfo(this),
          HT_CreateStandardMonoPattern((int)v4, (int)&v14) != StandardMonoPattern) )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v11);
      break;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
  }
  while ( v9 < 932 );
  if ( v2 < 6 )
  {
    if ( v2 > 0 )
    {
      v5 = 4 * v2 + 908;
      do
      {
        v5 -= 4;
        --v2;
        bDeleteSurface(*(_DWORD *)(v5 + *(_DWORD *)this));
      }
      while ( v2 > 0 );
    }
    return 0;
  }
  SETFLAG((volatile signed __int32 *)(*(_DWORD *)this + 24), 1, 256, v7, v8);
  return 1;
}
