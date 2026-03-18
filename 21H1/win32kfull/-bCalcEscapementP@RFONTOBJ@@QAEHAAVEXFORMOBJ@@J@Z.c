/*
 * XREFs of ?bCalcEscapementP@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x20906A
 * Callers:
 *     ?bCalcEscapement@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x223E01 (-bCalcEscapement@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

int __thiscall RFONTOBJ::bCalcEscapementP(RFONTOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // eax
  _BYTE v13[8]; // [esp+Ch] [ebp-18h] BYREF
  int v14[2]; // [esp+14h] [ebp-10h] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h]

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this + 396);
  if ( v5 < 0xE10 && (a3 == v5 || a3 == v5 + 1800 || a3 == v5 - 1800) )
  {
    *(_DWORD *)(v4 + 468) = a3;
    v6 = (_DWORD *)(*(_DWORD *)this + 400);
    v7 = (_DWORD *)(*(_DWORD *)this + 472);
    *v7 = *v6++;
    *++v7 = *v6++;
    *++v7 = *v6;
    v7[1] = v6[1];
    v8 = *(_DWORD **)this;
    v8[122] = *(_DWORD *)(*(_DWORD *)this + 416);
    v8[123] = v8[105];
    v9 = *(_DWORD **)this;
    v9[124] = *(_DWORD *)(*(_DWORD *)this + 424);
    v9[125] = v9[107];
    v10 = *(_DWORD *)this;
    *(_DWORD *)(v10 + 504) = 0x40000000;
    *(_DWORD *)(v10 + 508) = 2;
    v11 = *(_DWORD *)this;
    *(_DWORD *)(v11 + 512) = 0;
    *(_DWORD *)(v11 + 516) = 0;
    if ( a3 != *(_DWORD *)(*(_DWORD *)this + 396) )
    {
      EFLOAT::vNegate((EFLOAT *)(*(_DWORD *)this + 472));
      EFLOAT::vNegate((EFLOAT *)(*(_DWORD *)this + 480));
      EFLOAT::vNegate((EFLOAT *)(*(_DWORD *)this + 504));
    }
    return 1;
  }
  *(_DWORD *)(v4 + 468) = -1;
  if ( EXFORMOBJ::bComputeUnits(
         a2,
         a3,
         (struct POINTFL *)(*(_DWORD *)this + 472),
         (struct EFLOAT *)(*(_DWORD *)this + 488),
         (struct EFLOAT *)(*(_DWORD *)this + 496)) )
  {
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = 0;
    EFLOAT::eqCross(&v15, v13, *(_DWORD *)this + 436, *(_DWORD *)this + 400);
    if ( v15 || v16 )
    {
      EFLOAT::eqCross(v14, v13, *(_DWORD *)this + 436, *(_DWORD *)this + 472);
      divff3_c((_DWORD *)(*(_DWORD *)this + 504), v14, &v15);
      EFLOAT::eqCross(v14, v13, *(_DWORD *)this + 472, *(_DWORD *)this + 400);
      divff3_c((_DWORD *)(*(_DWORD *)this + 512), v14, &v15);
      *(_DWORD *)(*(_DWORD *)this + 468) = a3;
      return 1;
    }
  }
  return 0;
}
