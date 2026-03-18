/*
 * XREFs of ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x180251440
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x18024F91C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180254CBC (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180256CA4 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseInteropTextures(CHolographicManager *this)
{
  CHolographicInteropTexture **i; // rbx

  for ( i = (CHolographicInteropTexture **)*((_QWORD *)this + 18); i != *((CHolographicInteropTexture ***)this + 19); ++i )
    CHolographicInteropTexture::ReleaseResources(*i);
}
