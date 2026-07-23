/*
 * XREFs of RtlStringVPrintfWorkerW_1 @ 0x4B337693
 * Callers:
 *     _RtlStringCbPrintfW @ 0x4B33765B (_RtlStringCbPrintfW.c)
 *     _RtlStringCchPrintfW @ 0x4B34761F (_RtlStringCchPrintfW.c)
 * Callees:
 *     __vsnwprintf @ 0x4B2F78B0 (__vsnwprintf.c)
 */

int __fastcall RtlStringVPrintfWorkerW_1(wchar_t *Buffer, int a2, int a3, int a4, wchar_t *Format)
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
LABEL_6:
    Buffer[v5] = 0;
    return v7;
  }
  if ( v8 == v5 )
    goto LABEL_6;
  return v7;
}
