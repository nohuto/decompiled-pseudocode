/*
 * XREFs of sub_180038950 @ 0x180038950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180032D3C @ 0x180032D3C (sub_180032D3C.c)
 *     sub_180037F1C @ 0x180037F1C (sub_180037F1C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180038950(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  signed __int32 v11; // eax
  bool v12; // zf
  __int64 v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-18h] BYREF

  v14 = 0LL;
  v5 = *(_DWORD *)(a1 + 88);
  v6 = *a2;
  v18 = v5;
  sub_180037F1C((__int64 **)(v6 + 120), (__int64)&v16, &v18);
  v7 = v16;
  v8 = *(_QWORD *)(v16 + 48);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 48);
  }
  v15[0] = *(_QWORD *)(v7 + 40);
  v15[1] = v8;
  sub_180018B88(&v14, v15);
  v17 = 0LL;
  sub_180032D3C(v14, &v17);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v17, a3);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF);
    v12 = v11 == 1;
    result = (unsigned int)(v11 - 1);
    if ( v12 )
    {
      v13 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return result;
}
