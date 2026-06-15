/*
 * XREFs of s_DestroyHolographicDisplay @ 0x1800F6E00
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHMDManager@@QEAAPEAXI@Z @ 0x1800F683C (--_GCHMDManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall s_DestroyHolographicDisplay(CHMDManager **a1)
{
  CHMDManager *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    CHMDManager::`scalar deleting destructor'(v2);
  return 0LL;
}
