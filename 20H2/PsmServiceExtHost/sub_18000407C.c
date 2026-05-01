/*
 * XREFs of sub_18000407C @ 0x18000407C
 * Callers:
 *     sub_180004070 @ 0x180004070 (sub_180004070.c)
 * Callees:
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800790C4 @ 0x1800790C4 (sub_1800790C4.c)
 */

__int64 __fastcall sub_18000407C(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, int a6)
{
  __int64 v6; // rbx
  __int64 v10; // r14
  bool v11; // zf
  __int64 v12; // rax
  int v13; // edi
  DWORD v14; // r14d
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  int v23; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0LL;
  v21 = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A02D6, 0, 0, 2u, &v27);
  v10 = 0LL;
  if ( a5 )
    v20 = *a5;
  else
    v20 = 0LL;
  sub_18000B7F8(TlsValue);
  if ( (unsigned int)(a3 - 1) <= 2 )
  {
    if ( (unsigned int)(a4 - 1) > 0x1AFE )
    {
      v13 = -1073741582;
      goto LABEL_17;
    }
    if ( a3 == 2 )
    {
      if ( (a4 & 0xFFFFFF00) == 0xD00 )
      {
LABEL_11:
        if ( a5 && !*a5 )
        {
          v13 = -1073741581;
          goto LABEL_17;
        }
        v12 = sub_1800229F0(a1, v21);
        v10 = v12;
        if ( !v12 )
        {
          v13 = -1073741275;
          goto LABEL_17;
        }
        v13 = sub_180004214(v12, a3, a4, (_DWORD)a5, a6);
        if ( v13 >= 0 )
          v13 = 0;
        goto LABEL_15;
      }
      v11 = (a4 & 0xFFFFFF00) == 5120;
    }
    else
    {
      v11 = a6 == 0;
    }
    if ( !v11 )
    {
      v13 = -1073741776;
      goto LABEL_17;
    }
    goto LABEL_11;
  }
  v13 = -1073741583;
LABEL_15:
  if ( v10 )
    sub_1800274E0(v10);
LABEL_17:
  v14 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
  {
    if ( a5 )
      v6 = *a5;
    v25 = v20;
    v22 = a6;
    v24 = v6;
    v23 = a4;
    v19[0] = a3;
    LODWORD(v20) = v13;
    sub_1800790C4(
      v15,
      (unsigned int)&unk_18009F97D,
      v16,
      v17,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)v19,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v22);
  }
  return (unsigned int)v13;
}
