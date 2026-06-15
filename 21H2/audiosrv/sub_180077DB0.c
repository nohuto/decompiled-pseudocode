/*
 * XREFs of sub_180077DB0 @ 0x180077DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180077DB0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~0x100u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 656));
  }
}
