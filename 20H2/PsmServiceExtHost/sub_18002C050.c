/*
 * XREFs of sub_18002C050 @ 0x18002C050
 * Callers:
 *     sub_18002BBA0 @ 0x18002BBA0 (sub_18002BBA0.c)
 *     sub_180043F30 @ 0x180043F30 (sub_180043F30.c)
 * Callees:
 *     sub_18002C174 @ 0x18002C174 (sub_18002C174.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002C050(__int64 a1, _QWORD *a2)
{
  HANDLE FileW; // rdi
  signed int LastError; // ebx
  signed int v6; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD InBuffer[2]; // [rsp+48h] [rbp-B8h] BYREF
  char OutBuffer[56]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v11; // [rsp+D0h] [rbp-30h]
  int v12; // [rsp+D8h] [rbp-28h]
  int v13; // [rsp+DCh] [rbp-24h]
  signed int *v14; // [rsp+E0h] [rbp-20h]
  int v15; // [rsp+E8h] [rbp-18h]
  int v16; // [rsp+ECh] [rbp-14h]
  WCHAR FileName[264]; // [rsp+F0h] [rbp-10h] BYREF

  sub_18002C174(FileName);
  FileW = CreateFileW(FileName, 0, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL
    || (InBuffer[1] = 0, InBuffer[0] = 8, !DeviceIoControl(FileW, 0x70224u, InBuffer, 8u, OutBuffer, 0x58u, 0LL, 0LL)) )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
  }
  else
  {
    *a2 = v9;
    LastError = 0;
  }
  if ( LastError < 0 && (unsigned int)dword_1800B3250 > 5 )
  {
    v13 = 0;
    v16 = 0;
    v11 = &Uuid;
    v15 = 4;
    v14 = &v6;
    v12 = 16;
    v6 = LastError;
    sub_18002E278((int)&dword_1800B3250, (int)&dword_1800A314C, 0, 0, 4u, &v10);
  }
  if ( FileW != (HANDLE)-1LL )
    CloseHandle(FileW);
  return (unsigned int)LastError;
}
