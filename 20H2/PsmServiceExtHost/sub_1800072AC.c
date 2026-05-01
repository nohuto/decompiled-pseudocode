/*
 * XREFs of sub_1800072AC @ 0x1800072AC
 * Callers:
 *     sub_1800072A0 @ 0x1800072A0 (sub_1800072A0.c)
 * Callees:
 *     sub_1800073FC @ 0x1800073FC (sub_1800073FC.c)
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800680C0 @ 0x1800680C0 (sub_1800680C0.c)
 */

__int64 __fastcall sub_1800072AC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  DWORD v12; // ebx
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+100h] [rbp+0h] BYREF

  sub_18000B63C(&v17, v20);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 1LL) )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009B211, 0, 0, 2u, &v21);
  P = 0LL;
  v7 = -1LL;
  v14 = -1LL;
  sub_18001E380(v6);
  v8 = sub_180008D30(*(_QWORD *)a1, a2, &P);
  if ( v8 >= 0 )
  {
    v9 = sub_1800073FC(a1, P, &v14);
    v7 = v14;
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v14;
      v8 = 0;
    }
  }
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v16 = *(_DWORD *)(a1 + 56);
    v18 = v7;
    v19 = a2;
    LODWORD(v14) = v8;
    sub_1800680C0(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009B1B3,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v18);
  }
  if ( P )
    sub_1800265B0(P);
  if ( v17 )
  {
    v12 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  return (unsigned int)v8;
}
