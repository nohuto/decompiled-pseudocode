/*
 * XREFs of RtlStringVPrintfWorkerA @ 0x4B2AE7CD
 * Callers:
 *     _RtlStringCbPrintfA @ 0x4B2AE791 (_RtlStringCbPrintfA.c)
 * Callees:
 *     __vsnprintf @ 0x4B2F7800 (__vsnprintf.c)
 */

int __fastcall RtlStringVPrintfWorkerA(char *Buffer, int a2, int a3, char *Format, va_list ArgList)
{
  unsigned int v5; // esi
  int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = _vsnprintf(Buffer, a2 - 1, Format, ArgList);
  if ( v8 < 0 || v8 > v5 )
  {
    Buffer[v5] = 0;
    return -2147483643;
  }
  else if ( v8 == v5 )
  {
    Buffer[v5] = 0;
  }
  return v7;
}
