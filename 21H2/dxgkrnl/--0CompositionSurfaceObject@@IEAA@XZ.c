/*
 * XREFs of ??0CompositionSurfaceObject@@IEAA@XZ @ 0x1C001CD28
 * Callers:
 *     ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C001CCC0 (-ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionO.c)
 * Callees:
 *     ??0CInterval@CPresentRate@@QEAA@XZ @ 0x1C00206E0 (--0CInterval@CPresentRate@@QEAA@XZ.c)
 */

CompositionSurfaceObject *__fastcall CompositionSurfaceObject::CompositionSurfaceObject(CompositionSurfaceObject *this)
{
  CPresentRate::CInterval *v2; // rdi
  __int64 v3; // rsi
  CompositionSurfaceObject *result; // rax

  *(_QWORD *)this = &CompositionSurfaceObject::`vftable'{for `DxgkCompositionObject'};
  v2 = (CompositionSurfaceObject *)((char *)this + 96);
  v3 = 2LL;
  *((_QWORD *)this + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 5) = &CCompositionSurface::`vftable';
  do
  {
    CPresentRate::CInterval::CInterval(v2);
    v2 = (CPresentRate::CInterval *)((char *)v2 + 8);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 18) = 0LL;
  result = this;
  *((_BYTE *)this + 152) = 0;
  return result;
}
