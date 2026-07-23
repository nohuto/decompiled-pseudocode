/*
 * XREFs of RtlStringExHandleOtherFlagsW @ 0x4B32E09C
 * Callers:
 *     _RtlStringCchPrintfExW @ 0x4B2A76F1 (_RtlStringCchPrintfExW.c)
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlStringExHandleOtherFlagsW(
        char *a1,
        unsigned int Size,
        int a3,
        char **a4,
        unsigned int *a5,
        __int16 a6)
{
  __int16 v6; // ax
  unsigned int v8; // edi
  char **v9; // edx
  unsigned int *v10; // ecx
  char *v11; // eax
  size_t v13; // [esp-4h] [ebp-10h]

  v6 = a6;
  v8 = Size >> 1;
  if ( Size >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v8;
    *(_WORD *)a1 = 0;
  }
  if ( (a6 & 0x400) != 0 )
  {
    LODWORD(v13) = Size;
    memset(a1, (unsigned __int8)a6, v13);
    if ( (_BYTE)a6 )
    {
      if ( !v8 )
        return 0;
      v9 = a4;
      v10 = a5;
      v11 = &a1[2 * v8 - 2];
      *(_WORD *)v11 = 0;
      *a4 = v11;
      *a5 = 1;
    }
    else
    {
      v9 = a4;
      v10 = a5;
      *a4 = a1;
      *a5 = v8;
    }
    v6 = a6;
  }
  else
  {
    v10 = a5;
    v9 = a4;
  }
  if ( v8 && (v6 & 0x800) != 0 )
  {
    *v9 = a1;
    *v10 = v8;
    *(_WORD *)a1 = 0;
  }
  return 0;
}
