/*
 * XREFs of sub_18008CFC4 @ 0x18008CFC4
 * Callers:
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_18008BF00 @ 0x18008BF00 (sub_18008BF00.c)
 *     sub_1800A038C @ 0x1800A038C (sub_1800A038C.c)
 *     sub_1800A4E64 @ 0x1800A4E64 (sub_1800A4E64.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18008CFC4(_QWORD *a1, int a2, int a3, int a4)
{
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  char result; // al
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-69h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-61h]
  __int64 v17; // [rsp+30h] [rbp-59h]
  volatile signed __int32 *v18; // [rsp+38h] [rbp-51h]
  _BYTE v19[8]; // [rsp+40h] [rbp-49h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-41h]
  _DWORD v21[6]; // [rsp+50h] [rbp-39h] BYREF
  char v22; // [rsp+68h] [rbp-21h]
  __int128 v23; // [rsp+6Ch] [rbp-1Dh]
  __int128 v24; // [rsp+7Ch] [rbp-Dh]
  char v25; // [rsp+8Ch] [rbp+3h]
  bool v26; // [rsp+8Dh] [rbp+4h]
  bool v27; // [rsp+8Eh] [rbp+5h]
  __int16 v28; // [rsp+8Fh] [rbp+6h]
  int v29; // [rsp+94h] [rbp+Bh]

  v8 = (volatile signed __int32 *)a1[18];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a1[18];
  }
  v17 = a1[17];
  v18 = v8;
  v9 = (_QWORD *)sub_1800A4E64(v17, v19);
  v10 = (_QWORD *)sub_1800A038C(*v9);
  v11 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v21[0] = 0;
  v21[3] = 0;
  v21[4] = 0;
  v21[5] = 0;
  v22 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 1;
  v28 = 256;
  v29 = 3;
  v26 = ((a3 - 1) & 0xFFFFFFFD) == 0;
  v27 = (unsigned int)(a3 - 2) <= 1;
  v21[2] = a2;
  v21[1] = a4;
  v12 = a1[21];
  if ( !v12 || (result = sub_18008BF00(*(_QWORD *)(v12 + 112), (__int64)v21)) == 0 )
  {
    sub_18001EE70(v10, &v15, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 21, &v15);
    v14 = v16;
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    return sub_1800C7110(a1[21], v21, 0LL);
  }
  return result;
}
