/*
 * XREFs of ?GetBitmap@CWARPDrawListEntry@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x1801A2550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CDrawListBitmap *__fastcall CWARPDrawListEntry::GetBitmap(CWARPDrawListEntry *this, int a2)
{
  const struct CDrawListBitmap *result; // rax

  result = (CWARPDrawListEntry *)((char *)this + 344);
  if ( a2 != 1 )
    return (CWARPDrawListEntry *)((char *)this + 240);
  return result;
}
