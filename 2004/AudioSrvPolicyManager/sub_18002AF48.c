/*
 * XREFs of sub_18002AF48 @ 0x18002AF48
 * Callers:
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 */

ULONG sub_18002AF48()
{
  DWORD LastError; // eax
  __int64 v1; // r8
  ULONG result; // eax
  char v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x2Au, &stru_180044DE8);
  }
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &dword_180050008, 4, &v3) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      LastError = GetLastError();
      sub_180025690(*((_QWORD *)off_18004F000 + 2), 0x2Bu, v1, LastError);
    }
    dword_180050008 = 1;
  }
  result = sub_180027B9C(0, 0LL, &v4);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    return sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x2Cu, &stru_180044DE8, dword_180050008);
  }
  return result;
}
