/*
 * XREFs of sub_180066B2C @ 0x180066B2C
 * Callers:
 *     sub_180066D48 @ 0x180066D48 (sub_180066D48.c)
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_180066DEC @ 0x180066DEC (sub_180066DEC.c)
 *     sub_180066F8C @ 0x180066F8C (sub_180066F8C.c)
 *     sub_180067288 @ 0x180067288 (sub_180067288.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

__int64 __fastcall sub_180066B2C(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v10; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v13[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_180067288() )
  {
    sub_18000FE28(v13);
    v10 = (unsigned int)sub_18000FE28(v12);
    sub_180066C28((unsigned int)pExceptionObject, v10, 64, (unsigned int)v13, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  LOBYTE(v4) = a2;
  v5 = *(_QWORD *)sub_180066DEC(a1, v11, v4);
  v6 = sub_180066F8C();
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v5 + 16;
  if ( v8 != v7 )
  {
    do
    {
      *(_QWORD *)(v8 - 16) = *(_QWORD *)v8;
      *(_BYTE *)(v8 - 8) = *(_BYTE *)(v8 + 8);
      v8 += 16LL;
    }
    while ( v8 != v7 );
    v7 = *(_QWORD *)(v6 + 8);
  }
  *(_QWORD *)(v6 + 8) = v7 - 16;
  return sub_18011C36C(a1);
}
