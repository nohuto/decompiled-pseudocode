/*
 * XREFs of sub_1800C9EE0 @ 0x1800C9EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C9B00 @ 0x1800C9B00 (sub_1800C9B00.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800C9EE0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_1800C9B00(a3, v9);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  v6 = v4[1];
  v4[1] = 0LL;
  v7 = (volatile signed __int32 *)v9[1];
  a2[1] = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a2;
}
