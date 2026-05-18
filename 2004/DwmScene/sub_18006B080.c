/*
 * XREFs of sub_18006B080 @ 0x18006B080
 * Callers:
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006B080(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int64 (__fastcall *v7)(__int64, _BYTE *, _OWORD *); // rax
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // eax
  bool v11; // zf
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-30h]
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF

  sub_18006187C(a1 + 24, a2);
  (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 272LL))(a1, a2, a3);
  v6 = a3[1];
  v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *))(*(_QWORD *)a1 + 136LL);
  v14[0] = *a3;
  v14[1] = v6;
  result = v7(a1, v12, v14);
  v9 = v13;
  if ( v13 )
  {
    v10 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
