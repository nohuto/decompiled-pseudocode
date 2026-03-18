/*
 * XREFs of ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790
 * Callers:
 *     ?bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C608 (-bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 * Callees:
 *     ?bIsFileInSystemFontsDir@@YGHPAX@Z @ 0x8CA36 (-bIsFileInSystemFontsDir@@YGHPAX@Z.c)
 *     _ZwWin32CreateSection@36 @ 0x8CB02 (_ZwWin32CreateSection@36.c)
 *     ?TryGetFileDeviceRemoteBit@@YGJPAXPA_N@Z @ 0x8CC9A (-TryGetFileDeviceRemoteBit@@YGJPAXPA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 */

int __userpurge bCreateSectionFromHandle@<eax>(
        const WCHAR *a1@<edx>,
        void *a2@<ecx>,
        void *a3,
        const unsigned __int16 *a4,
        struct _FILEVIEW *a5,
        char a6,
        int *a7,
        unsigned __int8 a8)
{
  HANDLE v8; // edi
  int v9; // ebx
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  int v12; // ecx
  LONG HighPart; // eax
  int v14; // eax
  const WCHAR *v16; // [esp-4h] [ebp-D4h]
  union _LARGE_INTEGER *v17; // [esp+0h] [ebp-D0h]
  bool *v18; // [esp+4h] [ebp-CCh]
  _DWORD v19[12]; // [esp+10h] [ebp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+58h] [ebp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+60h] [ebp-70h] BYREF
  void *v23; // [esp+68h] [ebp-68h]
  PCWSTR SourceString; // [esp+6Ch] [ebp-64h]
  int LowPart; // [esp+70h] [ebp-60h] BYREF
  int v26; // [esp+74h] [ebp-5Ch]
  HANDLE FileHandle; // [esp+7Ch] [ebp-54h]
  struct _FILEVIEW *v28; // [esp+80h] [ebp-50h]
  char v29; // [esp+87h] [ebp-49h]
  _DWORD v30[10]; // [esp+88h] [ebp-48h] BYREF
  union _LARGE_INTEGER FileInformation[3]; // [esp+B0h] [ebp-20h] BYREF

  v23 = a3;
  FileHandle = a2;
  v28 = a5;
  memset(FileInformation, 0, sizeof(FileInformation));
  SourceString = a1;
  memset(v30, 0, sizeof(v30));
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  LowPart = 0;
  v26 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  memset(v19, 0, sizeof(v19));
  v19[6] = 8 * (a6 & 1);
  v16 = SourceString;
  qmemcpy(a3, v19, 0x30u);
  RtlInitUnicodeString(&DestinationString, v16);
  v8 = FileHandle;
  v19[7] = FileHandle;
  if ( !FileHandle
    || ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) < 0
    || ZwQueryInformationFile(v8, &IoStatusBlock, v30, 0x28u, FileBasicInformation) < 0 )
  {
    return 0;
  }
  v9 = (8 * (a6 & 1)) | 1;
  v19[0] = v30[4];
  v19[1] = v30[5];
  v19[6] = v9;
  if ( v28 )
  {
    v10 = (wchar_t *)AllocFreeTmpBuffer(536);
    v11 = v10;
    if ( !v10 )
      return 0;
    *(_DWORD *)v28 = 0;
    FileHandle = (HANDLE)ZwQueryVolumeInformationFile(v8, &IoStatusBlock, v10, 0x218u, FileFsAttributeInformation);
    if ( (int)FileHandle >= 0 && !__wcsnicmp(v11 + 6, L"FAT", 3u) )
      *(_DWORD *)v28 = 1;
    FreeTmpBuffer(v11);
    if ( (int)FileHandle < 0 )
      return 0;
  }
  if ( a4 )
  {
    if ( (int)a4 <= 0 )
      LowPart = FileInformation[1].LowPart;
    else
      LowPart = (int)a4;
    v26 = 0;
    if ( ZwSetInformationFile(v8, &IoStatusBlock, &LowPart, 8u, FileEndOfFileInformation) < 0 )
      return 0;
    v12 = LowPart;
    HighPart = 0;
    FileInformation[1].QuadPart = (unsigned int)LowPart;
  }
  else
  {
    HighPart = FileInformation[1].HighPart;
    v12 = FileInformation[1].LowPart;
  }
  if ( !HighPart )
  {
    v19[4] = v12;
    if ( (v9 & 8) == 0 )
    {
      v29 = 0;
      if ( TryGetFileDeviceRemoteBit(v17, v18) < 0 )
        return 0;
      v9 ^= ((unsigned __int8)v9 ^ (unsigned __int8)(2 * v29)) & 2;
      v19[6] = v9;
    }
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( (v9 & 2) != 0 )
      v14 = ObtainSectionForNetworkedFontFile(
              (struct _UNICODE_STRING *)&ObjectAttributes,
              (struct _FILEVIEW *)&FileInformation[1],
              (struct _OBJECT_ATTRIBUTES *)(a4 != 0),
              v17,
              (bool)v18);
    else
      v14 = ZwWin32CreateSection(
              (int)&v19[5],
              &ObjectAttributes,
              &FileInformation[1],
              2 * (a4 != 0) + 2,
              v12,
              v8,
              v12,
              v12);
    if ( v14 >= 0 )
    {
      if ( bIsFileInSystemFontsDir(v17) )
      {
        v19[6] |= 0x10u;
LABEL_28:
        qmemcpy(v23, v19, 0x30u);
        return 1;
      }
      if ( ScrutinizeFontLoad(0, SourceString) >= 0 )
        goto LABEL_28;
    }
  }
  return 0;
}
