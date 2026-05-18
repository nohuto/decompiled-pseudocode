/*
 * XREFs of sub_18008CA30 @ 0x18008CA30
 * Callers:
 *     sub_18008B704 @ 0x18008B704 (sub_18008B704.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 * Callees:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008C828 @ 0x18008C828 (sub_18008C828.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008CA30(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int32 *v8; // rdi

  sub_1800670E0(a1 + 16);
  if ( a4 )
    sub_18008C828(a1, a2, a4);
  else
    sub_18008D440(*a3, a2);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
