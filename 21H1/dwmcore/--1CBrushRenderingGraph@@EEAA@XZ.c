/*
 * XREFs of ??1CBrushRenderingGraph@@EEAA@XZ @ 0x1800999A4
 * Callers:
 *     ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x1800CCE70 (--_GCBrushRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180021930 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18009A9D4 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  CRenderingTechnique *v5; // rcx
  CCompiledEffectCache *v6; // rcx

  v2 = *((_BYTE *)this + 199) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v6 = (CCompiledEffectCache *)*((_QWORD *)this + 23);
    if ( v6 )
      CCompiledEffectCache::`scalar deleting destructor'(v6);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v5 = *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * i);
    if ( v5 )
      CRenderingTechnique::`scalar deleting destructor'(v5, a2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
