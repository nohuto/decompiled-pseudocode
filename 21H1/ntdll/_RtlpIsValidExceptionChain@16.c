/*
 * XREFs of _RtlpIsValidExceptionChain@16 @ 0x4B2E9254
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsValidExceptionChain(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edx

  v4 = a3;
  v6 = a2;
  while ( a1 != -1 )
  {
    if ( v6 > a1 )
      return 0;
    if ( a1 >= v4 - 8 )
      return 0;
    if ( (a1 & 3) != 0 )
      return 0;
    v7 = *(_DWORD *)(a1 + 4);
    if ( v7 < v4 && a2 <= v7 )
      return 0;
    if ( *(_DWORD *)a1 == -1 )
    {
      v4 = a3;
      if ( (NtCurrentTeb()->SameTebFlags & 0x200) != 0 && v7 != RtlpFinalExceptionHandler )
        return 0;
    }
    v6 = a1 + 8;
    a1 = *(_DWORD *)a1;
  }
  return 1;
}
