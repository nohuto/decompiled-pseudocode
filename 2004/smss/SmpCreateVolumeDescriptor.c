/*
 * XREFs of SmpCreateVolumeDescriptor @ 0x14000B3BC
 * Callers:
 *     SmpCreateVolumeDescriptors @ 0x14000AE80 (SmpCreateVolumeDescriptors.c)
 * Callees:
 *     SmpGetVolumeDiskNumber @ 0x14000B9D4 (SmpGetVolumeDiskNumber.c)
 *     SmpIsVhdVolume @ 0x14000BA6C (SmpIsVhdVolume.c)
 *     SmpIsVolumeOnSCMDevice @ 0x14000BB2C (SmpIsVolumeOnSCMDevice.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x14000BBD0 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

int __fastcall SmpCreateVolumeDescriptor(unsigned __int16 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  __int64 v4; // rdi
  NTSTATUS v5; // r8d
  __int64 *Heap; // rax
  __int64 v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int VolumeDiskNumber; // eax
  int v12; // ecx
  int v13; // eax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  signed __int32 v16; // eax
  int v17; // et2
  __int64 v18; // rcx
  signed __int32 v19; // eax
  int v20; // et2
  signed __int32 v21; // eax
  int v22; // et2
  signed __int32 v23; // eax
  int v24; // et2
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+38h] [rbp-31h] BYREF
  int v28; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-21h] BYREF
  int v31; // [rsp+4Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp+27h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+37h]
  unsigned int v36; // [rsp+A4h] [rbp+3Bh]

  Handle = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v4 = a1;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v5 < 0 )
  {
    v16 = _InterlockedExchangeAdd(&SmpPagefileLogIndex, 1u);
    v17 = (v16 + 1) % 32;
    LODWORD(Heap) = (v16 + 1) / 32;
    v18 = 2LL * v17;
    *((_DWORD *)&SmpPagefileLog + 4 * v17) = 1363;
LABEL_33:
    *((_DWORD *)&SmpPagefileLog + 2 * v18 + 1) = v5;
    *((_QWORD *)&SmpPagefileLog + v18 + 1) = v4;
    goto LABEL_23;
  }
  LODWORD(Heap) = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  v5 = (int)Heap;
  if ( (int)Heap < 0 )
  {
    v21 = _InterlockedExchangeAdd(&SmpPagefileLogIndex, 1u);
    v22 = (v21 + 1) % 32;
    LODWORD(Heap) = (v21 + 1) / 32;
    v18 = 2LL * v22;
    *((_DWORD *)&SmpPagefileLog + 4 * v22) = 1385;
    goto LABEL_33;
  }
  if ( (v31 & 0x17) != 0 )
    goto LABEL_23;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u);
  if ( v5 < 0 )
  {
    v23 = _InterlockedExchangeAdd(&SmpPagefileLogIndex, 1u);
    v24 = (v23 + 1) % 32;
    LODWORD(Heap) = (v23 + 1) / 32;
    v18 = 2LL * v24;
    *((_DWORD *)&SmpPagefileLog + 4 * v24) = 1431;
    goto LABEL_33;
  }
  v5 = NtQueryVolumeInformationFile(Handle, &IoStatusBlock, v34, 0x18u, FileFsSizeInformation);
  if ( v5 < 0 )
  {
    v19 = _InterlockedExchangeAdd(&SmpPagefileLogIndex, 1u);
    v20 = (v19 + 1) % 32;
    LODWORD(Heap) = (v19 + 1) / 32;
    v18 = 2LL * v20;
    *((_DWORD *)&SmpPagefileLog + 4 * v20) = 1453;
    goto LABEL_33;
  }
  Heap = (__int64 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x30uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    goto LABEL_23;
  v8 = (_WORD)v4 == (unsigned __int16)SmpOsVolumeLetter;
  *((_WORD *)Heap + 14) = v4;
  *((_DWORD *)Heap + 6) = v31;
  if ( v8 )
  {
    *((_DWORD *)Heap + 4) |= 1u;
    SmpOsVolumeDescriptor = (__int64)Heap;
  }
  if ( (int)RtlQueryVolumeDiskSpeedPolicy(FileHandle, &v27) >= 0 && v27 >= 20 )
    *(_DWORD *)(v7 + 16) |= 4u;
  if ( (unsigned __int8)SmpIsVolumeOnSCMDevice(FileHandle) )
    *(_DWORD *)(v7 + 16) |= 0x40u;
  v9 = v34[1] * v35 * (unsigned __int64)v36;
  *(_QWORD *)(v7 + 32) = v9;
  *(_QWORD *)(v7 + 40) = v34[0] * v35 * (unsigned __int64)v36;
  if ( v9 <= 0x2000000 )
    v10 = 0LL;
  else
    v10 = v9 - 0x2000000;
  *(_QWORD *)(v7 + 32) = v10;
  if ( (unsigned __int8)SmpIsVhdVolume(FileHandle) )
    *(_DWORD *)(v7 + 16) |= 2u;
  VolumeDiskNumber = SmpGetVolumeDiskNumber(FileHandle, &v28);
  v12 = *(_DWORD *)(v7 + 16);
  if ( VolumeDiskNumber >= 0 )
  {
    v13 = v28;
    v12 |= 8u;
    *(_DWORD *)(v7 + 16) = v12;
    *(_DWORD *)(v7 + 20) = v13;
  }
  Heap = &SmpVolumeDescriptorList;
  if ( (v12 & 1) == 0 )
  {
    v14 = (__int64 *)qword_1400245B8;
    if ( *(__int64 **)qword_1400245B8 == &SmpVolumeDescriptorList )
    {
      *(_QWORD *)v7 = &SmpVolumeDescriptorList;
      *(_QWORD *)(v7 + 8) = v14;
      *v14 = v7;
      qword_1400245B8 = v7;
      goto LABEL_23;
    }
LABEL_30:
    __fastfail(3u);
  }
  v15 = SmpVolumeDescriptorList;
  if ( *(__int64 **)(SmpVolumeDescriptorList + 8) != &SmpVolumeDescriptorList )
    goto LABEL_30;
  *(_QWORD *)v7 = SmpVolumeDescriptorList;
  *(_QWORD *)(v7 + 8) = &SmpVolumeDescriptorList;
  *(_QWORD *)(v15 + 8) = v7;
  SmpVolumeDescriptorList = v7;
LABEL_23:
  if ( FileHandle )
    LODWORD(Heap) = NtClose(FileHandle);
  if ( Handle )
    LODWORD(Heap) = NtClose(Handle);
  return (int)Heap;
}
