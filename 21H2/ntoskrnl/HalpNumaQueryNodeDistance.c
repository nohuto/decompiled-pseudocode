/*
 * XREFs of HalpNumaQueryNodeDistance @ 0x1403CF820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryNodeDistance(unsigned __int16 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(HalpNumaConfig + 56);
  if ( a1 >= v3 || a2 >= v3 )
    return 3221226021LL;
  result = 0LL;
  *a3 = *(unsigned __int16 *)(*(_QWORD *)(HalpNumaConfig + 48)
                            + 2LL * (a1 * *(_DWORD *)(HalpNumaConfig + 64) + (unsigned int)a2));
  return result;
}
