/*
 * XREFs of sub_180076870 @ 0x180076870
 * Callers:
 *     sub_1800BD620 @ 0x1800BD620 (sub_1800BD620.c)
 * Callees:
 *     sub_180073F64 @ 0x180073F64 (sub_180073F64.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_180075BFC @ 0x180075BFC (sub_180075BFC.c)
 *     sub_1800A0270 @ 0x1800A0270 (sub_1800A0270.c)
 *     sub_1800DD8FC @ 0x1800DD8FC (sub_1800DD8FC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180076870(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  v4 = sub_1800752B4(a1, 1);
  sub_1800DD8FC(v4, 1LL);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_1800A0270();
  sub_180075BFC((_QWORD *)a1, v5);
  result = (unsigned __int64)sub_180073F64((_QWORD *)a1, &v10);
  v7 = v11;
  if ( v11 )
  {
    v8 = _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
