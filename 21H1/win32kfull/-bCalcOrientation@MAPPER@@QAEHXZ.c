/*
 * XREFs of ?bCalcOrientation@MAPPER@@QAEHXZ @ 0x8AE80
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 * Callees:
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A (-lSignum@EFLOAT@@QAEJXZ.c)
 */

int __thiscall MAPPER::bCalcOrientation(int **this)
{
  int v2; // edx
  int *v3; // edi
  int result; // eax
  int v5; // ebx
  struct XDCOBJ *v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // edx
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int *v13; // ecx
  int v14; // edx
  int v15; // eax
  EFLOAT *v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-8h]
  int v19; // [esp+20h] [ebp-4h]

  v2 = (int)this[55];
  v19 = v2;
  if ( (v2 & 0x1000) != 0 )
  {
    v3 = (int *)this[1][2];
    this[41] = v3;
    if ( v3 )
    {
      v5 = **this;
      v18 = v5;
      if ( (*(_DWORD *)(*(_DWORD *)(v5 + 1020) + 340) & 0x1002) == 2 )
      {
        v2 = v19;
        if ( (*(_DWORD *)(v5 + 240) > 0) - (*(int *)(v5 + 240) < 0) != (*(_DWORD *)(v18 + 264) > 0)
                                                                     - (*(int *)(v18 + 264) < 0) )
          this[41] = (int *)-(int)v3;
      }
    }
    goto LABEL_3;
  }
  v6 = (struct XDCOBJ *)*this;
  if ( DC::bWorldToDeviceIdentity((DC *)**this) || (v2 & 0x40) != 0 )
  {
    this[41] = (int *)this[1][3];
LABEL_3:
    result = 1;
    this[55] = (int *)((unsigned int)&loc_80000 | v2);
    return result;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, v6, 0x204u);
  v8 = EFLOAT::lSignum(v16);
  v19 = EFLOAT::lSignum((EFLOAT *)(v7 + 8));
  v11 = EFLOAT::lSignum((EFLOAT *)(v9 + 16));
  v12 = EFLOAT::lSignum((EFLOAT *)(v10 + 24));
  v13 = *this;
  v18 = v12;
  if ( (*(_BYTE *)(*(_DWORD *)(*v13 + 1020) + 340) & 0x40) != 0 )
  {
    v11 = -v11;
    v18 = -v12;
  }
  v17 = this[1][3];
  if ( v17 % 900 )
    return 0;
  v14 = 1;
  if ( (v11 + v19) | (v8 - v18) | (v8 ^ ~v19) & 1 )
    return 0;
  v15 = (v11 & 0xA8C) + v17 + (v8 & 0x708) + (v19 & 0x384);
  this[41] = (int *)v15;
  if ( v15 >= 3600 )
    this[41] = (int *)(v15 - 3600);
  this[55] = (int *)((unsigned int)&loc_80000 | (unsigned int)this[55]);
  return v14;
}
