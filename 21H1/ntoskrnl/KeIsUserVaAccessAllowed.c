/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x14033487C
 * Callers:
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x14053FD80 (MiDbgCopyMemory.c)
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
