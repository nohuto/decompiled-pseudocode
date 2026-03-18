/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0162164
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0008188 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C0162184 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Internal(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 0, a3, a4, 0LL);
}
