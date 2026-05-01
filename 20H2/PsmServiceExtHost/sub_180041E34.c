/*
 * XREFs of sub_180041E34 @ 0x180041E34
 * Callers:
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180041E34(_QWORD *a1)
{
  unsigned int v2; // ebx
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+58h] [rbp+10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+18h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\ResourceManager\\Pools", 0, 0x20019u, &hKey)
    || (cbData = 4, RegQueryValueExW(hKey, L"IoCounters", 0LL, &Type, (LPBYTE)&Data, &cbData)) )
  {
    *a1 = -1LL;
LABEL_3:
    v2 = 0;
    goto LABEL_4;
  }
  if ( Type == 4 && cbData == 4 )
  {
    *a1 = Data;
    goto LABEL_3;
  }
  v2 = 1009;
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
