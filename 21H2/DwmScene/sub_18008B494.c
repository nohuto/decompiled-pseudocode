/*
 * XREFs of sub_18008B494 @ 0x18008B494
 * Callers:
 *     sub_18008A4A0 @ 0x18008A4A0 (sub_18008A4A0.c)
 *     sub_18008A50C @ 0x18008A50C (sub_18008A50C.c)
 *     sub_18008AB40 @ 0x18008AB40 (sub_18008AB40.c)
 *     sub_18008F378 @ 0x18008F378 (sub_18008F378.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008B494(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)a1[5];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return unknown_libname_103(a1);
}
