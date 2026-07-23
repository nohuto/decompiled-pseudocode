/*
 * XREFs of _RtlCaptureImageExceptionValues@12 @ 0x4B2B9DFF
 * Callers:
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

PIMAGE_NT_HEADERS __fastcall RtlCaptureImageExceptionValues(PVOID BaseOfImage, unsigned int *a2, unsigned int *a3)
{
  PIMAGE_NT_HEADERS v5; // ebx
  _DWORD *Config; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  _BYTE *v10; // eax
  ULONG Size; // [esp+Ch] [ebp-8h] BYREF
  unsigned int *v12; // [esp+10h] [ebp-4h]

  v12 = a3;
  v5 = RtlImageNtHeader(BaseOfImage);
  if ( (v5->OptionalHeader.DllCharacteristics & 0x400) != 0 )
    goto LABEL_10;
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  if ( !Config || *Config < 0x48u || (v7 = Config[16]) == 0 || (v8 = Config[17]) == 0 )
  {
    v10 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xEu, &Size);
    if ( !v10 || (v10[16] & 1) == 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
LABEL_10:
    v8 = -1;
LABEL_11:
    *a2 = v8;
    goto LABEL_9;
  }
  if ( v7 < (unsigned int)BaseOfImage + v5->OptionalHeader.SizeOfHeaders
    || v8 > ((unsigned int)BaseOfImage + v5->OptionalHeader.SizeOfImage - v7) >> 2 )
  {
    v8 = -1;
    v7 = -1;
  }
  *a2 = v7;
LABEL_9:
  *v12 = v8;
  return v5;
}
