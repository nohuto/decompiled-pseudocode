/*
 * XREFs of sub_180117098 @ 0x180117098
 * Callers:
 *     sub_180115870 @ 0x180115870 (sub_180115870.c)
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180115420 @ 0x180115420 (sub_180115420.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180117098(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_18000FE28(v3);
      sub_180115420(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_18000FE28(v3);
      sub_180115420(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
