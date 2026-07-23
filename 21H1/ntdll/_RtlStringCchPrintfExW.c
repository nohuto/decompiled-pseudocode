/*
 * XREFs of _RtlStringCchPrintfExW @ 0x4B2A76F1
 * Callers:
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x4B2A77A4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExValidateDestW @ 0x4B2A77EE (RtlStringExValidateDestW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x4B32E09C (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x4B36260B (RtlStringExHandleFillBehindNullW.c)
 */

int __cdecl RtlStringCchPrintfExW(
        wchar_t *Buffer,
        int a2,
        wchar_t **a3,
        unsigned int *a4,
        int a5,
        int *a6,
        wchar_t Format)
{
  int v7; // ecx
  int v8; // esi
  wchar_t *v9; // edx
  int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF

  v8 = RtlStringExValidateDestW(v7, a5);
  if ( v8 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v9 = Buffer;
    v10 = a6;
    v11 = a2;
    v16 = (int)Buffer;
    v15 = a2;
    if ( (a5 & 0x100) != 0 && !a6 )
      v10 = &dword_4B285DEC;
    v8 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v8 = -1073741811;
      if ( a2 )
        *Buffer = 0;
    }
    else if ( a2 )
    {
      v15 = 0;
      v8 = RtlStringVPrintfWorkerW(Buffer, (int)&v15, (int)v10, &Format);
      v12 = v15;
      v11 = a2 - v15;
      v14 = a2 - v15;
      v15 = a2 - v15;
      v9 = &Buffer[v12];
      v16 = (int)v9;
      if ( v8 >= 0 )
      {
        if ( (a5 & 0x200) == 0 || v11 <= 1 )
          goto LABEL_7;
        RtlStringExHandleFillBehindNullW(a5);
        v11 = v14;
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*(_WORD *)v10 )
        goto LABEL_7;
      v8 = Buffer != 0 ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(Buffer, 2 * a2, v11, (int)&v16, (int)&v15, a5);
      v11 = v15;
    }
    if ( v8 >= 0 || v8 == -2147483643 )
    {
LABEL_21:
      v9 = (wchar_t *)v16;
LABEL_7:
      if ( a3 )
        *a3 = v9;
      if ( a4 )
        *a4 = v11;
    }
  }
  return v8;
}
