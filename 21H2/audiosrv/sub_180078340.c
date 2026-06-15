/*
 * XREFs of sub_180078340 @ 0x180078340
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078340(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 392));
  }
}
