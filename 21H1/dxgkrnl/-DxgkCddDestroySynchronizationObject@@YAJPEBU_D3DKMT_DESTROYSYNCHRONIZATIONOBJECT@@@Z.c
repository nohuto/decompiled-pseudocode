/*
 * XREFs of ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0153D40
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0006D00 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0007844 (--1CAdapter@@IEAA@XZ.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C0062C60 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCddDestroySynchronizationObject(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 0, a3);
}
