/*
 * XREFs of sub_180118F70 @ 0x180118F70
 * Callers:
 *     sub_180117BB0 @ 0x180117BB0 (sub_180117BB0.c)
 *     sub_180117CD0 @ 0x180117CD0 (sub_180117CD0.c)
 *     sub_180117DF0 @ 0x180117DF0 (sub_180117DF0.c)
 *     sub_180117F50 @ 0x180117F50 (sub_180117F50.c)
 *     sub_1801181E0 @ 0x1801181E0 (sub_1801181E0.c)
 *     sub_180118360 @ 0x180118360 (sub_180118360.c)
 *     sub_180118610 @ 0x180118610 (sub_180118610.c)
 *     sub_180118970 @ 0x180118970 (sub_180118970.c)
 *     sub_180118AF0 @ 0x180118AF0 (sub_180118AF0.c)
 *     sub_180118DA0 @ 0x180118DA0 (sub_180118DA0.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_180119160 @ 0x180119160 (sub_180119160.c)
 *     sub_1801193F0 @ 0x1801193F0 (sub_1801193F0.c)
 *     sub_180119580 @ 0x180119580 (sub_180119580.c)
 *     sub_180119980 @ 0x180119980 (sub_180119980.c)
 *     sub_180119AC0 @ 0x180119AC0 (sub_180119AC0.c)
 *     sub_180119C90 @ 0x180119C90 (sub_180119C90.c)
 *     sub_18011A180 @ 0x18011A180 (sub_18011A180.c)
 *     sub_18011A2D0 @ 0x18011A2D0 (sub_18011A2D0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180118F70(__int64 a1)
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
