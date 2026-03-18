/*
 * XREFs of DxgkEvict @ 0x1C014F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C014F6EC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 */

int __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1)
{
  return DxgkEvictInternal(a1, 1, 0LL);
}
