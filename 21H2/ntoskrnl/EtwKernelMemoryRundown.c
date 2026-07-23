/*
 * XREFs of EtwKernelMemoryRundown @ 0x140935C28
 * Callers:
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 */

char EtwKernelMemoryRundown()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v5; // ecx
  _OWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF

  LOBYTE(v0) = EtwpHostSiloState;
  memset(v7, 0, sizeof(v7));
  DWORD1(v7[0]) = 8;
  v1 = *(_DWORD *)(EtwpHostSiloState + 4224);
  while ( _BitScanForward(&v5, v1) )
  {
    v1 &= v1 - 1;
    v2 = v5;
    v0 = 32LL * v5;
    v3 = v0 + EtwpHostSiloState + 4260;
    if ( v3 )
    {
      LODWORD(v0) = *(_DWORD *)(v3 + 20);
      if ( (v0 & 1) != 0 )
        LOBYTE(v0) = EtwpKernelTraceRundown(
                       (int *)v7,
                       EtwpHostSiloState,
                       *(unsigned __int8 *)(EtwpHostSiloState + 2 * v2 + 4208),
                       0,
                       0LL,
                       0);
    }
  }
  return v0;
}
