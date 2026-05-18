/*
 * XREFs of sub_180087A58 @ 0x180087A58
 * Callers:
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180087A58(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  sub_18008933C(a1);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  v5 = *(volatile signed __int32 **)(a1 + 136);
  result = *a2;
  *(_QWORD *)(a1 + 128) = *a2;
  *(_QWORD *)(a1 + 136) = v4;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
