/*
 * XREFs of sub_180078EA0 @ 0x180078EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078EA0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x1000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2336));
  }
}
