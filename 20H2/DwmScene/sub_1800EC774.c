/*
 * XREFs of sub_1800EC774 @ 0x1800EC774
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_1800EC6C8 @ 0x1800EC6C8 (sub_1800EC6C8.c)
 *     sub_1800EF7D8 @ 0x1800EF7D8 (sub_1800EF7D8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_18009F7A0 @ 0x18009F7A0 (sub_18009F7A0.c)
 *     sub_18009F8D4 @ 0x18009F8D4 (sub_18009F8D4.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800EBAA4 @ 0x1800EBAA4 (sub_1800EBAA4.c)
 *     sub_1800EBCF4 @ 0x1800EBCF4 (sub_1800EBCF4.c)
 *     sub_1800EBD68 @ 0x1800EBD68 (sub_1800EBD68.c)
 *     sub_1800ECD30 @ 0x1800ECD30 (sub_1800ECD30.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1800ED7F8 @ 0x1800ED7F8 (sub_1800ED7F8.c)
 *     sub_1800EFB3C @ 0x1800EFB3C (sub_1800EFB3C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800EC774(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // r15
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // rcx
  const void **v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v27; // [rsp+40h] [rbp-C0h]
  _OWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v33[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v34[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v35[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v36[4]; // [rsp+130h] [rbp+30h] BYREF
  const void *Src; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v38[32]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v39[8]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v40[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v41[8]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v43; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v44[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v45; // [rsp+2B0h] [rbp+1B0h]
  __int16 v46; // [rsp+2C0h] [rbp+1C0h]
  int v47; // [rsp+2C4h] [rbp+1C4h]
  int v48; // [rsp+2C8h] [rbp+1C8h]
  int v49; // [rsp+2CCh] [rbp+1CCh]
  int v50; // [rsp+2D0h] [rbp+1D0h]
  _QWORD v51[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int128 v52; // [rsp+2E8h] [rbp+1E8h]
  __int16 v53; // [rsp+2F8h] [rbp+1F8h]
  unsigned int v54; // [rsp+2FCh] [rbp+1FCh]
  int v55; // [rsp+300h] [rbp+200h]
  int v56; // [rsp+304h] [rbp+204h]
  int v57; // [rsp+308h] [rbp+208h]

  v6 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FD48(v31);
    v23 = sub_18000FD48(v30);
    sub_180027FF4(v39, v23, 125, (__int64)v31, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v39;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_18000FD48(v33);
    v24 = sub_18000FD48(v32);
    sub_180027FF4(v40, v24, 128, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  v7 = a1 + 56;
  if ( (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL == 512 )
  {
    sub_18000FD48(v35);
    v25 = sub_18000FD48(v34);
    sub_180027FF4(v41, v25, 131, (__int64)v35, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  v8 = (unsigned __int16)sub_18009F8D4(*(_QWORD *)(a1 + 1152), (size_t *)a2);
  if ( *(_WORD *)(a1 + 2 * v8 + 128) != 0xFFFF )
  {
    v20 = sub_18009BCB8(&Src, "ShaderPropertyLayout::AddProperty() -- variable '", (_QWORD *)a2);
    v21 = sub_18002C218((__int64)v38, v20, "' is already defined");
    v22 = sub_18000FD48(v36);
    sub_180027FF4(pExceptionObject, v22, 137, v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 == 1 )
  {
    v43 = 0LL;
    v9 = sub_1800A0394(*(_QWORD *)(a1 + 1152), &v26);
    sub_1800EFB3C(*v9, &v43);
    v10 = v27;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v11 = v43;
    if ( (_QWORD)v43 != a1 )
    {
      sub_1800ED08C(v43, a2);
      if ( *(_WORD *)(v11 + 2LL * v12 + 128) == 0xFFFF )
        sub_18009F7A0(*(_QWORD *)(a1 + 1152), a2);
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    v13 = (volatile signed __int32 *)*((_QWORD *)&v43 + 1);
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  if ( v6 == 8 )
  {
    v14 = (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 40LL;
    memset(v28, 0, sizeof(v28));
    v29 = v14;
    sub_1800EBD68((__int64 *)(a1 + 104), (__int64)v28);
    *(_WORD *)(a1 + 2 * v8 + 128) = (__int16)(*(_WORD *)(v7 + 8) - *(_WORD *)v7) / 56;
    v45 = 0LL;
    sub_18001CDF8(v44, a2);
    v46 = v8;
    v47 = 8;
    v48 = v14;
    v49 = 0;
    v50 = a3;
    sub_1800EBCF4((__int64 *)v7, (__int64)v44);
    if ( *((_QWORD *)&v45 + 1) >= 0x10uLL )
    {
      v15 = v44[0];
      if ( (unsigned __int64)(*((_QWORD *)&v45 + 1) + 1LL) >= 0x1000 )
      {
        v15 = *(_QWORD *)(v44[0] - 8LL);
        if ( (unsigned __int64)(v44[0] - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, *((_QWORD *)&v45 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v15);
    }
    sub_1800D5EAC((__int64)v28);
  }
  else
  {
    if ( v6 <= 2 )
    {
      v16 = 1;
    }
    else
    {
      switch ( v6 )
      {
        case 3u:
          v16 = 2;
          break;
        case 4u:
          v16 = 3;
          break;
        case 5u:
        case 6u:
          v16 = 4;
          break;
        case 7u:
          v16 = 16;
          break;
        default:
          v16 = 0;
          break;
      }
    }
    sub_1800ECD30(a1);
    v17 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
    sub_1800EBAA4((__int64 *)(a1 + 80), (unsigned int)(v17 + v16));
    *(_WORD *)(a1 + 2 * v8 + 128) = (__int16)(*(_WORD *)(a1 + 64) - *(_WORD *)(a1 + 56)) / 56;
    v52 = 0LL;
    sub_18001CDF8(v51, a2);
    v53 = v8;
    v54 = v6;
    v55 = v17;
    v56 = 1;
    v57 = a3;
    sub_1800EBCF4((__int64 *)(a1 + 56), (__int64)v51);
    if ( *((_QWORD *)&v52 + 1) >= 0x10uLL )
    {
      v18 = v51[0];
      if ( (unsigned __int64)(*((_QWORD *)&v52 + 1) + 1LL) >= 0x1000 )
      {
        v18 = *(_QWORD *)(v51[0] - 8LL);
        if ( (unsigned __int64)(v51[0] - v18 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v18, *((_QWORD *)&v52 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v18);
    }
  }
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_1800ED7F8(a1, (unsigned __int16)v8, a2);
  return (unsigned __int16)v8;
}
