/*
 * XREFs of sub_18009F7B4 @ 0x18009F7B4
 * Callers:
 *     sub_1800A3AB0 @ 0x1800A3AB0 (sub_1800A3AB0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18009E3D0 @ 0x18009E3D0 (sub_18009E3D0.c)
 *     sub_1800A02A0 @ 0x1800A02A0 (sub_1800A02A0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009F7B4(__int64 a1, size_t *a2)
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
    sub_180027FF4(pExceptionObject, v6, 419, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v4) = sub_1800A02A0(a1, a2);
  if ( (_DWORD)v4 == -1 )
  {
    v4 = *(int *)(a1 + 2080);
    if ( (int)v4 >= 64 )
    {
      sub_18000FD48(v9);
      v7 = sub_18000FD48(v10);
      sub_180027FF4(pExceptionObject, v7, 433, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v4 + 1;
    sub_18009E3D0((__int64 *)(a1 + 16), (__int64)&v8, a2);
    *(_DWORD *)(v8 + 64) = v4;
    sub_180012E34((__int64 *)(a1 + 32 * (v4 + 1)), (__int64 *)a2);
  }
  return (unsigned int)v4;
}
