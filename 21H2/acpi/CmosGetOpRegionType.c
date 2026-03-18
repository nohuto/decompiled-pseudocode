/*
 * XREFs of CmosGetOpRegionType @ 0x1C004E2D8
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C004E110 (CmosConfigSpaceHandler.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     CmosTranslatePNPIDToEnum @ 0x1C004E370 (CmosTranslatePNPIDToEnum.c)
 */

__int64 __fastcall CmosGetOpRegionType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  AMLIIsNamedChildPresent(*(__int64 **)(a3 + 56), 1145653343);
  result = ACPIGet(
             *(_QWORD *)(**(_QWORD **)(a3 + 56) + 104LL),
             1145653343,
             671613446,
             0LL,
             0,
             (__int64)CmosTranslatePNPIDToEnum,
             a3,
             a3 + 64,
             0LL);
  if ( (_DWORD)result == 259 )
    return 259LL;
  if ( (int)result >= 0 )
    return CmosTranslatePNPIDToEnum(a1, 0LL, 0LL, a3);
  return result;
}
