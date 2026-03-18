/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800C7428
 * Callers:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800420FC (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800AB15C (--1CVisual@@MEAA@XZ.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x18020DF10 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    operator delete((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
