/*
 * XREFs of sub_1C00125E0 @ 0x1C00125E0
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0011530 @ 0x1C0011530 (sub_1C0011530.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0013DA0 @ 0x1C0013DA0 (sub_1C0013DA0.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014280 @ 0x1C0014280 (sub_1C0014280.c)
 *     sub_1C005C07C @ 0x1C005C07C (sub_1C005C07C.c)
 *     sub_1C005C198 @ 0x1C005C198 (sub_1C005C198.c)
 *     sub_1C005C2E8 @ 0x1C005C2E8 (sub_1C005C2E8.c)
 *     sub_1C005C3DC @ 0x1C005C3DC (sub_1C005C3DC.c)
 *     sub_1C005C500 @ 0x1C005C500 (sub_1C005C500.c)
 *     sub_1C005C614 @ 0x1C005C614 (sub_1C005C614.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

NTSTATUS sub_1C00125E0(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, ...)
{
  va_list v4; // r8
  ULONG v5; // r9d
  ULONGLONG v6; // rdx
  ULONG v7; // ecx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+40h] [rbp-C8h] BYREF
  va_list va; // [rsp+120h] [rbp+18h] BYREF

  va_start(va, ActivityId);
  sub_1C001D340(UserData, 0LL, 160LL);
  va_copy(v4, va);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      break;
    v7 = *((_DWORD *)v4 + 2);
    v4 += 16;
    if ( !v7 || v5 >= 0xA )
      break;
    v8 = v5++;
    UserData[v8].Ptr = v6;
    UserData[v8].Size = v7;
    *(&UserData[0].Reserved + 1 * v8) = 0;
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
