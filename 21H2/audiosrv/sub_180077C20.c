/*
 * XREFs of sub_180077C20 @ 0x180077C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180077C20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~0x10u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 752));
  }
}
