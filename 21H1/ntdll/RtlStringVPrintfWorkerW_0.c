/*
 * XREFs of RtlStringVPrintfWorkerW_0 @ 0x4B32E12F
 * Callers:
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 * Callees:
 *     __vsnwprintf @ 0x4B2F78B0 (__vsnwprintf.c)
 */

int __fastcall RtlStringVPrintfWorkerW_0(wchar_t *Buffer, int a2, unsigned int *a3, wchar_t *Format, va_list Args)
{
  unsigned int v5; // esi
  int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = _vsnwprintf(Buffer, a2 - 1, Format, Args);
  if ( v8 < 0 || v8 > v5 )
  {
    v7 = -2147483643;
  }
  else if ( v8 != v5 )
  {
    v5 = v8;
    goto LABEL_7;
  }
  Buffer[v5] = 0;
LABEL_7:
  if ( a3 )
    *a3 = v5;
  return v7;
}
