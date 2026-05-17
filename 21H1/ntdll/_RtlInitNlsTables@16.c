/*
 * XREFs of _RtlInitNlsTables@16 @ 0x4B344110
 * Callers:
 *     _LdrpInitializeNlsInfo@4 @ 0x4B332D65 (_LdrpInitializeNlsInfo@4.c)
 * Callees:
 *     _RtlInitCodePageTable@8 @ 0x4B344010 (_RtlInitCodePageTable@8.c)
 */

int __stdcall RtlInitNlsTables(unsigned __int16 *a1, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx

  RtlInitCodePageTable(a1, a4 + 44);
  RtlInitCodePageTable(a2, a4);
  if ( a3 )
  {
    result = a3 + 2 * ((unsigned __int16)(*(_WORD *)(a3 + 2) + 1) + 1);
    v5 = a3 + 4;
  }
  else
  {
    result = 0;
    v5 = 0;
  }
  *(_DWORD *)(a4 + 88) = v5;
  *(_DWORD *)(a4 + 92) = result;
  return result;
}
