/*
 * XREFs of sub_180009888 @ 0x180009888
 * Callers:
 *     sub_180009064 @ 0x180009064 (sub_180009064.c)
 *     sub_180009280 @ 0x180009280 (sub_180009280.c)
 *     sub_180009348 @ 0x180009348 (sub_180009348.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009888(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  bool v7; // cc
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = (_QWORD *)(a1 + 16);
    do
    {
      v4 = v3[1];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = (volatile signed __int32 *)(*v3 - 24LL);
      v6 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
      v7 = v6 <= 1;
      result = (unsigned int)(v6 - 1);
      if ( v7 )
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
      v3 += 4;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
