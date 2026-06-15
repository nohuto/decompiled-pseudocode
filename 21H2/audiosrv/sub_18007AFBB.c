/*
 * XREFs of sub_18007AFBB @ 0x18007AFBB
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AFBB(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x400) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x400u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 120));
  }
}
