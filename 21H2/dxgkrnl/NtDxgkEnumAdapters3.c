/*
 * XREFs of NtDxgkEnumAdapters3 @ 0x1C0174E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0174E30 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 */

int __fastcall NtDxgkEnumAdapters3(struct _D3DKMT_ENUMADAPTERS3 *a1)
{
  return DxgkEnumAdapters3Impl(a1, 1, 1u, UserRequest);
}
