/*
 * XREFs of DxgkOpenSynchronizationObject @ 0x1C028F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C015E058 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObject(struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenSynchronizationObjectInternal(a1, 1, a3);
}
