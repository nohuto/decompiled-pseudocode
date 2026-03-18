/*
 * XREFs of MiFillPageExtraInfo @ 0x14052A9C8
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x14052AA18 (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x14052AB44 (MiLogRemoveWsleEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillPageExtraInfo(unsigned __int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8

  v3 = a3 & 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 |= 1uLL;
    else
      v3 |= 2uLL;
  }
  *a1 = v3;
}
