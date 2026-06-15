/*
 * XREFs of sub_180033B60 @ 0x180033B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033BD0 @ 0x180033BD0 (sub_180033BD0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180033B60(__int64 a1, __int64 a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 79LL, &unk_18015DEF0, a2);
  }
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  sub_180033BD0((LPCRITICAL_SECTION)(a1 + 496));
  return 0LL;
}
