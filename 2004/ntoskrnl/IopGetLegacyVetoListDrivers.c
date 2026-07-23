/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x14066853C
 * Callers:
 *     IoGetLegacyVetoList @ 0x1406A54B8 (IoGetLegacyVetoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F40C0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403F5E20 (ZwQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     IopAppendLegacyVeto @ 0x1408AF218 (IopAppendLegacyVeto.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *PoolWithTag; // rsi
  BOOLEAN RestartScan; // r13
  NTSTATUS v4; // ecx
  ULONG v5; // r12d
  unsigned __int16 v6; // r14
  _WORD *v7; // rax
  void *v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r15
  __int64 v11; // r9
  __int128 v12; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Context; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v13[1] = L"\\Driver";
  v13[0] = 1048590LL;
  Length = 0;
  Context = 0;
  DirectoryHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  PoolWithTag = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  RestartScan = 1;
  v12 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_20:
    v8 = (void *)*((_QWORD *)&v12 + 1);
    goto LABEL_13;
  }
  v5 = 202;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCAuLL, 0x6F697050u);
  if ( !PoolWithTag )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_20;
  }
  v6 = 188;
  LODWORD(v12) = 12320768;
  v7 = ExAllocatePoolWithTag(PagedPool, 0xBCuLL, 0x6F697050u);
  *((_QWORD *)&v12 + 1) = v7;
  v8 = v7;
  if ( !v7 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_15;
  }
  *v7 = 0;
  while ( 1 )
  {
    v9 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, v5, 1u, RestartScan, &Context, &Length);
    if ( v9 == -1073741789 )
    {
      v5 = Length;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x6F697050u);
      if ( !PoolWithTag )
        break;
      v9 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, v5, 1u, RestartScan, &Context, &Length);
    }
    RestartScan = 0;
    if ( v9 < 0 )
      goto LABEL_13;
    v10 = *(_WORD *)PoolWithTag + 18;
    if ( v10 > v6 )
    {
      ExFreePoolWithTag(v8, 0);
      WORD1(v12) = v10;
      v6 = v10;
      *((_QWORD *)&v12 + 1) = ExAllocatePoolWithTag(PagedPool, v10, 0x6F697050u);
      v8 = (void *)*((_QWORD *)&v12 + 1);
      if ( !*((_QWORD *)&v12 + 1) )
        break;
    }
    v11 = PoolWithTag[1];
    LOWORD(v12) = v10 - 2;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v8, v6, L"\\Driver\\%ws", v11);
    if ( (int)ObReferenceObjectByName(&v12, 576LL, 0LL) >= 0 )
    {
      if ( (MEMORY[0x10] & 0x40) != 0 )
      {
        **(_DWORD **)(a1 + 16) = 11;
        if ( *(_QWORD *)a1 )
          IopAppendLegacyVeto(a1, PoolWithTag);
      }
      HalPutDmaAdapter(0LL);
      if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
        goto LABEL_20;
      if ( **(int **)(a1 + 24) < 0 )
        goto LABEL_20;
    }
    v8 = (void *)*((_QWORD *)&v12 + 1);
    v6 = WORD1(v12);
  }
  **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_13:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
