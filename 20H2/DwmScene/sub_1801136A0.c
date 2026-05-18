/*
 * XREFs of sub_1801136A0 @ 0x1801136A0
 * Callers:
 *     sub_1801122E0 @ 0x1801122E0 (sub_1801122E0.c)
 *     sub_180112400 @ 0x180112400 (sub_180112400.c)
 *     sub_180112520 @ 0x180112520 (sub_180112520.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112910 @ 0x180112910 (sub_180112910.c)
 *     sub_180112A90 @ 0x180112A90 (sub_180112A90.c)
 *     sub_180112D40 @ 0x180112D40 (sub_180112D40.c)
 *     sub_1801130A0 @ 0x1801130A0 (sub_1801130A0.c)
 *     sub_180113220 @ 0x180113220 (sub_180113220.c)
 *     sub_1801134D0 @ 0x1801134D0 (sub_1801134D0.c)
 *     sub_180113750 @ 0x180113750 (sub_180113750.c)
 *     sub_180113890 @ 0x180113890 (sub_180113890.c)
 *     sub_180113B20 @ 0x180113B20 (sub_180113B20.c)
 *     sub_180113CB0 @ 0x180113CB0 (sub_180113CB0.c)
 *     sub_1801140B0 @ 0x1801140B0 (sub_1801140B0.c)
 *     sub_1801141F0 @ 0x1801141F0 (sub_1801141F0.c)
 *     sub_1801143C0 @ 0x1801143C0 (sub_1801143C0.c)
 *     sub_1801148B0 @ 0x1801148B0 (sub_1801148B0.c)
 *     sub_180114A00 @ 0x180114A00 (sub_180114A00.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1801136A0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  signed __int64 v2; // rdx
  unsigned __int64 result; // rax

  while ( 1 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), 0LL);
    if ( (unsigned int)result == 0x7FFFFFFFLL )
      break;
    v1 = HIDWORD(result);
    if ( (unsigned int)result == 9LL
      || (unsigned int)result == 99LL
      || (unsigned int)result == 999LL
      || (unsigned int)result == 9999LL
      || (unsigned int)result == 99999LL
      || (unsigned int)result == 999999LL
      || (unsigned int)result == 9999999LL
      || (unsigned int)result == 99999999LL
      || (unsigned int)result == 999999999LL )
    {
      ++v1;
    }
    if ( v1 > *(_QWORD *)(a1 + 152) )
      break;
    v2 = ((unsigned int)result + 1LL) | (v1 << 32);
    if ( result == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v2, result) )
      return v2;
  }
  return result;
}
