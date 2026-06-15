/*
 * XREFs of sub_18007AAD5 @ 0x18007AAD5
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AAD5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~4u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 56));
  }
}
