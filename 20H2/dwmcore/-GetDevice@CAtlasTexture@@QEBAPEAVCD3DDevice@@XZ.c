/*
 * XREFs of ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ @ 0x180249A38
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18024962C (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180249904 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180249C6C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CAtlasTexture::GetDevice(CAtlasTexture *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
