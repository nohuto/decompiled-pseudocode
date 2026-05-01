/*
 * XREFs of sub_18000EC88 @ 0x18000EC88
 * Callers:
 *     sub_18000C340 @ 0x18000C340 (sub_18000C340.c)
 *     sub_18000C520 @ 0x18000C520 (sub_18000C520.c)
 *     sub_18000C800 @ 0x18000C800 (sub_18000C800.c)
 *     sub_18000CB60 @ 0x18000CB60 (sub_18000CB60.c)
 *     sub_18000D3F8 @ 0x18000D3F8 (sub_18000D3F8.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 *     sub_18000DE3C @ 0x18000DE3C (sub_18000DE3C.c)
 *     sub_18000E230 @ 0x18000E230 (sub_18000E230.c)
 *     sub_18002D560 @ 0x18002D560 (sub_18002D560.c)
 *     sub_18002D7D0 @ 0x18002D7D0 (sub_18002D7D0.c)
 *     sub_18002FBB8 @ 0x18002FBB8 (sub_18002FBB8.c)
 *     sub_1800300B8 @ 0x1800300B8 (sub_1800300B8.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000EC88(__int64 a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    v2 = *(volatile signed __int32 **)a1;
    result = (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 && v2 )
    {
      if ( *((_DWORD *)v2 + 1) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
      result = j_j__o_free(v2, 8LL);
    }
  }
  else
  {
    v4 = *(volatile signed __int32 **)a1;
    if ( v4 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0LL;
  return result;
}
