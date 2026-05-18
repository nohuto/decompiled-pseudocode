/*
 * XREFs of sub_1800AA3D4 @ 0x1800AA3D4
 * Callers:
 *     sub_1800AD1E0 @ 0x1800AD1E0 (sub_1800AD1E0.c)
 *     sub_1800AD434 @ 0x1800AD434 (sub_1800AD434.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800AA3D4(__int64 a1, int a2)
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
      sub_18000FD48(v7);
      v5 = (unsigned int)sub_18000FD48(v6);
      sub_1800CB940((unsigned int)pExceptionObject, v5, 465, (unsigned int)v7, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return *(_DWORD *)(a1 + 4 * v3 + 280) != 0;
}
