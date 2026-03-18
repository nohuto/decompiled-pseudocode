/*
 * XREFs of IopLiveDumpInitRegistrySettings @ 0x14093CA08
 * Callers:
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406DE960 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpInitRegistrySettings(__int64 a1)
{
  void *v2; // rdi
  NTSTATUS RegistryValue; // eax
  unsigned __int64 v4; // rcx
  UNICODE_STRING v5; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v6; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF

  Handle = 0LL;
  v5.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  v2 = 0LL;
  *(_QWORD *)&v5.Length = 7864438LL;
  v6 = 0LL;
  if ( IopOpenRegistryKey(&Handle, 0LL, &v5, 0x20019u, 0) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"UtilizeIOSpace", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x800
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x800u;
    if ( IopGetRegistryValue(Handle, L"MirrorSystemPartitionOnly", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFFDF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x20
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x20u;
    if ( IopGetRegistryValue(Handle, L"EnableInstrumentation", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFF7F | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x80
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x80u;
    if ( IopGetRegistryValue(Handle, L"SkipDisablingInterrupts", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFEFF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x100
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x100u;
    RegistryValue = IopGetRegistryValue(Handle, L"DumpFileSize", 4, &v6);
    v2 = v6;
    if ( RegistryValue >= 0 && v6[1] == 4 && v6[3] == 4 )
    {
      v4 = (unsigned __int64)*(unsigned int *)((char *)v6 + (unsigned int)v6[2]) << 20;
      *(_DWORD *)(a1 + 80) |= 0x200u;
      *(_QWORD *)(a1 + 1136) = v4;
    }
    else
    {
      *(_DWORD *)(a1 + 80) &= ~0x200u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) &= 0xFFFFF45F;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
