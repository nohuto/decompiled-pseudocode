/*
 * XREFs of sub_18007C128 @ 0x18007C128
 * Callers:
 *     sub_1800433B0 @ 0x1800433B0 (sub_1800433B0.c)
 *     sub_18007B2A4 @ 0x18007B2A4 (sub_18007B2A4.c)
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 *     sub_18007DE7C @ 0x18007DE7C (sub_18007DE7C.c)
 */

_QWORD *__fastcall sub_18007C128(__int64 a1, unsigned int a2, NTSTATUS a3, unsigned int a4, _BYTE *a5)
{
  __int64 v7; // rbx
  char v9; // si
  __int64 v10; // rdx
  NTSTATUS v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *result; // rax
  __int64 v17; // rdx
  unsigned int v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF
  NTSTATUS v22; // [rsp+A0h] [rbp+40h] BYREF

  v22 = a3;
  LOBYTE(v22) = 0;
  Handle[0] = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v9 = 0;
  v11 = sub_180009F08(Handle, 0x1000u, a2);
  if ( v11 >= 0 )
  {
    v12 = sub_18000EE6C(a1, (__int64)Handle[0], &v20);
    v7 = v20;
    v11 = v12;
    if ( v12 >= 0 )
      v11 = 0;
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( v11 >= 0 )
  {
    sub_18007DE7C(v7, v10, a4, &v22);
    v9 = v22;
  }
  else if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v22 = v11;
    v19 = a4;
    LODWORD(v20) = 1;
    LODWORD(Handle[0]) = a2;
    sub_1800625D0(v13, byte_1800A0726, v14, v15, (__int64)Handle, (__int64)&v20, (__int64)&v19, (__int64)&v22);
  }
  result = a5;
  if ( a5 )
    *a5 = v9;
  if ( v7 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v7 + 592))-- == 1LL )
      sub_18000A1AC(v7 - 64, v17);
    return sub_18000F390();
  }
  return result;
}
