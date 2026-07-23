/*
 * XREFs of PspLocateSystemDll @ 0x140794454
 * Callers:
 *     PsLocateSystemDlls @ 0x1407943CC (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ZwSystemDebugControl @ 0x1403FB930 (ZwSystemDebugControl.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     ObInitializeFastReference @ 0x14068EFF4 (ObInitializeFastReference.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(ULONG_PTR *a1, char a2)
{
  UNICODE_STRING *v2; // rdi
  NTSTATUS result; // eax
  int SpecialImageSection; // eax
  NTSTATUS v7; // eax
  int SectionInformation; // eax
  PVOID v9; // rdx
  int v10; // eax
  ULONG_PTR v11; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING InputBuffer; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = (UNICODE_STRING *)(a1 + 3);
  v11 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  InputBuffer = 0LL;
  Handle = 0LL;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *v2;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  ObjectAttributes.ObjectName = v2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    SpecialImageSection = MmCreateSpecialImageSection(
                            (__int64 *)&Handle,
                            (int)&ObjectAttributes,
                            0LL,
                            12,
                            (__int64)FileHandle,
                            a2 | 2u);
    if ( SpecialImageSection < 0 )
      KeBugCheckEx(0x6Bu, SpecialImageSection, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Bu, v7, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2, (__int64)&v11);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v9 = Object;
    a1[8] = v11;
    ObInitializeFastReference(a1, (ULONG_PTR)v9);
    a1[1] = 0LL;
    v10 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, (__int64)a1, 0, 1);
    if ( v10 < 0 )
      KeBugCheckEx(0x6Bu, v10, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
