/*
 * XREFs of CmpFreezeHive @ 0x1405DF460
 * Callers:
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpSearchForOpenSubKeys @ 0x1405DF4D8 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x1405E0DB8 (CmpRecordUnloadEventForHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
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
    *(_BYTE *)(v2 + 2936) = 1;
    *(_QWORD *)(v2 + 2928) = a1;
  }
  return (unsigned int)v5;
}
