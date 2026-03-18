/*
 * XREFs of DxgkDestroyDeviceInternal @ 0x1C00D94D8
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0006D00 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0007844 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00DB418 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyDeviceInternal(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 0);
}
