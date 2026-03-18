/*
 * XREFs of CmosGetOpRegionType @ 0x1C004F308
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C004F130 (CmosConfigSpaceHandler.c)
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     CmosTranslatePNPIDToEnum @ 0x1C004F3A0 (CmosTranslatePNPIDToEnum.c)
 */

__int64 __fastcall CmosGetOpRegionType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  AMLIIsNamedChildPresent(*(__int64 **)(a3 + 56), 1145653343);
  result = ACPIGet(
             *(__int64 **)(**(_QWORD **)(a3 + 56) + 104LL),
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
