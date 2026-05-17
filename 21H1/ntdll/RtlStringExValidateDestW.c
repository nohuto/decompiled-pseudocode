/*
 * XREFs of RtlStringExValidateDestW @ 0x4B2A77EE
 * Callers:
 *     _RtlStringCbCopyExW@24 @ 0x4B2A763E (_RtlStringCbCopyExW@24.c)
 *     _RtlStringCchPrintfExW @ 0x4B2A76F1 (_RtlStringCchPrintfExW.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringExValidateDestW(int a1, unsigned int a2, int a3, __int16 a4)
{
  int result; // eax

  result = 0;
  if ( (a4 & 0x100) != 0 )
  {
    if ( a1 || !a2 )
    {
LABEL_3:
      if ( a2 <= 0x7FFFFFFF )
        return result;
    }
  }
  else if ( a2 )
  {
    goto LABEL_3;
  }
  return -1073741811;
}
