/*
 * XREFs of EtwpTraceProcessRundown @ 0x14078073C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(PEPROCESS Process, __int64 a2, __int16 a3, __int64 a4)
{
  char v8; // r8
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v12[2]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+74h] [rbp-8Ch]
  PVOID v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v17[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-48h]
  __int64 v19[52]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v20[18]; // [rsp+260h] [rbp+160h] BYREF

  v13 = 0;
  LODWORD(v10) = 0;
  P = 0LL;
  UnicodeString = 0LL;
  memset(v19, 0, 0x198uLL);
  v8 = *(_BYTE *)(a4 + 65);
  v15 = 0LL;
  v18 = 0LL;
  v14 = *(PVOID *)(a4 + 16);
  v12[1] = *(_WORD *)(a4 + 24);
  memset(v17, 0, sizeof(v17));
  v12[0] = 0;
  EtwpBuildProcessEvent(
    Process,
    a3,
    v8,
    (__int64)v17,
    &v15,
    (__int64)v20,
    (unsigned int *)&v10,
    (ULONG_PTR *)v19,
    (PSTRING)&UnicodeString,
    v12,
    &P);
  EtwpLogKernelEvent((__int64)v20, *(_QWORD *)(a2 + 1112), *(_DWORD *)a2, v10, a3, 5249029 - (a3 != 807));
  if ( v14 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v14, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
