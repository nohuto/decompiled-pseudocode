/*
 * XREFs of sub_1800AFCA4 @ 0x1800AFCA4
 * Callers:
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 *     sub_1800B2D04 @ 0x1800B2D04 (sub_1800B2D04.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800AFCA4(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+70h] [rbp-48h] BYREF

  v3 = 0LL;
  while ( 1 << v3 != a2 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 3 )
    {
      sub_18000FE28(v7);
      v5 = (unsigned int)sub_18000FE28(v6);
      sub_1800D1210((unsigned int)pExceptionObject, v5, 465, (unsigned int)v7, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return *(_DWORD *)(a1 + 4 * v3 + 280) != 0;
}
