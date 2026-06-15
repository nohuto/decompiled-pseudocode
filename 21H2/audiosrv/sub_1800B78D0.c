/*
 * XREFs of sub_1800B78D0 @ 0x1800B78D0
 * Callers:
 *     sub_1800BA458 @ 0x1800BA458 (sub_1800BA458.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4834 @ 0x1800B4834 (sub_1800B4834.c)
 *     sub_1800B498C @ 0x1800B498C (sub_1800B498C.c)
 *     sub_1800B5C18 @ 0x1800B5C18 (sub_1800B5C18.c)
 *     sub_1800B9164 @ 0x1800B9164 (sub_1800B9164.c)
 */

// Hidden C++ exception states: #wind=1
char *sub_1800B78D0(char *a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v6; // r9
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  sub_1800B4834((__int64)va);
  memset(a1, 0, 0x68uLL);
  *(_DWORD *)a1 = *(_DWORD *)(a2 + 4);
  *((_WORD *)a1 + 2) = *(_WORD *)(a2 + 56);
  *((_QWORD *)a1 + 1) = *(_QWORD *)(a2 + 48);
  if ( (unsigned __int8)sub_1800B9164(0LL, 0LL, a1 + 104) )
    *((_QWORD *)a1 + 2) = a1 + 104;
  *((_QWORD *)a1 + 3) = *(_QWORD *)(a2 + 120);
  if ( (unsigned __int8)sub_1800B9164(*(_QWORD *)(a2 + 136), a1 + 32, a1 + 168) )
    *((_QWORD *)a1 + 5) = a1 + 168;
  v6 = *(_WORD **)(a2 + 16);
  if ( v6 && *v6 )
  {
    sub_1800B5C18(a1 + 296, 96LL);
    *((_QWORD *)a1 + 6) = a1 + 296;
  }
  *((_WORD *)a1 + 28) = *(_WORD *)(a3 + 24);
  *((_QWORD *)a1 + 8) = *(_QWORD *)(a3 + 8);
  if ( qword_18019F930 )
    *((_QWORD *)a1 + 9) = qword_18019F930();
  if ( (unsigned __int8)sub_1800B9164(*(_QWORD *)a3, a1 + 80, a1 + 232) )
    *((_QWORD *)a1 + 11) = a1 + 232;
  *((_QWORD *)a1 + 12) = *(_QWORD *)(a3 + 16);
  sub_1800B498C((__int64)va);
  return a1;
}
