/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x1405FDDF0
 * Callers:
 *     IoGetLegacyVetoList @ 0x14071F180 (IoGetLegacyVetoList.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14020AEFC (RtlStringCbPrintfW.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F8C70 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FA9F0 (ZwQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     IopAppendLegacyVeto @ 0x1408B4D48 (IopAppendLegacyVeto.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *PoolWithTag; // rsi
  char v3; // r13
  NTSTATUS v4; // ecx
  unsigned __int16 v5; // r14
  _WORD *v6; // rax
  void *v7; // rbx
  int DirectoryObject; // eax
  unsigned __int16 v9; // r15
  __int64 v10; // r9
  struct _DMA_ADAPTER *v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // [rsp+20h] [rbp-59h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp+6Fh] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v16[1] = L"\\Driver";
  v16[0] = 1048590LL;
  LODWORD(NumberOfBytes) = 0;
  v19 = 0;
  DirectoryHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  PoolWithTag = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
  v3 = 1;
  v15 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_20:
    v7 = (void *)*((_QWORD *)&v15 + 1);
    goto LABEL_13;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCAuLL, 0x6F697050u);
  if ( !PoolWithTag )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_20;
  }
  v5 = 188;
  LODWORD(v15) = 12320768;
  v6 = ExAllocatePoolWithTag(PagedPool, 0xBCuLL, 0x6F697050u);
  *((_QWORD *)&v15 + 1) = v6;
  v7 = v6;
  if ( !v6 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_15;
  }
  *v6 = 0;
  while ( 1 )
  {
    LOBYTE(v13) = v3;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)PoolWithTag);
    if ( DirectoryObject == -1073741789 )
    {
      v12 = NumberOfBytes;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x6F697050u);
      if ( !PoolWithTag )
        break;
      LOBYTE(v13) = v3;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)PoolWithTag);
    }
    v3 = 0;
    if ( DirectoryObject < 0 )
      goto LABEL_13;
    v9 = *(_WORD *)PoolWithTag + 18;
    if ( v9 > v5 )
    {
      ExFreePoolWithTag(v7, 0);
      WORD1(v15) = v9;
      v5 = v9;
      *((_QWORD *)&v15 + 1) = ExAllocatePoolWithTag(PagedPool, v9, 0x6F697050u);
      v7 = (void *)*((_QWORD *)&v15 + 1);
      if ( !*((_QWORD *)&v15 + 1) )
        break;
    }
    v10 = PoolWithTag[1];
    LOWORD(v15) = v9 - 2;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v7, v5, L"\\Driver\\%ws", v10, v13, &v19, &NumberOfBytes);
    if ( (int)ObReferenceObjectByName((__int64)&v15, 576LL, 0LL, 0, (__int64)IoDriverObjectType, 0, 0LL, &DmaAdapter) >= 0 )
    {
      v11 = DmaAdapter;
      if ( (*(_DWORD *)&DmaAdapter[1].Version & 0x40) != 0 )
      {
        **(_DWORD **)(a1 + 16) = 11;
        if ( *(_QWORD *)a1 )
          IopAppendLegacyVeto(a1, PoolWithTag);
      }
      HalPutDmaAdapter(v11);
      if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
        goto LABEL_20;
      if ( **(int **)(a1 + 24) < 0 )
        goto LABEL_20;
    }
    v7 = (void *)*((_QWORD *)&v15 + 1);
    v5 = WORD1(v15);
  }
  **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_13:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
