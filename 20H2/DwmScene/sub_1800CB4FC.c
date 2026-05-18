/*
 * XREFs of sub_1800CB4FC @ 0x1800CB4FC
 * Callers:
 *     sub_180028F70 @ 0x180028F70 (sub_180028F70.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 * Callees:
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CB4FC(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf

  sub_18006294C((__int64)a1, 1, 0);
  sub_18006294C((__int64)a1, 2, 0);
  sub_18006294C((__int64)a1, 4, 0);
  v6 = *a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  sub_1800CB1A4(a1, v9, v8, v7, a3, 0LL);
  result = sub_1800CAC58(a1, a2);
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 )
  {
    v12 = _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
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
  return result;
}
