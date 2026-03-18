/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C019AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObject(struct DXGADAPTER *a1)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1u, 1LL, 0LL, 0LL);
}
