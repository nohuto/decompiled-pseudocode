/*
 * XREFs of CmpHKeyNodeSize @ 0x1404EC9F4
 * Callers:
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 * Callees:
 *     CmpNameSize @ 0x1405F26FC (CmpNameSize.c)
 */

__int64 CmpHKeyNodeSize()
{
  return (unsigned int)(unsigned __int16)CmpNameSize() + 76;
}
