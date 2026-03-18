/*
 * XREFs of ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800C3D30
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C39B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 914) )
    return *((_QWORD *)this + 77) != 0LL;
  return result;
}
