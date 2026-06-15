/*
 * XREFs of sub_180078B80 @ 0x180078B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078B80(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x20u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 3192));
  }
}
