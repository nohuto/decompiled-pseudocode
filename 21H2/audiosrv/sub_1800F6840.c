/*
 * XREFs of sub_1800F6840 @ 0x1800F6840
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 *     sub_1800F665C @ 0x1800F665C (sub_1800F665C.c)
 *     sub_1800F6794 @ 0x1800F6794 (sub_1800F6794.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800F6840(__int64 a1, const WCHAR *a2, DWORD a3, const BYTE *a4, DWORD cbData)
{
  LSTATUS v8; // eax
  signed int v9; // ebx
  int v10; // edx
  LSTATUS v11; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  v8 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)(a1 + 1432), 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  if ( v9 < 0 )
  {
    v10 = 452;
LABEL_9:
    sub_18004BD84((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v9);
    goto LABEL_11;
  }
  v11 = RegSetValueExW(hKey, a2, 0, a3, a4, cbData);
  v9 = v11;
  if ( v11 > 0 )
    v9 = (unsigned __int16)v11 | 0x80070000;
  if ( v9 < 0 )
  {
    v10 = 455;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_11:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v9;
}
