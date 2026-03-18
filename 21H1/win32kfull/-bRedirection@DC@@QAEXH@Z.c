/*
 * XREFs of ?bRedirection@DC@@QAEXH@Z @ 0x9311E
 * Callers:
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 * Callees:
 *     <none>
 */

void __thiscall DC::bRedirection(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = *((_DWORD *)this + 6);
  if ( a2 )
    v3 = v2 | 0x4000;
  else
    v3 = v2 & 0xFFFFBFFF;
  *((_DWORD *)this + 6) = v3;
}
