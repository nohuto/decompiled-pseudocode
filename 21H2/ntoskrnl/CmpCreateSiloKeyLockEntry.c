/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x14080FD5C
 * Callers:
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
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
