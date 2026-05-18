/*
 * XREFs of sub_1800984F0 @ 0x1800984F0
 * Callers:
 *     sub_180098014 @ 0x180098014 (sub_180098014.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_180096C40 @ 0x180096C40 (sub_180096C40.c)
 *     sub_180098814 @ 0x180098814 (sub_180098814.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_180098B24 @ 0x180098B24 (sub_180098B24.c)
 *     sub_180098CFC @ 0x180098CFC (sub_180098CFC.c)
 *     sub_180098E6C @ 0x180098E6C (sub_180098E6C.c)
 *     sub_180098FA4 @ 0x180098FA4 (sub_180098FA4.c)
 *     sub_1800990D0 @ 0x1800990D0 (sub_1800990D0.c)
 *     sub_180099314 @ 0x180099314 (sub_180099314.c)
 *     sub_180099440 @ 0x180099440 (sub_180099440.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800984F0(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
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
    sub_18000FE28(v12);
    v10 = sub_18000FE28(v13);
    sub_180096C40(pExceptionObject, v10, 842, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( *(_DWORD *)(a1 + 304) == 2 )
  {
    sub_18000FE28(v13);
    v11 = sub_18000FE28(v12);
    sub_180096C40(pExceptionObject, v11, 847, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_18000FE28(v12);
    v9 = sub_18000FE28(v13);
    sub_180096C40(pExceptionObject, v9, 852, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 304) = 2;
  sub_18006821C(a1, 4, 1);
  *(_DWORD *)(a1 + 292) = a5;
  *(_DWORD *)(a1 + 296) = a5;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 120) = a3;
  *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
  *(_WORD *)(a1 + 308) = 0;
  result = sub_180098FA4(a1, 0LL, a3);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180098814(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 1) != 0 )
    result = sub_180099314(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 2) != 0 )
    result = sub_180099440(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 1;
    result = sub_180098B24(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  else if ( (a5 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    result = sub_180098A18(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_180098E6C(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_1800990D0(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_180098CFC(a1, 0LL, 0LL, *(unsigned int *)(a1 + 124));
  return result;
}
