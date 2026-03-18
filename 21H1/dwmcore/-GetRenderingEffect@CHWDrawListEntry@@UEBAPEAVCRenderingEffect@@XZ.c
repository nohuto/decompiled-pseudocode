/*
 * XREFs of ?GetRenderingEffect@CHWDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x1800DCE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CHWDrawListEntry::GetRenderingEffect(CHWDrawListEntry *this)
{
  return (struct CRenderingEffect *)*((_QWORD *)this + 22);
}
