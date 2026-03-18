/*
 * XREFs of CmpFreezeHive @ 0x140659420
 * Callers:
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRecordUnloadEventForHive @ 0x1406593A0 (CmpRecordUnloadEventForHive.c)
 *     CmpSearchForOpenSubKeys @ 0x140659498 (CmpSearchForOpenSubKeys.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, void *a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  else
  {
    CmpSearchForOpenSubKeys(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2936) = 1;
    *(_QWORD *)(v2 + 2928) = a1;
  }
  return (unsigned int)v5;
}
