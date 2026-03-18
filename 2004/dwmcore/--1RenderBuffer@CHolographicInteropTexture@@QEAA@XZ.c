/*
 * XREFs of ??1RenderBuffer@CHolographicInteropTexture@@QEAA@XZ @ 0x180256C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::RenderBuffer::~RenderBuffer(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 2);
}
