/*
 * XREFs of ?XLATEOBJ_RGB16_555ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02BE160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_RGB16_555ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, __int16 a3)
{
  FLONG flXlate; // r9d
  __int64 v4; // r8
  __int64 v5; // rcx
  char v6; // cl
  __int64 v7; // rax

  flXlate = a1[3].flXlate;
  v4 = a2[a3 & 0x7FFF];
  if ( (flXlate & 0x800) != 0 )
  {
    v5 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v5 == ppalDefault )
    {
      v6 = v4 - 20;
      if ( (unsigned __int8)v4 < 0xAu )
        v6 = v4;
      LOBYTE(v4) = v6;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v7 = *(_QWORD *)(v5 + 80);
      else
        v7 = *(_QWORD *)(v5 + 72);
      LOBYTE(v4) = *(_BYTE *)(v7 + v4 + 4);
    }
  }
  return v4;
}
