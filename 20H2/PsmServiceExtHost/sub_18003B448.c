/*
 * XREFs of sub_18003B448 @ 0x18003B448
 * Callers:
 *     sub_18003B430 @ 0x18003B430 (sub_18003B430.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002FDF4 @ 0x18002FDF4 (sub_18002FDF4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char __fastcall sub_18003B448(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // r9
  __int64 *v6; // rax
  volatile signed __int64 *v7; // rbx
  _QWORD *v8; // rdi
  int v9; // edi
  char result; // al
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  int *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]

  v4 = 1001;
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 1LL) )
  {
    v38 = 0;
    v36 = v5;
    v37 = 16;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2B8E, 0LL, 0LL, 3u, &v35);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  v6 = sub_18002F588(a2, a1);
  v7 = v6;
  if ( v6 && ((v4 = *((_DWORD *)v6 + 14), v8 = v6 + 16, *((_DWORD *)v6 + 32)) || *((_DWORD *)v6 + 33)) )
  {
    NtDeleteWnfStateName(v6 + 16);
    *v8 = 0LL;
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  result = RtlReleaseSRWLockExclusive(a2);
  if ( v7 )
    result = sub_18002FDF4(v7);
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    result = sub_180010470((__int64)&dword_1800B3250, 1LL);
    if ( result )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v17 = &Uuid;
      v12 = *(_DWORD *)(a2 + 24);
      v20 = &v12;
      v23 = a2 + 72;
      v11 = *(unsigned __int8 *)(a2 + 73);
      v21 = 4;
      v27 = 4;
      v30 = 8;
      v33 = 4;
      v24 = 4 * v11 + 8;
      v18 = 16;
      v26 = &v13;
      v29 = &v15;
      v32 = &v14;
      v13 = v4;
      v15 = a1;
      v14 = v9;
      return sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2984, 0LL, 0LL, 8u, &v16);
    }
  }
  return result;
}
