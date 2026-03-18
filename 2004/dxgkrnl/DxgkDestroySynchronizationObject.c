/*
 * XREFs of DxgkDestroySynchronizationObject @ 0x1C01112A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0112B9C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObject(const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 1);
}
