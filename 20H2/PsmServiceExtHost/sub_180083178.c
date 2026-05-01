/*
 * XREFs of sub_180083178 @ 0x180083178
 * Callers:
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18008299C @ 0x18008299C (sub_18008299C.c)
 *     sub_180082A64 @ 0x180082A64 (sub_180082A64.c)
 *     sub_180082C2C @ 0x180082C2C (sub_180082C2C.c)
 *     sub_180082CD4 @ 0x180082CD4 (sub_180082CD4.c)
 *     sub_180082DB4 @ 0x180082DB4 (sub_180082DB4.c)
 */

void __fastcall sub_180083178(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v5; // r9d
  int v6; // r9d
  PVOID v7; // rdi
  int v8; // r9d
  PVOID P; // [rsp+30h] [rbp-89h] BYREF
  int v10; // [rsp+38h] [rbp-81h] BYREF
  int v11; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v12; // [rsp+40h] [rbp-79h] BYREF
  __int64 v13; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-69h] BYREF
  int *v15; // [rsp+70h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-39h] BYREF
  int *v18; // [rsp+A0h] [rbp-19h]
  __int64 v19; // [rsp+A8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+B0h] [rbp-9h] BYREF
  int *v21; // [rsp+D0h] [rbp+17h]
  __int64 v22; // [rsp+D8h] [rbp+1Fh]

  P = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1
      && (int)sub_180082C2C(a1, a2, (unsigned __int64 *)&v13) >= 0
      && (int)sub_180082DB4(v13, 0, a1) < 0
      && (unsigned int)dword_1800B3218 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B3218, 64LL) )
      {
        v10 = v5;
        v15 = &v10;
        v16 = 4LL;
        sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A229E, 0LL, 0LL, 3u, &v14);
      }
    }
    return;
  }
  if ( (int)sub_180082A64(a1, a2, (__int64 *)&P) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      v7 = P;
      sub_180082CD4(a1, (unsigned __int64)P, (unsigned __int64 *)&v13);
      if ( (PVOID)v13 == v7 )
        v7 = 0LL;
      P = v7;
      if ( (int)sub_180082DB4(v13, a3, a1) < 0
        && (unsigned int)dword_1800B3218 > 4
        && sub_180010470((__int64)&dword_1800B3218, 64LL) )
      {
        v12 = v8;
        v21 = &v12;
        v22 = 4LL;
        sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A229E, 0LL, 0LL, 3u, &v20);
      }
      goto LABEL_14;
    }
  }
  else if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v11 = v6;
    v18 = &v11;
    v19 = 4LL;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A2262, 0LL, 0LL, 3u, &v17);
  }
  v7 = P;
LABEL_14:
  if ( v7 )
  {
    sub_18008299C((__int64)v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
