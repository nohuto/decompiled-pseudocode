/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1407B1018
 * Callers:
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14064326C (CmpDereferenceKeyControlBlockUnsafe.c)
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
