/*
 * XREFs of ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x1800B8E44
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800B8D28 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::AppendDirtyRegionLists(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx

  v3 = a3;
  v4 = (_QWORD *)((char *)this + 16 * a3 + 1856);
  if ( (_QWORD *)*v4 != v4 )
  {
    v5 = 2 * v3;
    v6 = 16LL * a2;
    **(_QWORD **)((char *)this + v6 + 1864) = *v4;
    *(_QWORD *)(*v4 + 8LL) = *(_QWORD *)((char *)this + v6 + 1864);
    **((_QWORD **)this + v5 + 233) = (char *)this + v6 + 1856;
    *(_QWORD *)((char *)this + v6 + 1864) = *((_QWORD *)this + v5 + 233);
    v4[1] = v4;
    *v4 = v4;
  }
}
