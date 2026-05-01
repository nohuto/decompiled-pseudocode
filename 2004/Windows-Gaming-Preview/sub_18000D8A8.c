/*
 * XREFs of sub_18000D8A8 @ 0x18000D8A8
 * Callers:
 *     sub_18000C0C0 @ 0x18000C0C0 (sub_18000C0C0.c)
 *     sub_18000C800 @ 0x18000C800 (sub_18000C800.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000D8A8(__int64 a1, volatile signed __int32 **a2)
{
  int v3; // esi
  volatile signed __int32 *v4; // r10
  volatile signed __int32 *v5; // rdi

  *a2 = 0LL;
  v3 = 0;
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, volatile signed __int32 **))(*(_QWORD *)qword_18005AE20
                                                                                            + 40LL))(
           qword_18005AE20,
           *((unsigned int *)v4 + 1),
           &xmmword_180050E58,
           a2);
    if ( v3 >= 0 )
    {
      v5 = *(volatile signed __int32 **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v5 )
      {
        if ( *((_DWORD *)v5 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
        j_j__o_free(v5, 8LL);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    *a2 = v4;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v3;
}
