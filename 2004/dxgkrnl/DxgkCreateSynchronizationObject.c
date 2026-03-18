/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C010EC10
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010C750 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObject(ULONG64 a1)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1u, 1LL, 0LL);
}
