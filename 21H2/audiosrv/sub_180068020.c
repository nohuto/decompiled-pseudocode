/*
 * XREFs of sub_180068020 @ 0x180068020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180068064 @ 0x180068064 (sub_180068064.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068020(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 32);
  if ( v4 )
  {
    v8 = 0LL;
    (**v4)(v4, &unk_18015B248, &v8);
    v7 = v8;
    if ( v8 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32), a2);
      v7 = v8;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v5 = sub_180068064(a1);
  }
  if ( v5 < 0 )
    sub_18005E8F8((__int64)"CMeterSoftware::GetChannelCount", 801, v5);
  return (unsigned int)v5;
}
