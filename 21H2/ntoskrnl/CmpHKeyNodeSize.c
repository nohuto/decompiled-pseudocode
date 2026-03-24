/*
 * XREFs of CmpHKeyNodeSize @ 0x1404EC7B4
 * Callers:
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 * Callees:
 *     CmpNameSize @ 0x14069306C (CmpNameSize.c)
 */

__int64 CmpHKeyNodeSize()
{
  return (unsigned int)(unsigned __int16)CmpNameSize() + 76;
}
