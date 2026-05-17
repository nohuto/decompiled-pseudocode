/*
 * XREFs of _RtlpCopyMappedMemoryEx_ExceptionFilter@32 @ 0x4B35C648
 * Callers:
 *     _RtlpCopyMappedMemoryEx@24 @ 0x4B35C5E9 (_RtlpCopyMappedMemoryEx@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpCopyMappedMemoryEx_ExceptionFilter(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int **a7,
        _DWORD *a8)
{
  int *v8; // ecx
  int v9; // edi
  int v11; // esi
  unsigned int v12; // edx
  int result; // eax

  v8 = *a7;
  v9 = 0;
  v11 = **a7;
  if ( v11 == -1073741818 )
  {
    if ( (unsigned int)v8[4] > 1 )
    {
      if ( (v12 = v8[6], v12 >= a3) && v12 < a4 + a3 || v12 >= a2 && v12 < a2 + a4 )
        v9 = 1;
    }
    if ( (unsigned int)v8[4] > 2 )
      v11 = v8[7];
  }
  result = v9;
  *a8 = v11;
  return result;
}
