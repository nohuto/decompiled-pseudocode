/*
 * XREFs of ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180256060
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18025181C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180256CA4 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x180256E4C (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::DetachFromChannel(
        CHolographicInteropTexture *this,
        CAnimationLoggingManager **a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 10);
  if ( v3 )
    CHolographicManager::RemoveInteropTexture(v3, this);
  CHolographicInteropTexture::ReleaseVisualTree(this);
  CHolographicInteropTexture::ReleaseResources(this);
  CResource::DetachFromChannel(this, a2);
}
