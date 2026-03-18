/*
 * XREFs of BiCreatePartitionDevice @ 0x14080397C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408038B4 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408038B4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionInformation @ 0x140803C4C (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x140803D60 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x140803EC0 (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x140A1DB40 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x140A1DCEC (BiGetPhysicalDriveName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, __int64 a4)
{
  int *v5; // r12
  WCHAR *v6; // rsi
  unsigned int v7; // r15d
  const wchar_t *PartitionVhdFilePath; // rax
  int PhysicalDriveName; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // r15d
  SIZE_T v12; // rdx
  _OWORD *PoolWithTag; // rax
  _OWORD *v14; // r14
  size_t v15; // r8
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  _DWORD *v19; // rcx
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  void *v23; // rax
  unsigned int Size_4; // [rsp+44h] [rbp-C4h]
  void *Src; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  PCWSTR SourceStringa; // [rsp+58h] [rbp-B0h]
  int *v28; // [rsp+60h] [rbp-A8h]
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v30; // [rsp+70h] [rbp-98h]
  _QWORD ObjectAttributes[7]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v34[14]; // [rsp+D8h] [rbp-30h] BYREF

  v30 = a3;
  LODWORD(v26) = a2;
  ObjectAttributes[0] = a4;
  memset(&ObjectAttributes[1], 0, 44);
  IoStatusBlock = 0LL;
  memset(v34, 0, 0x8CuLL);
  FileHandle = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v7 = 0;
  Size_4 = 0;
  SourceStringa = 0LL;
  memset(&v34[9], 0, 0x48uLL);
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
      LODWORD(v34[11]) = 6;
      v7 = *((_DWORD *)Src + 2);
      Size_4 = v7;
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
    DWORD1(v34[11]) = 0;
    *(_OWORD *)((char *)&v34[11] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v34[11]) = MEMORY[8];
    DWORD1(v34[11]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes[3] = &DestinationString;
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 576;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  PhysicalDriveName = ZwOpenFile(
                        &FileHandle,
                        0x80100000,
                        (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                        &IoStatusBlock,
                        3u,
                        0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !LODWORD(v34[0]) )
      {
        *(_QWORD *)&v34[10] = *((_QWORD *)&v34[0] + 1);
        v10 = v34[10];
LABEL_10:
        v11 = v7 + 56;
        v12 = 72LL;
        if ( v11 > 0x48 )
          v12 = v11;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x4B444342u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = 72LL;
          if ( v11 > 0x48 )
            v15 = v11;
          memset(PoolWithTag, 0, v15);
          v16 = v34[12];
          v17 = 72;
          LODWORD(v34[9]) = 6;
          if ( v11 > 0x48 )
            v17 = v11;
          DWORD2(v34[9]) = v17;
          *v14 = v34[9];
          v18 = v34[11];
          v14[1] = v10;
          v14[2] = v18;
          *(_QWORD *)&v18 = *(_QWORD *)&v34[13];
          v14[3] = v16;
          *((_QWORD *)v14 + 8) = v18;
          if ( v6 )
            memmove((char *)v14 + 56, Src, Size_4);
          v19 = (_DWORD *)ObjectAttributes[0];
          *v30 = v14;
          *v19 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_20;
      }
      if ( LODWORD(v34[0]) == 1 )
      {
        v10 = v34[3];
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
