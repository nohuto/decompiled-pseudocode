/*
 * XREFs of _vInitFontsDirectoryNameInformation@0 @ 0xDB878
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?QueryNameStringFromHandle@@YGJPAXPAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x8CAA8 (-QueryNameStringFromHandle@@YGJPAXPAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 */

void *__usercall vInitFontsDirectoryNameInformation@<eax>(unsigned int a1@<esi>)
{
  void *result; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // eax
  struct _OBJECT_NAME_INFORMATION *v3; // ecx
  unsigned __int16 *v4; // ecx
  const unsigned __int16 *v5; // [esp-4h] [ebp-40h]
  unsigned int v6; // [esp+0h] [ebp-3Ch]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-34h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-1Ch] BYREF
  STRING Source; // [esp+28h] [ebp-14h] BYREF
  _WORD v10[2]; // [esp+30h] [ebp-Ch] BYREF
  const wchar_t *v11; // [esp+34h] [ebp-8h]
  void *FileHandle; // [esp+38h] [ebp-4h] BYREF

  v10[0] = 34;
  Source.Length = 2;
  Source.MaximumLength = 4;
  FileHandle = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v10[1] = 36;
  v11 = L"\\SystemRoot\\Fonts";
  Source.Buffer = (PCHAR)L"\\";
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = (void *)ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0, 0, 1u, 1u, 0x24u, 0, 0);
  if ( (int)result >= 0 )
  {
    v5 = (const unsigned __int16 *)a1;
    v2 = (struct _OBJECT_NAME_INFORMATION *)PALLOCMEM2(0x190u, 1986422343, 1);
    gpniScratch.Name.Buffer = &v2->Name.Length;
    if ( v2
      && (QueryNameStringFromHandle(v2, FileHandle, v3, v3, a1, v6) < 0
       || RtlAppendStringToString((PSTRING)gpniScratch.Name.Buffer, &Source) < 0) )
    {
      Win32FreePool(gpniScratch.Name.Buffer);
      gpniScratch.Name.Buffer = 0;
    }
    gpwszFontsDirectory = (wchar_t *)PALLOCMEM2(0x208u, 1986422343, 1);
    if ( gpwszFontsDirectory )
    {
      if ( bAppendSysDirectory(v4, v5, v6) )
      {
        gcwcFontsDirectory = wcslen(gpwszFontsDirectory) + 1;
      }
      else
      {
        Win32FreePool(gpwszFontsDirectory);
        gpwszFontsDirectory = 0;
        gcwcFontsDirectory = 0;
      }
    }
    ZwClose(FileHandle);
    result = PALLOCMEM2(0x190u, 1986422343, 1);
    *(_DWORD *)&gpniScratch.Name.Length = result;
  }
  return result;
}
