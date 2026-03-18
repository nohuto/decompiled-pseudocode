/*
 * XREFs of ?GetRenderingEffect@CWARPDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x1800DCDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CWARPDrawListEntry::GetRenderingEffect(CWARPDrawListEntry *this)
{
  return (CWARPDrawListEntry *)((char *)this - 32);
}
