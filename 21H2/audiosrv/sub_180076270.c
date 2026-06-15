/*
 * XREFs of sub_180076270 @ 0x180076270
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x1800B7BD0 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_180076270(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 64));
  }
}
