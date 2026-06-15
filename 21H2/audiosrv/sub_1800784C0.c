/*
 * XREFs of sub_1800784C0 @ 0x1800784C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_1800784C0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x20u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 416));
  }
}
