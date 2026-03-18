/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x14078CC84
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
