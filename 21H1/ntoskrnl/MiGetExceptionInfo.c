/*
 * XREFs of MiGetExceptionInfo @ 0x14052EEA0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExceptionInfo(int **a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v4; // r9
  int v5; // ecx

  *a2 = 0;
  result = 1LL;
  v4 = *a1;
  v5 = **a1;
  if ( (v5 == -2147483647 || (unsigned int)(v5 + 1073741819) <= 1) && (unsigned int)v4[6] > 1 )
  {
    *a2 = 1;
    *a3 = *((_QWORD *)v4 + 5);
  }
  return result;
}
