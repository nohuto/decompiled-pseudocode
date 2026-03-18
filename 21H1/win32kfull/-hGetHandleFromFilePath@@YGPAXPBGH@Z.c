/*
 * XREFs of ?hGetHandleFromFilePath@@YGPAXPBGH@Z @ 0x8C666
 * Callers:
 *     ?bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C608 (-bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 *     ?PffDuplicateFileHandle@@YGJPAVPFF@@PAU_EPROCESS@@1PAPAX@Z @ 0x1D04F3 (-PffDuplicateFileHandle@@YGJPAVPFF@@PAU_EPROCESS@@1PAPAX@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall hGetHandleFromFilePath(const WCHAR *a1, int a2)
{
  NTSTATUS v3; // eax
  int v4; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-10h] BYREF
  BOOLEAN EnableHardErrors[4]; // [esp+30h] [ebp-8h]
  void *FileHandle; // [esp+34h] [ebp-4h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  FileHandle = 0;
  RtlInitUnicodeString(&DestinationString, a1);
  EnableHardErrors[0] = IoSetThreadHardErrorMode(0);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( a2 )
    v3 = IoCreateFile(
           &FileHandle,
           (ACCESS_MASK)&loc_12019C + 3,
           &ObjectAttributes,
           &IoStatusBlock,
           0,
           0x80u,
           7u,
           3u,
           0x10u,
           0,
           0,
           CreateFileTypeNone,
           0,
           0x301u);
  else
    v3 = IoCreateFile(
           &FileHandle,
           (ACCESS_MASK)&loc_120084 + 5,
           &ObjectAttributes,
           &IoStatusBlock,
           0,
           0x80u,
           5u,
           1u,
           0x10u,
           0,
           0,
           CreateFileTypeNone,
           0,
           0x301u);
  v4 = v3;
  IoSetThreadHardErrorMode(EnableHardErrors[0]);
  if ( v4 < 0 )
    return 0;
  else
    return FileHandle;
}
