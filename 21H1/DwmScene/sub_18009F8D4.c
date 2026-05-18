/*
 * XREFs of sub_18009F8D4 @ 0x18009F8D4
 * Callers:
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18009E4A8 @ 0x18009E4A8 (sub_18009E4A8.c)
 *     sub_1800A02D8 @ 0x1800A02D8 (sub_1800A02D8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009F8D4(__int64 a1, size_t *a2)
{
  __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a2[2] )
  {
    sub_18000FD48(v10);
    v6 = sub_18000FD48(v9);
    sub_180027FF4(pExceptionObject, v6, 478, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v4) = sub_1800A02D8();
  if ( (_WORD)v4 == 511 )
  {
    v4 = *(int *)(a1 + 18488);
    if ( (int)v4 >= 512 )
    {
      sub_18000FD48(v9);
      v7 = sub_18000FD48(v10);
      sub_180027FF4(pExceptionObject, v7, 492, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v4 + 1;
    sub_18009E4A8((__int64 *)(a1 + 2088), (__int64)&v8, a2);
    *(_WORD *)(v8 + 64) = v4;
    sub_180012E34((__int64 *)(32 * v4 + a1 + 2104), (__int64 *)a2);
  }
  return (unsigned __int16)v4;
}
