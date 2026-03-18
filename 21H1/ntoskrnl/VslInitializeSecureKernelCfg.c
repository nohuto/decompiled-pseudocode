/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x1404F6E48
 * Callers:
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  v4 = 0LL;
  v8[1] = a1;
  v8[2] = a2;
  v5 = &v8[4];
  do
  {
    v6 = *(int *)((char *)&MiTrimPassToAge[1] + v4);
    v4 += 4LL;
    v6 *= 2LL;
    *(v5 - 1) = qword_140C4FA08[v6];
    *v5 = qword_140C4FA10[v6];
    v5 += 2;
  }
  while ( v4 < 8 );
  qsort(&v8[3], 2uLL, 0x10uLL, HalpChannelAscendingSort);
  return VslpEnterIumSecureMode(2u, 215, 0, (__int64)v8);
}
