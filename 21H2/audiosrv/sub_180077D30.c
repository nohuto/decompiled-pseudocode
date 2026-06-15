/*
 * XREFs of sub_180077D30 @ 0x180077D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180077D30(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~0x80u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 680));
  }
}
