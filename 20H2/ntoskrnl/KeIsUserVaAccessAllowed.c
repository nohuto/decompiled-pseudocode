/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x1402D8E2C
 * Callers:
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     MiDbgCopyMemory @ 0x140543DA0 (MiDbgCopyMemory.c)
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
