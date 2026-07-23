/*
 * XREFs of BiCreatePartitionDevice @ 0x140785280
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionInformation @ 0x140785550 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x140785664 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x1407857CC (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x14096FDC0 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14096FF6C (BiGetPhysicalDriveName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  WCHAR *v5; // r15
  WCHAR *v6; // rsi
  unsigned int v7; // r13d
  const wchar_t *PartitionVhdFilePath; // rax
  int PhysicalDriveName; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // eax
  size_t v12; // r13
  SIZE_T v13; // rdx
  _OWORD *PoolWithTag; // r14
  size_t v15; // r8
  int v16; // edx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _DWORD *v19; // rcx
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  void *v23; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceStringa; // [rsp+60h] [rbp-A8h]
  WCHAR *v28; // [rsp+68h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-90h]
  _DWORD *v31; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v35[14]; // [rsp+D8h] [rbp-30h] BYREF

  v30 = a3;
  LODWORD(v26) = a2;
  v31 = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  memset(v35, 0, 216);
  FileHandle = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  Size = 0;
  v7 = 0;
  SourceStringa = 0LL;
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_22;
    PhysicalDriveName = BiGetDriveLayoutInformation(SourceStringa);
    if ( PhysicalDriveName < 0 )
      goto LABEL_22;
  }
  if ( (v26 & 0x40) == 0 )
  {
    PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(SourceString);
    v6 = (WCHAR *)PartitionVhdFilePath;
    if ( PartitionVhdFilePath )
    {
      if ( !wcsnicmp(PartitionVhdFilePath, L"\\Device\\HarddiskVolume", 0x16uLL) )
      {
        v21 = wcschr(v6 + 22, 0x5Cu);
        v22 = v21;
        if ( v21 )
        {
          *v21 = 0;
          v23 = (void *)BiGetPartitionVhdFilePath(v6);
          *v22 = 92;
          if ( v23 )
          {
            ExFreePoolWithTag(v23, 0x4B444342u);
            PhysicalDriveName = -1073741637;
            goto LABEL_22;
          }
        }
      }
      v5 = v28;
      PhysicalDriveName = BiCreateFileDeviceElement(v6);
      if ( PhysicalDriveName < 0 )
        goto LABEL_20;
      PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v28, 0, 0, &Src);
      if ( PhysicalDriveName < 0 )
        goto LABEL_20;
      LODWORD(v35[11]) = 6;
      v7 = *((_DWORD *)Src + 2);
      Size = v7;
    }
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_45:
      PhysicalDriveName = -1073741811;
      goto LABEL_20;
    }
    DWORD1(v35[11]) = 0;
    *(_OWORD *)((char *)&v35[11] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v35[11]) = MEMORY[8];
    DWORD1(v35[11]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !LODWORD(v35[0]) )
      {
        *(_QWORD *)&v35[10] = *((_QWORD *)&v35[0] + 1);
        v10 = v35[10];
LABEL_10:
        v11 = v7 + 56;
        v12 = v11;
        v13 = v11;
        if ( v11 <= 0x48 )
          v13 = 72LL;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
        if ( PoolWithTag )
        {
          v15 = 72LL;
          if ( Size + 56 > 0x48 )
            v15 = v12;
          memset(PoolWithTag, 0, v15);
          v16 = 72;
          v17 = v35[12];
          LODWORD(v35[9]) = 6;
          if ( Size + 56 > 0x48 )
            v16 = Size + 56;
          DWORD2(v35[9]) = v16;
          *PoolWithTag = v35[9];
          v18 = v35[11];
          PoolWithTag[1] = v10;
          PoolWithTag[2] = v18;
          *(_QWORD *)&v18 = *(_QWORD *)&v35[13];
          PoolWithTag[3] = v17;
          *((_QWORD *)PoolWithTag + 8) = v18;
          if ( v6 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v19 = v31;
          *v30 = PoolWithTag;
          *v19 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_20;
      }
      if ( LODWORD(v35[0]) == 1 )
      {
        v10 = v35[3];
        goto LABEL_10;
      }
      goto LABEL_45;
    }
  }
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_22:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
