/*
 * XREFs of sub_180078D20 @ 0x180078D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078D20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x200) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x200u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2408));
  }
}
