/*
 * XREFs of sub_18002E618 @ 0x18002E618
 * Callers:
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 * Callees:
 *     sub_18002E6AC @ 0x18002E6AC (sub_18002E6AC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002E618(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  signed int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v6 = sub_18002E6AC(a1, 8LL, &v10);
  if ( v6 < 0 || (v6 = sub_18002E6AC(a1, 24LL, &v11), v6 < 0) )
  {
    v9 = RtlNtStatusToDosError(v6);
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v10 )
      NtDeleteWnfStateName(&v10);
    if ( v11 )
      NtDeleteWnfStateName(&v11);
  }
  else
  {
    v7 = 0;
    *a2 = v10;
    *a3 = v11;
  }
  return v7;
}
