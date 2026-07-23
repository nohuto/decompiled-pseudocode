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

int __cdecl RtlStringCbPrintfExW(
        wchar_t *Buffer,
        unsigned int Size,
        int *a3,
        _DWORD *a4,
        int a5,
        int *a6,
        wchar_t Format)
{
  int v7; // edi
  int v8; // esi
  int *v10; // eax
  wchar_t *v11; // edx
  unsigned int v12; // eax
  size_t v13; // [esp-4h] [ebp-18h]
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h] BYREF

  v7 = Size >> 1;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && v7 )
    {
      v8 = -1073741811;
      MEMORY[0] = 0;
      return v8;
    }
  }
  else
  {
    v8 = v7 != 0 ? 0 : -1073741811;
    if ( !v7 )
      return v8;
  }
  v15 = Size >> 1;
  v14 = (int)Buffer;
  v10 = a6;
  if ( (a5 & 0x100) != 0 && !a6 )
    v10 = &dword_4B285DEC;
  v8 = 0;
  if ( (a5 & 0xFFFFE000) == 0 )
  {
    if ( v7 )
    {
      v14 = 0;
      v8 = RtlStringVPrintfWorkerW_0(Buffer, (int)&v14, (int)v10, &Format);
      v7 -= v14;
      v15 = v7;
      v11 = &Buffer[v14];
      v14 = (int)v11;
      if ( v8 < 0 )
        goto LABEL_21;
      if ( (a5 & 0x200) != 0 )
      {
        v12 = (Size & 1) + 2 * v7;
        if ( v12 > 2 )
        {
          LODWORD(v13) = v12 - 2;
          memset(v11 + 1, (unsigned __int8)a5, v13);
        }
      }
    }
    else
    {
      if ( !*(_WORD *)v10 )
        goto LABEL_25;
      v8 = Buffer != 0 ? -2147483643 : -1073741811;
    }
    if ( v8 < 0 )
      goto LABEL_21;
LABEL_25:
    if ( a3 )
      *a3 = v14;
    if ( a4 )
      *a4 = (Size & 1) + 2 * v7;
    return v8;
  }
  v8 = -1073741811;
  if ( v7 )
    *Buffer = 0;
LABEL_21:
  if ( (a5 & 0x1C00) != 0 && Size )
  {
    RtlStringExHandleOtherFlagsW(Buffer, Size, (int)&v14, (int)&v14, (int)&v15, a5);
    v7 = v15;
  }
  if ( v8 == -2147483643 )
    goto LABEL_25;
  return v8;
}
