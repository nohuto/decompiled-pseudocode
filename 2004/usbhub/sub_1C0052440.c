/*
 * XREFs of sub_1C0052440 @ 0x1C0052440
 * Callers:
 *     sub_1C0051F34 @ 0x1C0051F34 (sub_1C0051F34.c)
 *     sub_1C0052290 @ 0x1C0052290 (sub_1C0052290.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 */

__int64 __fastcall sub_1C0052440(unsigned __int16 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  const wchar_t *v5; // r8
  int v7; // r10d
  __int64 v9; // r9
  __int64 result; // rax
  const wchar_t *v11; // r8
  int v12; // [rsp+20h] [rbp-98h]
  __int64 v13; // [rsp+20h] [rbp-98h]
  int v14; // [rsp+28h] [rbp-90h]
  __int128 v15; // [rsp+30h] [rbp-88h] BYREF
  wchar_t Dest[40]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v5 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X&REV_%04X";
  v7 = a1[5];
  v9 = a1[4];
  v14 = a1[6];
  v15 = 0uLL;
  if ( a3 != 1 )
    v5 = L"USB:USB\\VID_%04X&PID_%04X&REV_%04X";
  v12 = v7;
  result = sub_1C00447AC(Dest, 0x50uLL, v5, v9, v12, v14);
  if ( (int)result >= 0 )
  {
    KseQueryDeviceFlags(Dest, L"USB", (char *)&v15 + 8);
    v11 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X";
    if ( a3 != 1 )
      v11 = L"USB:USB\\VID_%04X&PID_%04X";
    LODWORD(v13) = a1[5];
    result = sub_1C00447AC(Dest, 0x50uLL, v11, a1[4], v13);
    if ( (int)result >= 0 )
    {
      result = KseQueryDeviceFlags(Dest, L"USB", &v15);
      v3 = *((_QWORD *)&v15 + 1) | v15;
    }
  }
  *a2 = v3;
  return result;
}
