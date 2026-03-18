/*
 * XREFs of CmpFreezeHive @ 0x14069E368
 * Callers:
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpSearchForOpenSubKeys @ 0x14069E3E0 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x14069FB88 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe(a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  else
  {
    CmpSearchForOpenSubKeys(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2944) = 1;
    *(_QWORD *)(v2 + 2936) = a1;
  }
  return (unsigned int)v5;
}
