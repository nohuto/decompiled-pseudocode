/*
 * XREFs of _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 */

int __stdcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  unsigned __int16 v2; // dx
  __int16 v3; // di
  PVOID Heap; // ecx
  unsigned int v6; // ecx
  NTSTATUS v7; // esi
  struct _PEB *v8; // eax
  SIZE_T v9; // [esp-4h] [ebp-4Ch]
  size_t v10; // [esp-4h] [ebp-4Ch]
  size_t v11; // [esp-4h] [ebp-4Ch]
  PVOID v12; // [esp-4h] [ebp-4Ch]
  HANDLE FileHandle; // [esp+Ch] [ebp-3Ch] BYREF
  PVOID v14; // [esp+10h] [ebp-38h] BYREF
  PVOID v15; // [esp+14h] [ebp-34h] BYREF
  _WORD v16[2]; // [esp+18h] [ebp-30h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-2Ch]
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-20h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v1 = *a1;
  v2 = v1 + DestinationString.Length;
  v16[0] = v1 + DestinationString.Length;
  if ( (unsigned __int16)(v1 + DestinationString.Length) >= (unsigned __int16)v1 && v2 >= DestinationString.Length )
  {
    v3 = *(_WORD *)(*((_DWORD *)a1 + 1) + 2 * (v1 >> 1) - 2);
    if ( v3 != 92 )
      v16[0] = v2 + 2;
    v16[1] = v16[0] + 2;
    LODWORD(v9) = (unsigned __int16)(v16[0] + 2);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741670;
    LODWORD(v10) = *a1;
    memcpy(Heap, *((const void **)a1 + 1), v10);
    v6 = *a1;
    v16[0] = *a1;
    if ( v3 != 92 )
    {
      *((_WORD *)BaseAddress + (v6 >> 1)) = 92;
      LOWORD(v6) = v16[0] + 2;
      v16[0] += 2;
    }
    LODWORD(v11) = DestinationString.Length;
    memcpy((char *)BaseAddress + (unsigned __int16)v6, DestinationString.Buffer, v11);
    v16[0] += DestinationString.Length;
    *((_WORD *)BaseAddress + (v16[0] >> 1)) = 0;
    v7 = RtlpSysVolCreateSecurityDescriptor(&v14, &v15);
    if ( v7 >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
      ObjectAttributes.SecurityDescriptor = v14;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( NtCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0, 0, 7u, 1u, 0x201060u, 0, 0) >= 0 )
        NtClose(FileHandle);
      v7 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0, 6u, 7u, 3u, 0x21u, 0, 0);
      if ( v7 < 0 )
      {
        RtlpSysVolTakeOwnership(v16);
        v7 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0, 6u, 7u, 3u, 0x21u, 0, 0);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v8 = NtCurrentPeb();
      if ( v7 < 0 )
      {
        RtlFreeHeap(v8->ProcessHeap, 0, v15);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        return v7;
      }
      RtlFreeHeap(v8->ProcessHeap, 0, v14);
      v7 = RtlpSysVolCheckOwnerAndSecurity(FileHandle);
      NtClose(FileHandle);
      v12 = v15;
    }
    else
    {
      v12 = BaseAddress;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    return v7;
  }
  return -1073741811;
}
