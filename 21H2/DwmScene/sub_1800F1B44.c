/*
 * XREFs of sub_1800F1B44 @ 0x1800F1B44
 * Callers:
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095A24 @ 0x180095A24 (sub_180095A24.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A51A4 @ 0x1800A51A4 (sub_1800A51A4.c)
 *     sub_1800F1374 @ 0x1800F1374 (sub_1800F1374.c)
 *     sub_1800F15C4 @ 0x1800F15C4 (sub_1800F15C4.c)
 *     sub_1800F2600 @ 0x1800F2600 (sub_1800F2600.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800F1B44(__int64 a1, size_t *a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  const void **v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  _QWORD v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  const void *Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int16 v30; // [rsp+E0h] [rbp-20h]
  unsigned int v31; // [rsp+E4h] [rbp-1Ch]
  int v32; // [rsp+E8h] [rbp-18h]
  unsigned int v33; // [rsp+ECh] [rbp-14h]
  int v34; // [rsp+F0h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FE28(v25);
    v16 = sub_18000FE28(Src);
    sub_18002D8C4(v28, v16, 586, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  if ( !a2[2] )
  {
    sub_18000FE28(Src);
    v17 = sub_18000FE28(v25);
    sub_18002D8C4(v28, v17, 589, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  if ( (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL == 512 )
  {
    sub_18000FE28(Src);
    v18 = sub_18000FE28(v25);
    sub_18002D8C4(v28, v18, 592, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  v8 = (unsigned __int16)sub_1800A51A4(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v8 + 128) != 0xFFFF )
  {
    v19 = sub_1800A1588(Src, "ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v20 = sub_180031AE8((__int64)v28, v19, "' is already defined");
    v21 = sub_18000FE28(v25);
    sub_18002D8C4(pExceptionObject, v21, 598, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
  {
    sub_18000FE28(Src);
    v22 = sub_18000FE28(v25);
    sub_18002D8C4(pExceptionObject, v22, 601, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = 1;
  if ( a4 <= 1 )
  {
    sub_18000FE28(Src);
    v23 = sub_18000FE28(v25);
    sub_18002D8C4(pExceptionObject, v23, 604, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800F2600(a1);
  v10 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( a3 > 2 )
  {
    switch ( a3 )
    {
      case 3u:
        v9 = 2;
        break;
      case 4u:
        v9 = 3;
        break;
      case 5u:
      case 6u:
        v9 = 4;
        break;
      case 7u:
        v9 = 16;
        break;
      default:
        v9 = 0;
        break;
    }
  }
  v11 = v10 + v9 * a4;
  if ( v11 > 0x4064 )
  {
    sub_18000FE28(Src);
    v15 = sub_18000FE28(v25);
    sub_18002D8C4(pExceptionObject, v15, 614, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v29 = 0LL;
  sub_180020B7C(v28, (__int64)a2);
  v30 = v8;
  v31 = a3;
  v32 = v10;
  v33 = a4;
  v34 = 0;
  v12 = (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL;
  sub_1800F15C4((__int64 *)(a1 + 56), (__int64)v28);
  *(_WORD *)(a1 + 2 * v8 + 128) = v12;
  sub_1800F1374((__int64 *)(a1 + 80), v11);
  if ( *((_QWORD *)&v29 + 1) >= 0x10uLL )
  {
    v13 = v28[0];
    if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) + 1LL) >= 0x1000 )
    {
      v13 = *(_QWORD *)(v28[0] - 8LL);
      if ( (unsigned __int64)(v28[0] - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, *((_QWORD *)&v29 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return (unsigned __int16)v8;
}
