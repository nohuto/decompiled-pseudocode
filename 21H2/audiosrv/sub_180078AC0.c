/*
 * XREFs of sub_180078AC0 @ 0x180078AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078AC0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~8u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 3240));
  }
}
