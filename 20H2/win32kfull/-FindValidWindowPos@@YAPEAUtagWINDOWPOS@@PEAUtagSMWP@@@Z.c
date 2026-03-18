/*
 * XREFs of ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047B3C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00C8500 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWINDOWPOS *__fastcall FindValidWindowPos(struct tagSMWP *a1)
{
  int v1; // eax
  _QWORD *v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  v1 = 0;
  if ( *((int *)a1 + 7) <= 0 )
    return 0LL;
  v2 = (_QWORD *)*((_QWORD *)a1 + 5);
  v3 = *((int *)a1 + 7);
  v4 = v2;
  v5 = 0LL;
  while ( !*v4 )
  {
    ++v1;
    ++v5;
    v4 += 21;
    if ( v5 >= v3 )
      return 0LL;
  }
  return (struct tagWINDOWPOS *)&v2[21 * v1];
}
