/*
 * XREFs of sub_1800C62F4 @ 0x1800C62F4
 * Callers:
 *     sub_1800C6634 @ 0x1800C6634 (sub_1800C6634.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 (__fastcall **__fastcall sub_1800C62F4(__int64 a1))()
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = off_180155048;
  *(_QWORD *)(a1 + 8) = off_180155028;
  *(_QWORD *)(a1 + 16) = off_180154FF8;
  *(_QWORD *)(a1 + 24) = off_180154FC8;
  *(_QWORD *)(a1 + 32) = off_180154FA0;
  *(_QWORD *)(a1 + 984) = off_180154F80;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x2Cu, (__int64)&unk_18015DEF0, a1);
  }
  v2 = *(_QWORD *)(a1 + 1032);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 992));
  return sub_180006524(a1);
}
