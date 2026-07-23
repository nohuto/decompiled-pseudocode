/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1407C3878
 * Callers:
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateSiloKeyLockEntry(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *TransientPoolWithTag; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x34374D43u, v2);
  if ( TransientPoolWithTag )
  {
    *TransientPoolWithTag = 0LL;
    TransientPoolWithTag[1] = 0LL;
    TransientPoolWithTag[3] = 0LL;
    TransientPoolWithTag[2] = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return TransientPoolWithTag;
}
