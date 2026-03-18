/*
 * XREFs of ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1C015A470
 * Callers:
 *     <none>
 * Callees:
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C00117DC (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DxgkCddPopWorkerThreadOfOwner(PERESOURCE *a1, PERESOURCE *a2)
{
  if ( a1 )
    DXGADAPTER::PopWorkerThreadOfExclusiveOwner(a1);
  if ( a2 )
  {
    if ( a1 != a2 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(a2);
  }
}
