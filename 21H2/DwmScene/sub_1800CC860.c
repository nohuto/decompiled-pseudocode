/*
 * XREFs of sub_1800CC860 @ 0x1800CC860
 * Callers:
 *     sub_180091B68 @ 0x180091B68 (sub_180091B68.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800CC478 @ 0x1800CC478 (sub_1800CC478.c)
 *     sub_1800CC6F4 @ 0x1800CC6F4 (sub_1800CC6F4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CC860(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 **v6; // r14
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18007040C(*a2);
    v5 = result;
    v6 = (__int64 **)(a1 + 16);
    v7 = (__int64 *)a1[16];
    v8 = (__int64 *)v7[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= (unsigned int)result )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == *v6 || (unsigned int)result < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = *v6;
    if ( v7 == *v6 )
    {
      sub_180067E20((__int64)a1, a2);
      v17 = 0LL;
      sub_1800CC478(*a2, (__int64 *)&v17);
      v9 = v17;
      v14 = 0LL;
      v10 = a1[15];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = a1[15];
      }
      *(_QWORD *)&v14 = a1[14];
      *((_QWORD *)&v14 + 1) = v10;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 40LL))(v9, &v14);
      v16 = v5;
      sub_1800CC6F4(a1 + 16, (__int64)&v15, &v16);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v15 + 40), &v17);
      result = sub_180068014((__int64)a1, v5);
      v11 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
      if ( *((_QWORD *)&v17 + 1) )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF);
        v13 = v12 == 1;
        result = (unsigned int)(v12 - 1);
        if ( v13 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          result = (unsigned int)_InterlockedDecrement(v11 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
  }
  return result;
}
