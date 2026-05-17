/*
 * XREFs of _RtlInitializeContext@20 @ 0x4B366340
 * Callers:
 *     <none>
 * Callees:
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 */

int __stdcall RtlInitializeContext(int a1, _DWORD *a2, char a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax

  a2[37] = 32;
  a2[38] = 32;
  a2[50] = 32;
  a2[46] = a4;
  v5 = a5;
  a2[40] = 4;
  a2[44] = 0;
  a2[41] = 1;
  a2[43] = 2;
  a2[42] = 3;
  a2[39] = 5;
  a2[45] = 0;
  a2[35] = 0;
  a2[36] = 56;
  a2[47] = 24;
  a2[48] = 512;
  *a2 = 65543;
  a2[49] = v5 - 4;
  result = NtWriteVirtualMemory(a1, v5 - 4, (int)&a3, 4, 0);
  a2[49] -= 4;
  return result;
}
