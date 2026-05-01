/*
 * XREFs of sub_18003C154 @ 0x18003C154
 * Callers:
 *     sub_18003B570 @ 0x18003B570 (sub_18003B570.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180030A10 @ 0x180030A10 (sub_180030A10.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003C154(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r9
  __int64 *i; // rdi
  __int64 v6; // rax
  __int64 v7; // [rsp+50h] [rbp-59h] BYREF
  __int64 v8; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp-49h] BYREF
  __int64 v10; // [rsp+80h] [rbp-29h]
  int v11; // [rsp+88h] [rbp-21h]
  int v12; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v13; // [rsp+90h] [rbp-19h]
  int v14; // [rsp+98h] [rbp-11h]
  int v15; // [rsp+9Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+A0h] [rbp-9h] BYREF
  UUID *v17; // [rsp+C0h] [rbp+17h]
  int v18; // [rsp+C8h] [rbp+1Fh]
  int v19; // [rsp+CCh] [rbp+23h]
  __int64 *v20; // [rsp+D0h] [rbp+27h]
  int v21; // [rsp+D8h] [rbp+2Fh]
  int v22; // [rsp+DCh] [rbp+33h]

  v1 = a1 - 32;
  v2 = MEMORY[0x7FFE0008];
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 2LL) )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v12 = 0;
    v15 = 0;
    v7 = v6;
    v13 = &v7;
    v10 = v3;
    v11 = 16;
    v14 = 8;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2E50, 0LL, 0LL, 4u, &v9);
  }
  RtlAcquireSRWLockShared(v1);
  for ( i = *(__int64 **)(v1 + 56); i != (__int64 *)(v1 + 56); i = (__int64 *)*i )
  {
    sub_180030A10(
      i[6],
      *((_DWORD *)i + 15),
      *(_QWORD *)(v1 + 16),
      0,
      0,
      0,
      *((_DWORD *)i + 23),
      *((_DWORD *)i + 23),
      i[14],
      v2);
    i[14] = v2;
  }
  RtlReleaseSRWLockShared(v1);
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 2LL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &Uuid;
    v8 = *(_QWORD *)(v1 + 16);
    v18 = 16;
    v20 = &v8;
    v21 = 8;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A310B, 0LL, 0LL, 4u, &v16);
  }
  return 0LL;
}
