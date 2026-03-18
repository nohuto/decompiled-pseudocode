/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x14062E40C
 * Callers:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
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
