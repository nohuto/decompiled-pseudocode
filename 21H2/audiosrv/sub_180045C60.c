/*
 * XREFs of sub_180045C60 @ 0x180045C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800CB468 @ 0x1800CB468 (sub_1800CB468.c)
 */

__int64 __fastcall sub_180045C60(volatile signed __int32 *a1, char a2)
{
  bool v3; // di

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd(a1 + 101, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd(a1 + 100, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 336LL))(a1);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 69LL, &unk_18015DEF0);
    }
LABEL_6:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(qword_18019E640, *((_QWORD *)a1 + 76));
    return 0LL;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB468(
      *((_QWORD *)off_18019C348 + 2),
      70LL,
      &unk_18015DEF0,
      a1,
      *((_DWORD *)a1 + 100),
      *((_DWORD *)a1 + 101));
  }
  if ( v3 )
    goto LABEL_6;
  return 0LL;
}
