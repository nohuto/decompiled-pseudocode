/*
 * XREFs of sub_1800F5A14 @ 0x1800F5A14
 * Callers:
 *     sub_180092B20 @ 0x180092B20 (sub_180092B20.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012B84 @ 0x180012B84 (sub_180012B84.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800A5F9C @ 0x1800A5F9C (sub_1800A5F9C.c)
 *     sub_1800F2C18 @ 0x1800F2C18 (sub_1800F2C18.c)
 *     sub_1800F2CE4 @ 0x1800F2CE4 (sub_1800F2CE4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800F5A14(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  signed __int32 v9; // eax
  bool v10; // zf
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  _QWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v22[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v23[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v24[32]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v25[8]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v26[8]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( !sub_1800F2CE4(*(_QWORD *)(a1 + 16), a2) )
  {
    v12 = sub_180012B84(a1 + 16);
    v13 = sub_180012B84(v12 + 1152);
    v14 = sub_1800A5F9C(v13, v23, a2);
    v15 = sub_1800494AC((__int64)v24, (__int64)"Property does not exist: ", (__int64)v14);
    v16 = sub_18000FE28(v18);
    sub_18002D8C4(v25, v16, 433, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v25;
  }
  v6 = (_DWORD *)sub_1800F2C18(*(_QWORD *)(a1 + 16), a2);
  if ( v6[9] != 8 )
  {
    sub_18000FE28(v20);
    v17 = sub_18000FE28(v19);
    sub_18002D8C4(v26, v17, 437, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v26;
  }
  if ( v6[12] == 2 )
  {
    sub_18000FE28(v22);
    v11 = sub_18000FE28(v21);
    sub_18002D8C4(pExceptionObject, v11, 442, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(
                      (_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL * (unsigned int)v6[10]),
                      a3);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
