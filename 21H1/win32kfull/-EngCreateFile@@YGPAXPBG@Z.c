/*
 * XREFs of ?EngCreateFile@@YGPAXPBG@Z @ 0x1FCA70
 * Callers:
 *     ?UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCB63 (-UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     _MakeSystemRelativePath@12 @ 0x2495C3 (_MakeSystemRelativePath@12.c)
 */

void *__thiscall EngCreateFile(const WCHAR *this)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-2Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+1Ch] [ebp-14h] BYREF
  struct _UNICODE_STRING Destination; // [esp+24h] [ebp-Ch] BYREF
  void *FileHandle; // [esp+2Ch] [ebp-4h] BYREF

  FileHandle = (void *)-1;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0;
  if ( MakeSystemRelativePath(this, &Destination, (int)this) )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( IoCreateFile(
           &FileHandle,
           0x120089u,
           &ObjectAttributes,
           &IoStatusBlock,
           0,
           0x80u,
           1u,
           1u,
           0x10u,
           0,
           0,
           CreateFileTypeNone,
           0,
           0x309u) < 0 )
      FileHandle = (void *)-1;
    Win32FreePool((PATHOBJ *)Destination.Buffer);
  }
  return FileHandle;
}
