/*
 * XREFs of sub_1800BE4A0 @ 0x1800BE4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

_QWORD *__fastcall sub_1800BE4A0(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 64) )
  {
    v3 = *v1;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0xDu, (__int64)&unk_18016DA10, a1);
      v3 = *v1;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 120LL))(v3, a1);
    *(_DWORD *)(a1 + 64) = 0;
  }
  return sub_180071C14(v1);
}
