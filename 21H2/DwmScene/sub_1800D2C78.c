/*
 * XREFs of sub_1800D2C78 @ 0x1800D2C78
 * Callers:
 *     sub_1800D2AD0 @ 0x1800D2AD0 (sub_1800D2AD0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800CF238 @ 0x1800CF238 (sub_1800CF238.c)
 *     sub_1800CF64C @ 0x1800CF64C (sub_1800CF64C.c)
 *     sub_1800D3404 @ 0x1800D3404 (sub_1800D3404.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2C78(__int64 *a1, __int64 *a2)
{
  unsigned int *v4; // rax
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-28h] BYREF
  __int128 v18; // [rsp+48h] [rbp-20h] BYREF

  sub_180067E20((__int64)a1, a2);
  v18 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int128 *, __int64))(*a1 + 56))(a1, &v18, *a2);
  v4 = (unsigned int *)a1[14];
  if ( v4 )
    v5 = v4[5];
  else
    v5 = 0;
  if ( v4 )
    v6 = v4[6];
  else
    v6 = 0;
  if ( v4 )
    v7 = v4[4];
  else
    v7 = 0LL;
  if ( v4 )
    v8 = v4[2];
  else
    v8 = 0LL;
  sub_1800CF238((void (__fastcall ****)(_QWORD, _QWORD))v18, a1[17], v8, v7, v6, v5);
  v9 = sub_18007040C(*a2);
  v17 = v9;
  sub_1800CF64C(a1 + 15, (__int64)&v16, &v17);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v16 + 40), (__int64 *)&v18);
  v10 = a1[14];
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 24);
  else
    v11 = 0;
  if ( v11 == 2 )
    sub_1800D3404(a1, *a2);
  result = sub_180068014((__int64)a1, v9);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
