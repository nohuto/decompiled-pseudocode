/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x1405A255C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[0] = a1;
  v3[1] = a2;
  v4 = v3;
  v6 = 0;
  v3[2] = a3;
  v5 = 12;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x24000000u, 0xF6Du, 0x400A02u);
}
