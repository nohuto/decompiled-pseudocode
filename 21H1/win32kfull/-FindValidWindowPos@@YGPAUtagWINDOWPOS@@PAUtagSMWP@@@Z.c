/*
 * XREFs of ?FindValidWindowPos@@YGPAUtagWINDOWPOS@@PAUtagSMWP@@@Z @ 0x327CC
 * Callers:
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWINDOWPOS *__thiscall FindValidWindowPos(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  struct tagWINDOWPOS *result; // eax

  v1 = this[4];
  v2 = 0;
  if ( v1 <= 0 )
    return 0;
  for ( result = (struct tagWINDOWPOS *)this[6]; !*(_DWORD *)result; result = (struct tagWINDOWPOS *)((char *)result + 128) )
  {
    if ( ++v2 >= v1 )
      return 0;
  }
  return result;
}
