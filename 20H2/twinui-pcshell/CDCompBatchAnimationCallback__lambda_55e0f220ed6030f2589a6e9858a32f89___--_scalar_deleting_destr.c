/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_scalar_deleting_destructor_ @ 0x1803B01B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1803AFE54 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
