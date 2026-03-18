/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180083254
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180082B80 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800838C0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800841B0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // r9
  char *v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = (char *)this + *((int *)this - 1) - 8;
  v2 = (char *)this + *((int *)this + 1);
  v3 = (int)((v2 - v1) >> 2);
  if ( v3 == (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
  {
    v4 = 0LL;
    if ( v3 <= 0 )
      return 1;
    v5 = v1 - v2;
    while ( *(_DWORD *)v2 == *(_DWORD *)&v2[v5] )
    {
      ++v4;
      v2 += 4;
      if ( v4 >= v3 )
        return 1;
    }
  }
  return 0;
}
