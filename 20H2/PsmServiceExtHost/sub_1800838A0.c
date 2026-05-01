/*
 * XREFs of sub_1800838A0 @ 0x1800838A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_1800836E4 @ 0x1800836E4 (sub_1800836E4.c)
 *     sub_180083F70 @ 0x180083F70 (sub_180083F70.c)
 *     sub_180083FDC @ 0x180083FDC (sub_180083FDC.c)
 *     sub_180084130 @ 0x180084130 (sub_180084130.c)
 *     sub_1800841A0 @ 0x1800841A0 (sub_1800841A0.c)
 */

char __fastcall sub_1800838A0(__int64 *a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ecx
  char v6; // r12
  unsigned __int64 v7; // rbx
  int v8; // ecx
  int v9; // ecx
  int v10; // r14d
  unsigned __int64 v11; // rdi
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v20; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[3]; // [rsp+59h] [rbp-8h] BYREF
  int v22; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v23; // [rsp+60h] [rbp-1h] BYREF
  __int64 v24; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+70h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    LOBYTE(v1) = sub_180010470((__int64)&dword_1800B3218, 64LL);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = sub_18002E278(v3, (unsigned __int8 *)dword_1800A242A, 0LL, 0LL, 2u, &v25);
  }
  v4 = a1[1];
  v5 = *((_DWORD *)a1 + 4);
  v6 = *(_BYTE *)(v4 + 52);
  v7 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v5 )
    goto LABEL_17;
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      sub_1800841A0(a1[1]);
      v10 = sub_180083FDC(v4);
      LOBYTE(v1) = sub_180083F70(v4);
      goto LABEL_18;
    }
    if ( v9 != 1 )
    {
      v10 = -1073741811;
      goto LABEL_18;
    }
LABEL_17:
    v10 = 0;
    goto LABEL_18;
  }
  sub_1800841A0(a1[1]);
  v10 = HamStopActivity(*(_QWORD *)((*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *(_QWORD *)(v4 + 40));
  if ( v10 >= 0 )
  {
    *(_BYTE *)(v4 + 52) = 0;
    v10 = 0;
  }
  LOBYTE(v1) = sub_180083F70(v4);
  if ( v10 >= 0 )
  {
    v11 = v7 + 48;
    RtlAcquireSRWLockShared(v7 + 48);
    v12 = *(_BYTE *)(v7 + 64);
    LOBYTE(v1) = RtlReleaseSRWLockShared(v11);
    if ( (v12 & 1) == 0 )
    {
      sub_1800841A0(v4);
      v10 = sub_180084130(v4);
      LOBYTE(v1) = sub_180083F70(v4);
      if ( (unsigned int)dword_1800B3218 <= 4 )
        goto LABEL_21;
      LOBYTE(v1) = sub_180010470((__int64)&dword_1800B3218, 64LL);
      if ( (_BYTE)v1 )
      {
        v23 = *(_QWORD *)(v4 + 40);
        v22 = v10;
        LOBYTE(v1) = sub_180063424(v13, byte_1800A2480, v14, v15, (__int64)&v22, (__int64)&v23);
      }
    }
  }
LABEL_18:
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    LOBYTE(v1) = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( (_BYTE)v1 )
    {
      v22 = *((_DWORD *)a1 + 4);
      v21[0] = *(_BYTE *)(v4 + 52);
      v24 = *a1;
      v20 = v6;
      LODWORD(v23) = v10;
      LOBYTE(v1) = sub_1800836E4(
                     v16,
                     byte_1800A23D8,
                     v17,
                     v18,
                     (__int64)&v23,
                     (__int64)&v24,
                     (__int64)v21,
                     (__int64)&v20,
                     (__int64)&v22);
    }
  }
LABEL_21:
  if ( *((_DWORD *)a1 + 4) == 3 )
    LOBYTE(v1) = sub_1800274E0((_QWORD *)v4);
  return (char)v1;
}
