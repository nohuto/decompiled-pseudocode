/*
 * XREFs of EtwpTraceRegistry @ 0x140882FB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogRegistryEvent @ 0x1409E3390 (EtwpLogRegistryEvent.c)
 */

__int64 __fastcall EtwpTraceRegistry(char a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  _DWORD *v14; // rcx
  __int64 v15; // rax
  int v16; // edx

  result = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = 32LL * (unsigned int)v13;
    v14 = (_DWORD *)(result + EtwpHostSiloState + 4284);
    if ( v14 )
    {
      if ( (*v14 & 0x20000) != 0 )
      {
        v15 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4233) - 1LL;
        v16 = a2 + 8 * v15;
        LOBYTE(v16) = a1;
        result = EtwpLogRegistryEvent(
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4232),
                   v16,
                   a3,
                   a4,
                   a5,
                   a2 + 8 * v15,
                   a6);
      }
    }
  }
  return result;
}
