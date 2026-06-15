/*
 * XREFs of sub_18007AFF1 @ 0x18007AFF1
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AFF1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x2000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x2000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 144));
  }
}
