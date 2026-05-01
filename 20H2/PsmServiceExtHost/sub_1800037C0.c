/*
 * XREFs of sub_1800037C0 @ 0x1800037C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800680C0 @ 0x1800680C0 (sub_1800680C0.c)
 */

int __fastcall sub_1800037C0(__int64 a1, __int64 a2)
{
  int result; // eax
  DWORD v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  DWORD ProcessId; // ebx
  DWORD v8; // eax
  int v9; // r8d
  int v10; // r9d
  DWORD v11; // [rsp+40h] [rbp-E8h] BYREF
  DWORD v12; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-38h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1EF4, 0, 0, 2u, &v16);
  sub_1800038AC(a2);
  result = dword_1800B3218;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470(&dword_1800B3218, 8LL);
    if ( (_BYTE)result )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 56) - 32LL);
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) - 32LL);
      ProcessId = GetProcessId(*(HANDLE *)(a2 + 72));
      v8 = GetProcessId(*(HANDLE *)(a2 + 64));
      v13 = v5;
      v12 = v8;
      v14 = v6;
      v11 = ProcessId;
      result = sub_1800680C0(
                 (unsigned int)&dword_1800B3218,
                 (unsigned int)&unk_1800A1F1A,
                 v9,
                 v10,
                 (__int64)&v12,
                 (__int64)&v11,
                 (__int64)&v14,
                 (__int64)&v13);
    }
  }
  v4 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v4, 0LL);
  }
  return result;
}
