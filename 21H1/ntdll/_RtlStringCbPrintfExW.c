/*
 * XREFs of _RtlStringCbPrintfExW @ 0x4B32DF38
 * Callers:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     _LdrpConstructModernAppKeyName@8 @ 0x4B331983 (_LdrpConstructModernAppKeyName@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x4B32E09C (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x4B32E12F (RtlStringVPrintfWorkerW_0.c)
 */

int RtlStringCbPrintfExW(wchar_t *Buffer, size_t Size, int *a3, _DWORD *a4, int a5, wchar_t *Format, ...)
{
  int v6; // edi
  int v7; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // edx
  size_t v11; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF
  va_list va; // [esp+34h] [ebp+20h] BYREF

  va_start(va, Format);
  v6 = Size >> 1;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && v6 )
    {
      v7 = -1073741811;
      MEMORY[0] = 0;
      return v7;
    }
  }
  else
  {
    v7 = v6 != 0 ? 0 : -1073741811;
    if ( !v6 )
      return v7;
  }
  v13 = Size >> 1;
  v12 = (int)Buffer;
  v9 = Format;
  if ( (a5 & 0x100) != 0 && !Format )
    v9 = (wchar_t *)&dword_4B285DEC;
  v7 = 0;
  if ( (a5 & 0xFFFFE000) == 0 )
  {
    if ( v6 )
    {
      v12 = 0;
      v7 = RtlStringVPrintfWorkerW_0(Buffer, (int)&v12, v9, va);
      v6 -= v12;
      v13 = v6;
      v10 = &Buffer[v12];
      v12 = (int)v10;
      if ( v7 < 0 )
        goto LABEL_21;
      if ( (a5 & 0x200) != 0 )
      {
        v11 = (Size & 1) + 2 * v6;
        if ( v11 > 2 )
          memset(v10 + 1, (unsigned __int8)a5, v11 - 2);
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_25;
      v7 = Buffer != 0 ? -2147483643 : -1073741811;
    }
    if ( v7 < 0 )
      goto LABEL_21;
LABEL_25:
    if ( a3 )
      *a3 = v12;
    if ( a4 )
      *a4 = (Size & 1) + 2 * v6;
    return v7;
  }
  v7 = -1073741811;
  if ( v6 )
    *Buffer = 0;
LABEL_21:
  if ( (a5 & 0x1C00) != 0 && Size )
  {
    RtlStringExHandleOtherFlagsW(Buffer, Size, (int)&v12, (int)&v12, (int)&v13, a5);
    v6 = v13;
  }
  if ( v7 == -2147483643 )
    goto LABEL_25;
  return v7;
}
