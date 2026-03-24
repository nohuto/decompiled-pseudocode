/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140254F38
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     MiDbgCopyMemory @ 0x1405458A4 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  int v2; // eax
  int v3; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    v2 = *(_DWORD *)(a1 + 376);
  else
    v2 = v3;
  return (v2 & 0x40000) != 0;
}
