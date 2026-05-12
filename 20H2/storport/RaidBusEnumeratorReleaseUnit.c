/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C0017014
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0011E1C (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016904 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016DD0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0017068 (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 1056));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 684) = 0;
  }
  return result;
}
