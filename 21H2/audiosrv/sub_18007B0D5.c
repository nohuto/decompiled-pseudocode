/*
 * XREFs of sub_18007B0D5 @ 0x18007B0D5
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007B0D5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x2000000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 240));
  }
}
