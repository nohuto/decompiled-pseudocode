/*
 * XREFs of sub_180092424 @ 0x180092424
 * Callers:
 *     sub_1800918B0 @ 0x1800918B0 (sub_1800918B0.c)
 * Callees:
 *     sub_1800AA300 @ 0x1800AA300 (sub_1800AA300.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180092424(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rbx
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-50h]
  _BYTE v18[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-40h]
  _QWORD *v20; // [rsp+50h] [rbp-38h]

  v20 = a2;
  v8 = *(__int64 **)(a1 + 200);
  v9 = v8;
  v10 = (__int64 *)v8[1];
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_WORD *)v10 + 14) >= a3 )
    {
      v9 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v9 == v8 || a3 < *((_WORD *)v9 + 14) )
LABEL_8:
    v9 = v8;
  if ( *a2 )
  {
    *((_DWORD *)v9 + 8) = 2;
    v11 = (_QWORD *)sub_1800AA300(*(_QWORD *)(a1 + 136), v16);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)*v11 + 56LL))(*v11, a1, a2, a3);
    v13 = v17;
  }
  else
  {
    *((_DWORD *)v9 + 8) = 3;
    v14 = (_QWORD *)sub_1800AA300(*(_QWORD *)(a1 + 136), v18);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)*v14 + 64LL))(*v14, a1, a4, a3);
    v13 = v19;
  }
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v15 = (volatile signed __int32 *)a2[1];
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
