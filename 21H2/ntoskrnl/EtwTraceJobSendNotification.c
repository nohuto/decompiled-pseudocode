/*
 * XREFs of EtwTraceJobSendNotification @ 0x14093614C
 * Callers:
 *     PspSendReliableJobNotification @ 0x1405DC67C (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x140936BA4 (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobSendNotification(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // r8d
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int128 *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v6 = 0LL;
  v5 = 0LL;
  v1 = EtwpCopyJobGuidSafe(&v5, a1);
  if ( v2 )
    LODWORD(v6) = *(_DWORD *)(v2 + 1236);
  else
    LODWORD(v6) = v1 & v6;
  v9 = 0;
  HIDWORD(v6) = v3;
  v7 = &v5;
  v8 = 24;
  return EtwTraceKernelEvent((int)&v7, 1, 0x80000u, 1834, 5249284);
}
