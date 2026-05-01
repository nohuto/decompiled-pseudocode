/*
 * XREFs of sub_1800668CC @ 0x1800668CC
 * Callers:
 *     sub_180039A90 @ 0x180039A90 (sub_180039A90.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800668CC(int a1, __int16 a2, int a3)
{
  FARPROC ProcAddress; // rax
  HMODULE v4; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp+24h]
  __int16 v8; // [rsp+4Eh] [rbp+26h]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  if ( a3 )
    v8 |= 1u;
  ProcAddress = (FARPROC)qword_1800B4F40;
  if ( qword_1800B4F40 )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  v4 = sub_18003ABD4();
  ProcAddress = GetProcAddress(v4, "RtlNotifyFeatureUsage");
  qword_1800B4F40 = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  else
    return 3221225785LL;
}
