/*
 * XREFs of CmpHKeyNodeSize @ 0x1404EAC24
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     CmpNameSize @ 0x1406B9ECC (CmpNameSize.c)
 */

__int64 CmpHKeyNodeSize()
{
  return (unsigned int)(unsigned __int16)CmpNameSize() + 76;
}
