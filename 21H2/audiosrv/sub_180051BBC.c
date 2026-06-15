/*
 * XREFs of sub_180051BBC @ 0x180051BBC
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180007EE0 @ 0x180007EE0 (sub_180007EE0.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051DF0 @ 0x180051DF0 (sub_180051DF0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051BBC(__int64 a1, HKEY *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // edi
  LPCWSTR v6; // rdi
  unsigned int ValueW; // eax
  unsigned __int64 v8; // rax
  void *pvData; // rax
  unsigned int v10; // eax
  char v11; // al
  void *v12; // rcx
  HKEY v13; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // esi
  HKEY hkey; // [rsp+40h] [rbp-88h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-80h] BYREF
  int i; // [rsp+4Ch] [rbp-7Ch]
  void *v21; // [rsp+50h] [rbp-78h]
  LPCWSTR lpSubKey[2]; // [rsp+58h] [rbp-70h] BYREF
  char v23; // [rsp+68h] [rbp-60h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  RPC_STATUS v25; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v26; // [rsp+E8h] [rbp+20h]

  *a2 = 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v15 = -2147019873;
    sub_18004BD84((int)retaddr, 3504, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147019873);
    return v15;
  }
  v4 = RpcImpersonateClient(0LL);
  v25 = v4;
  lpSubKey[1] = (LPCWSTR)&v25;
  v23 = 1;
  if ( v4 && v4 != 1725 )
  {
    if ( v4 > 0 )
      v15 = (unsigned __int16)v4 | 0x80070000;
    else
      v15 = v4;
    sub_18004BD84((int)retaddr, 3510, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v15);
    if ( !v25 )
      RpcRevertToSelf();
    return v15;
  }
  v26 = 0;
  v26 = sub_180007EE0(*(unsigned __int16 **)(a1 + 48));
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    sub_180003E08(lpSubKey, (__int64)&qword_18019F818);
    sub_18001B4A0((__int64 *)lpSubKey, (__int64)L"%x_%d", v26, v5);
    hkey = 0LL;
    v6 = lpSubKey[0];
    ValueW = RegOpenKeyExW(*(HKEY *)(a1 + 64), lpSubKey[0], 0, 0x20019u, &hkey);
    if ( ValueW == 2 )
    {
      if ( hkey )
        RegCloseKey(hkey);
      sub_180006A30((volatile signed __int32 *)v6 - 6);
      pcbData = 0;
      sub_180003E08(lpSubKey, (__int64)&qword_18019F818);
      sub_18001B4A0((__int64 *)lpSubKey, (__int64)L"%x_%d", v26, 0LL);
      JUMPOUT(0x18009C984LL);
    }
    if ( ValueW )
    {
      v16 = 3533LL;
LABEL_30:
      v17 = sub_1800CA660(retaddr, v16, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", ValueW);
      goto LABEL_32;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      v16 = 3536LL;
      goto LABEL_30;
    }
    v8 = 2 * (((unsigned __int64)pcbData >> 1) + 1);
    if ( !is_mul_ok(((unsigned __int64)pcbData >> 1) + 1, 2uLL) )
      v8 = -1LL;
    pvData = (void *)sub_18006A1B0(v8, &unk_18019F848);
    v21 = pvData;
    if ( !pvData )
      break;
    v10 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    if ( v10 )
    {
      v17 = sub_1800CA660(retaddr, 3541LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v10);
      sub_18006A148(v21, 2LL);
      goto LABEL_32;
    }
    v11 = sub_180051DF0(a1 + 24, v21);
    v12 = v21;
    if ( v11 )
    {
      v13 = hkey;
      hkey = 0LL;
      *a2 = v13;
      sub_18006A148(v12, 2LL);
      if ( hkey )
        RegCloseKey(hkey);
      sub_180006A30((volatile signed __int32 *)v6 - 6);
      if ( !v25 )
        RpcRevertToSelf();
      return 0LL;
    }
    sub_18006A148(v21, 2LL);
    if ( hkey )
      RegCloseKey(hkey);
    sub_180006A30((volatile signed __int32 *)v6 - 6);
    v5 = i + 1;
  }
  v17 = -2147024882;
  sub_18004BD84((int)retaddr, 3539, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147024882);
LABEL_32:
  if ( hkey )
    RegCloseKey(hkey);
  sub_180006A30((volatile signed __int32 *)v6 - 6);
  if ( !v25 )
    RpcRevertToSelf();
  return v17;
}
