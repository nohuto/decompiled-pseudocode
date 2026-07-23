/*
 * XREFs of IopLiveDumpInitRegistrySettings @ 0x140898620
 * Callers:
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpInitRegistrySettings(__int64 a1)
{
  void *v2; // rdi
  int v3; // edx
  NTSTATUS RegistryValue; // eax
  unsigned __int64 v5; // rcx
  UNICODE_STRING v6; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v7; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF

  Handle = 0LL;
  v6.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  v2 = 0LL;
  *(_QWORD *)&v6.Length = 7864438LL;
  v7 = 0LL;
  if ( IopOpenRegistryKey(&Handle, 0LL, &v6, 0x20019u, 0) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"BufferAllocationScheme", 4, &v7) >= 0 && v7[1] == 4 && v7[3] == 4 )
    {
      v3 = *(_DWORD *)((char *)v7 + (unsigned int)v7[2]);
      if ( (unsigned int)(v3 - 1) > 3 )
        v3 = 2;
    }
    else
    {
      v3 = 2;
    }
    *(_DWORD *)(a1 + 1040) = v3;
    if ( IopGetRegistryValue(Handle, L"MirrorSystemPartitionOnly", 4, &v7) >= 0 && v7[1] == 4 && v7[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFFDF | (*(_DWORD *)((char *)v7 + (unsigned int)v7[2]) != 0
                                                                ? 0x20
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x20u;
    if ( IopGetRegistryValue(Handle, L"EnableInstrumentation", 4, &v7) >= 0 && v7[1] == 4 && v7[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFF7F | (*(_DWORD *)((char *)v7 + (unsigned int)v7[2]) != 0
                                                                ? 0x80
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x80u;
    if ( IopGetRegistryValue(Handle, L"SkipDisablingInterrupts", 4, &v7) >= 0 && v7[1] == 4 && v7[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFEFF | (*(_DWORD *)((char *)v7 + (unsigned int)v7[2]) != 0
                                                                ? 0x100
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x100u;
    RegistryValue = IopGetRegistryValue(Handle, L"DumpFileSize", 4, &v7);
    v2 = v7;
    if ( RegistryValue >= 0 && v7[1] == 4 && v7[3] == 4 )
    {
      v5 = (unsigned __int64)*(unsigned int *)((char *)v7 + (unsigned int)v7[2]) << 20;
      *(_DWORD *)(a1 + 80) |= 0x200u;
      *(_QWORD *)(a1 + 1048) = v5;
    }
    else
    {
      *(_DWORD *)(a1 + 80) &= ~0x200u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) &= 0xFFFFFC5F;
    *(_DWORD *)(a1 + 1040) = 2;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
