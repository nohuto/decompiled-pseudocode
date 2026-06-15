/*
 * XREFs of sub_18007B09C @ 0x18007B09C
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007B09C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x400000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x400000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 216));
  }
}
