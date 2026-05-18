/*
 * XREFs of sub_180069368 @ 0x180069368
 * Callers:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18006CCB0 @ 0x18006CCB0 (sub_18006CCB0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800A07D4 @ 0x1800A07D4 (sub_1800A07D4.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180069368(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000FE28(v4);
    v2 = (unsigned int)sub_18000FE28(v3);
    sub_1800D1210((unsigned int)pExceptionObject, v2, 70, (unsigned int)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 136) )
    sub_1800A07D4();
}
