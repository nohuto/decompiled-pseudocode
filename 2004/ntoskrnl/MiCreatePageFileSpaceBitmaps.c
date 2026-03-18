/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x1407A35F4
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  unsigned int v2; // ebx
  _QWORD *result; // rax

  v2 = (a1 >> 6) + ((a1 & 0x3F) != 0);
  result = MiAllocatePool(64, 16 * ((a1 >> 6) + ((a1 & 0x3F) != 0)) + 40, 0x62506D4Du);
  if ( result )
  {
    *(_DWORD *)result = 1;
    result[2] = result + 5;
    *((_DWORD *)result + 2) = a1;
    *((_DWORD *)result + 6) = a1;
    result[4] = &result[v2 + 5];
  }
  return result;
}
