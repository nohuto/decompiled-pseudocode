/*
 * XREFs of HvlQueryActiveProcessors @ 0x1404F2190
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  int *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( a2 )
  {
    v6 = *a1;
    v7 = v6;
    if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7) < v6 )
      v7 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7);
    if ( v7 )
    {
      v8 = dword_140D042E4;
      v9 = v7;
      do
      {
        v10 = *v8;
        v8 += 30;
        *a2++ = v10;
        --v9;
      }
      while ( v9 );
      v6 = *a1;
    }
    v5 = v6 < *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7) ? 0xC0000023 : 0;
  }
  result = v5;
  *a1 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7);
  return result;
}
