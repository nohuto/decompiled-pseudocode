/*
 * XREFs of _RtlConnectToSm@16 @ 0x4B35A7D0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwAlpcConnectPort@44 @ 0x4B2F3110 (_ZwAlpcConnectPort@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlConnectToSm(const void **a1, int a2, int a3, int a4)
{
  size_t v5; // esi
  int v6; // [esp+10h] [ebp-168h] BYREF
  int v7; // [esp+14h] [ebp-164h]
  _DWORD v8[6]; // [esp+18h] [ebp-160h] BYREF
  UNICODE_STRING DestinationString; // [esp+30h] [ebp-148h] BYREF
  _DWORD v10[6]; // [esp+38h] [ebp-140h] BYREF
  int v11; // [esp+50h] [ebp-128h]
  _WORD v12[122]; // [esp+54h] [ebp-124h] BYREF
  _DWORD v13[11]; // [esp+148h] [ebp-30h] BYREF

  v7 = a4;
  RtlInitUnicodeString(&DestinationString, L"\\SmApiPort");
  memset(v13, 0, sizeof(v13));
  v13[0] = 0x10000;
  v13[2] = 2;
  LOWORD(v13[3]) = 257;
  v13[4] = 312;
  v13[6] = 9984;
  if ( a1 )
  {
    if ( !a2 || !a3 )
      return -1073741776;
    if ( *(_WORD *)a1 >= 0xF0u )
      return -1073741811;
    v5 = *(unsigned __int16 *)a1;
    memcpy(v12, a1[1], v5);
    v12[v5 >> 1] = 0;
    v11 = a3;
  }
  else
  {
    v11 = 0;
    v12[0] = 0;
  }
  v8[0] = 24;
  v8[1] = 0;
  v8[3] = 512;
  v8[2] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v10[4] = 0;
  v10[0] = 17563892;
  v10[1] = 0;
  v6 = 272;
  return ZwAlpcConnectPort(v7, (int)&DestinationString, (int)v8, (int)v13, 0x20000, 0, (int)v10, (int)&v6, 0, 0, 0);
}
