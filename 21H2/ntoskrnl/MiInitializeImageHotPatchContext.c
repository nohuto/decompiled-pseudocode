/*
 * XREFs of MiInitializeImageHotPatchContext @ 0x1408CAA44
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall MiInitializeImageHotPatchContext(_QWORD *a1, __int64 a2)
{
  void *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx

  result = memset(a1, 0, 0x90uLL);
  if ( a2 )
  {
    *a1 = a2;
    v5 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
    a1[1] = v5;
    v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
    a1[2] = v6 + 1;
    result = a1 + 15;
    v7 = ((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a2 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12);
    a1[13] = v5;
    a1[3] = v7;
    a1[14] = v6;
    *((_DWORD *)a1 + 8) = v7 - v5;
    a1[16] = a1 + 15;
    a1[15] = a1 + 15;
  }
  return result;
}
