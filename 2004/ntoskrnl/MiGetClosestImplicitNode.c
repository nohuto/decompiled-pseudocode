/*
 * XREFs of MiGetClosestImplicitNode @ 0x1402594C0
 * Callers:
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C1E2C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140C4DC98 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
