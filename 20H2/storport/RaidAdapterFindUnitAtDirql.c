/*
 * XREFs of RaidAdapterFindUnitAtDirql @ 0x1C0005A60
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016DD0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     StorFindDictionary @ 0x1C0005ABC (StorFindDictionary.c)
 */

__int64 __fastcall RaidAdapterFindUnitAtDirql(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = 0LL;
  if ( (int)StorFindDictionary(
              a1 + 160,
              ((((unsigned __int8)a2 << 8) | (unsigned int)BYTE1(a2)) << 8) | (unsigned __int64)BYTE2(a2),
              &v4) >= 0 )
    return v4 - 72;
  return v2;
}
