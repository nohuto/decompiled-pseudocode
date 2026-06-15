/*
 * XREFs of sub_180079A30 @ 0x180079A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180079A30(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~0x100u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 3000));
  }
}
