/*
 * XREFs of sub_18006F63C @ 0x18006F63C
 * Callers:
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006F63C(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax
  __int64 v9; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(
           qword_18019EE48,
           *i,
           *a4);
    if ( v8 < 0
      && off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 33LL, &unk_18015E5F0, (unsigned int)v8);
    }
  }
  v9 = *a4;
  *a4 = 0LL;
  *a1 = v9;
  sub_18000F708(a4);
  return a1;
}
