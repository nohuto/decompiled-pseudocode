/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x1402EF73C
 * Callers:
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x1405403D0 (MiDbgCopyMemory.c)
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
