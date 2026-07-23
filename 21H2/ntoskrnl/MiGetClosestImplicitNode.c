/*
 * XREFs of MiGetClosestImplicitNode @ 0x140317220
 * Callers:
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140C4DED8 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
