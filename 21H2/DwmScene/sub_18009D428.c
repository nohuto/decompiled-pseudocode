/*
 * XREFs of sub_18009D428 @ 0x18009D428
 * Callers:
 *     sub_180014650 @ 0x180014650 (sub_180014650.c)
 *     sub_18009A240 @ 0x18009A240 (sub_18009A240.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_18010A040 @ 0x18010A040 (sub_18010A040.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 *     sub_180111E90 @ 0x180111E90 (sub_180111E90.c)
 * Callees:
 *     sub_18009D4B4 @ 0x18009D4B4 (sub_18009D4B4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009D428(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v6 = *a2;
  *((_QWORD *)&v6 + 1) = v3;
  result = sub_18009D4B4(a1, 0LL, &v6);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
