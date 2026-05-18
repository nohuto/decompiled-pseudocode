/*
 * XREFs of sub_1800A495C @ 0x1800A495C
 * Callers:
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     sub_1800A02A0 @ 0x1800A02A0 (sub_1800A02A0.c)
 *     sub_1800A4E64 @ 0x1800A4E64 (sub_1800A4E64.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A495C(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  v4 = (__int64 *)sub_1800A4E64(a1, &v9);
  v5 = (unsigned int)sub_1800A02A0(*v4, a2);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v7, v5) )
    LODWORD(v5) = -1;
  return (unsigned int)v5;
}
