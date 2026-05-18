/*
 * XREFs of sub_180092C20 @ 0x180092C20
 * Callers:
 *     sub_180092744 @ 0x180092744 (sub_180092744.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180091370 @ 0x180091370 (sub_180091370.c)
 *     sub_180092F44 @ 0x180092F44 (sub_180092F44.c)
 *     sub_180093148 @ 0x180093148 (sub_180093148.c)
 *     sub_180093254 @ 0x180093254 (sub_180093254.c)
 *     sub_18009342C @ 0x18009342C (sub_18009342C.c)
 *     sub_18009359C @ 0x18009359C (sub_18009359C.c)
 *     sub_1800936D4 @ 0x1800936D4 (sub_1800936D4.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_180093A44 @ 0x180093A44 (sub_180093A44.c)
 *     sub_180093B70 @ 0x180093B70 (sub_180093B70.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180092C20(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD v12[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v13[5]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+88h] [rbp-1h] BYREF

  if ( !a3 || !a2 )
  {
    sub_18000FD48(v12);
    v10 = sub_18000FD48(v13);
    sub_180091370(pExceptionObject, v10, 842, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( *(_DWORD *)(a1 + 304) == 2 )
  {
    sub_18000FD48(v13);
    v11 = sub_18000FD48(v12);
    sub_180091370(pExceptionObject, v11, 847, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_18000FD48(v12);
    v9 = sub_18000FD48(v13);
    sub_180091370(pExceptionObject, v9, 852, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 304) = 2;
  sub_18006294C(a1, 4, 1);
  *(_DWORD *)(a1 + 292) = a5;
  *(_DWORD *)(a1 + 296) = a5;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 120) = a3;
  *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
  *(_WORD *)(a1 + 308) = 0;
  result = sub_1800936D4(a1, 0LL, a3);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180092F44(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 1) != 0 )
    result = sub_180093A44(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 2) != 0 )
    result = sub_180093B70(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 1;
    result = sub_180093254(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  else if ( (a5 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    result = sub_180093148(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_18009359C(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180093800(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_18009342C(a1, 0LL, 0LL, *(unsigned int *)(a1 + 124));
  return result;
}
