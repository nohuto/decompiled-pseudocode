/*
 * XREFs of sub_18007B02A @ 0x18007B02A
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007B02A(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x10000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x10000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 168));
  }
}
