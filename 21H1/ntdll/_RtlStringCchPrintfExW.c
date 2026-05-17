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

int RtlStringCchPrintfExW(wchar_t *Buffer, int a2, wchar_t **a3, unsigned int *a4, int a5, wchar_t *Format, ...)
{
  int v6; // ecx
  int v7; // esi
  wchar_t *v8; // edx
  wchar_t *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h] BYREF
  va_list va; // [esp+38h] [ebp+20h] BYREF

  va_start(va, Format);
  v7 = RtlStringExValidateDestW(v6, a5);
  if ( v7 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v8 = Buffer;
    v9 = Format;
    v10 = a2;
    v15 = (int)Buffer;
    v14 = a2;
    if ( (a5 & 0x100) != 0 && !Format )
      v9 = (wchar_t *)&dword_4B285DEC;
    v7 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( a2 )
        *Buffer = 0;
    }
    else if ( a2 )
    {
      v14 = 0;
      v7 = RtlStringVPrintfWorkerW(Buffer, (int)&v14, v9, va);
      v11 = v14;
      v10 = a2 - v14;
      v13 = a2 - v14;
      v14 = a2 - v14;
      v8 = &Buffer[v11];
      v15 = (int)v8;
      if ( v7 >= 0 )
      {
        if ( (a5 & 0x200) == 0 || v10 <= 1 )
          goto LABEL_7;
        RtlStringExHandleFillBehindNullW(a5);
        v10 = v13;
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_7;
      v7 = Buffer != 0 ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(Buffer, 2 * a2, v10, (int)&v15, (int)&v14, a5);
      v10 = v14;
    }
    if ( v7 >= 0 || v7 == -2147483643 )
    {
LABEL_21:
      v8 = (wchar_t *)v15;
LABEL_7:
      if ( a3 )
        *a3 = v8;
      if ( a4 )
        *a4 = v10;
    }
  }
  return v7;
}
