/*
 * XREFs of _RtlInitializeHandleTable@12 @ 0x4B2EB410
 * Callers:
 *     _RtlCreateAtomTableEx@12 @ 0x4B2E0014 (_RtlCreateAtomTableEx@12.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlInitializeHandleTable(int a1, int a2, _DWORD *a3)
{
  int v3; // ecx
  int result; // eax

  v3 = a2;
  if ( a2 < 0 )
    v3 = a2 & 0x7FFFFFFF;
  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[6] = 0;
  a3[7] = 0;
  result = a1;
  a3[2] = (unsigned int)a2 >> 31;
  *a3 = a1;
  a3[1] = v3;
  return result;
}
