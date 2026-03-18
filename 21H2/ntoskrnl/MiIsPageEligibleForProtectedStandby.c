/*
 * XREFs of MiIsPageEligibleForProtectedStandby @ 0x140276DE4
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsPageEligibleForProtectedStandby(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  char v4; // r8
  _BOOL8 result; // rax

  result = 0;
  if ( !_bittest64((const signed __int64 *)(a2 + 40), 0x35u) && !(unsigned int)MiIsPfnFromSlabAllocation(a2) )
  {
    if ( v2 )
    {
      v4 = *(_BYTE *)(v3 + 35);
      if ( (v4 & 0x50) == 0
        && *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL))
        && (v4 & 7u) < 5 )
      {
        return 1;
      }
    }
  }
  return result;
}
