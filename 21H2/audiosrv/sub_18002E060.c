/*
 * XREFs of sub_18002E060 @ 0x18002E060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_18002EACC @ 0x18002EACC (sub_18002EACC.c)
 *     sub_180050C80 @ 0x180050C80 (sub_180050C80.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_18002E060(__int64 a1, int a2)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  sub_18002E0E0();
  if ( a2 == 2 )
  {
    sub_18002EACC(a1);
    if ( *(_BYTE *)(a1 + 984) )
      sub_180050C80(a1);
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 61LL, &unk_18015DEF0, a1);
  }
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 32LL))(a1 + 32);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 24LL))(a1 + 32, 1LL);
  }
  return result;
}
