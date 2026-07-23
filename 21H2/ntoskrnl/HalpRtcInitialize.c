/*
 * XREFs of HalpRtcInitialize @ 0x1404D5E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpRtcInitialize()
{
  char v1; // [rsp+48h] [rbp+10h] BYREF

  v1 = 37;
  ((void (__fastcall *)(_QWORD, __int64, char *))qword_140CF45A8)(0LL, 10LL, &v1);
  return 0LL;
}
