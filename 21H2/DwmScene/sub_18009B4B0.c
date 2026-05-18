/*
 * XREFs of sub_18009B4B0 @ 0x18009B4B0
 * Callers:
 *     sub_1800EBC80 @ 0x1800EBC80 (sub_1800EBC80.c)
 *     sub_180110800 @ 0x180110800 (sub_180110800.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009B4B0(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  _QWORD v15[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v16[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 104);
  if ( a3 >= (*(_QWORD *)(a1 + 112) - v5) / 88 )
  {
    sub_18000FE28(v16);
    v14 = (unsigned int)sub_18000FE28(v15);
    sub_1800D1210((unsigned int)pExceptionObject, v14, 178, (unsigned int)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v6 = (_QWORD *)(v5 + 88 * a3);
  v7 = 0LL;
  *a2 = 0LL;
  switch ( a4 )
  {
    case 0:
      a2[1] = 0LL;
      v8 = v6[4];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a2 = v6[3];
      v7 = v6[4];
      break;
    case 3:
      a2[1] = 0LL;
      v10 = v6[6];
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      *a2 = v6[5];
      v11 = v6[6];
LABEL_12:
      a2[1] = v11;
      return a2;
    case 7:
      a2[1] = 0LL;
      v12 = v6[8];
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      *a2 = v6[7];
      v11 = v6[8];
      goto LABEL_12;
    case 8:
      a2[1] = 0LL;
      v13 = v6[10];
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      *a2 = v6[9];
      v11 = v6[10];
      goto LABEL_12;
  }
  a2[1] = v7;
  return a2;
}
