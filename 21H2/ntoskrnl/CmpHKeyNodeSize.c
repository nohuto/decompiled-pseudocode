/*
 * XREFs of CmpHKeyNodeSize @ 0x14053E93C
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmpNameSize @ 0x1406AD650 (CmpNameSize.c)
 */

__int64 CmpHKeyNodeSize()
{
  return (unsigned int)(unsigned __int16)CmpNameSize() + 76;
}
