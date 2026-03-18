/*
 * XREFs of HalpRtcInitialize @ 0x1404D07C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpRtcInitialize()
{
  char v1; // [rsp+48h] [rbp+10h] BYREF

  v1 = 37;
  ((void (__fastcall *)(_QWORD, __int64, char *))qword_140CF42E8)(0LL, 10LL, &v1);
  return 0LL;
}
