/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00999B0
 * Callers:
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C4020 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     bPolyPolygon @ 0x1C00C4B30 (bPolyPolygon.c)
 *     PATHOBJ_bCloseFigure @ 0x1C00C6FF0 (PATHOBJ_bCloseFigure.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // r8d

  result = *((_QWORD *)this + 1);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 16);
      if ( (v3 & 8) == 0 )
      {
        *(_DWORD *)(v2 + 16) = v3 | 8;
        ++*((_DWORD *)this + 1);
        result = *((_QWORD *)this + 1);
      }
    }
    *(_DWORD *)(result + 80) |= 1u;
    return 1LL;
  }
  return result;
}
