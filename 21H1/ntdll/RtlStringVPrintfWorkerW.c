/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x4B2A77A4
 * Callers:
 *     _RtlStringCchPrintfExW @ 0x4B2A76F1 (_RtlStringCchPrintfExW.c)
 * Callees:
 *     __vsnwprintf @ 0x4B2F78B0 (__vsnwprintf.c)
 */

int __fastcall RtlStringVPrintfWorkerW(wchar_t *Buffer, int a2, unsigned int *a3, int a4, wchar_t *Format)
{
  unsigned int v5; // esi
  int v7; // ebx
  int v8; // eax
  size_t v10; // [esp-Ch] [ebp-18h]
  va_list v11; // [esp+0h] [ebp-Ch]

  v5 = a2 - 1;
  HIDWORD(v10) = a4;
  v7 = 0;
  LODWORD(v10) = a2 - 1;
  v8 = _vsnwprintf(Buffer, v10, Format, v11);
  if ( v8 < 0 || v8 > v5 )
  {
    v7 = -2147483643;
  }
  else if ( v8 != v5 )
  {
    v5 = v8;
    goto LABEL_5;
  }
  Buffer[v5] = 0;
LABEL_5:
  if ( a3 )
    *a3 = v5;
  return v7;
}
