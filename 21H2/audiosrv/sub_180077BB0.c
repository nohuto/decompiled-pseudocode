/*
 * XREFs of sub_180077BB0 @ 0x180077BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180077BB0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~8u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 776));
  }
}
