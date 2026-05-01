/*
 * XREFs of sub_1800233B4 @ 0x1800233B4
 * Callers:
 *     sub_1800235D0 @ 0x1800235D0 (sub_1800235D0.c)
 * Callees:
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180076DB0 @ 0x180076DB0 (sub_180076DB0.c)
 */

__int64 __fastcall sub_1800233B4(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdi
  int v7; // r8d
  int v8; // r9d
  DWORD v9; // ebx
  unsigned int v10; // eax
  int v11; // ecx
  BOOL v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // ebx
  DWORD v16; // edi
  unsigned int v18; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-104h] BYREF
  int v20; // [rsp+48h] [rbp-100h] BYREF
  __int64 v21; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+F0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0360, 0, 0, 2u, &v23);
  v6 = 0LL;
  memset(TlsValue, 0, 0x88uLL);
  v9 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  v10 = *a3;
  v11 = 65520;
  if ( (*a3 & 0xFFF0) != 0 || (v11 = HIWORD(v10), HIWORD(v10) >= 8u) )
  {
    v15 = -1073741583;
  }
  else
  {
    v8 = 1;
    if ( (v10 & 0x10000) == 0 && (v10 & 1) != 0 )
      goto LABEL_34;
    LOBYTE(v7) = 6;
    if ( (v10 & 0x20000) == 0 && (v10 & 6) != 0 )
      goto LABEL_34;
    if ( (v10 & 0x40000) == 0 && (v10 & 8) != 0 )
      goto LABEL_34;
    v12 = HIWORD(v10) != 0;
    if ( (v10 & 6) >= 6 )
      goto LABEL_34;
    v13 = a3[1];
    if ( (v13 & 1) == 0 )
    {
      if ( v13 )
        goto LABEL_34;
    }
    v11 = 61440;
    if ( (v13 & 0xF000) != 0 )
      goto LABEL_34;
    v11 = (v13 & 0x30) == 0;
    if ( ((v13 & 0xE) == 0) != v11 || *((_BYTE *)a3 + 7) )
      goto LABEL_34;
    if ( (a3[1] & 1) != 0 )
      v12 = 1;
    if ( !v12 )
    {
LABEL_34:
      v15 = -1073741583;
      goto LABEL_26;
    }
    v14 = sub_1800229F0(a1, a2);
    v6 = v14;
    if ( !v14 )
    {
      v15 = -1073741275;
      goto LABEL_26;
    }
    v15 = sub_18001FEC0(v14, a3);
    if ( v15 >= 0 )
      v15 = 0;
  }
  if ( v6 )
    sub_1800274E0(v6);
LABEL_26:
  v16 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v18 = a3[1];
    v19 = *a3;
    v21 = a2;
    v20 = v15;
    sub_180076DB0(v11, (unsigned int)&unk_18009FDD4, v7, v8, (__int64)&v20, (__int64)&v21, (__int64)&v19, (__int64)&v18);
  }
  return (unsigned int)v15;
}
