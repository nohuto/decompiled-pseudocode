/*
 * XREFs of sub_18007AF1F @ 0x18007AF1F
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AF1F(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~2u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 48));
  }
}
