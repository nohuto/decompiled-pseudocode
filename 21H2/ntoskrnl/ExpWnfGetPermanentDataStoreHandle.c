/*
 * XREFs of ExpWnfGetPermanentDataStoreHandle @ 0x140621320
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C9E88 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStoreHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _BOOL8 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax

  v6 = (unsigned int)(a2 - 2) <= 1;
  v7 = *(_QWORD *)(a1 + 8 * v6 + 64);
  if ( v7 )
  {
    *a4 = v7;
    return 0LL;
  }
  result = ExpWnfGetPermanentDataStoreHandleByScopeId(*(unsigned int *)(a1 + 16), a2, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v6 + 64), 0LL, 0LL) )
      ZwClose(0LL);
    *a4 = *(_QWORD *)(a1 + 8 * v6 + 64);
    return 0LL;
  }
  return result;
}
