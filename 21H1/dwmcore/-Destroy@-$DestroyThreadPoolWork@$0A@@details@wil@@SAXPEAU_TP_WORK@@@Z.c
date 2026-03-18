/*
 * XREFs of ?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18023FE2C
 * Callers:
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z @ 0x18023E54C (--_G-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180241F3C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolWork<0>::Destroy(struct _TP_WORK *a1)
{
  WaitForThreadpoolWorkCallbacks(a1, 1);
  CloseThreadpoolWork(a1);
}
