/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180016EE4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800101B0 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlxOemStringToUnicodeSize @ 0x180016DE0 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     LdrGetDllHandleByName @ 0x1800770B0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x18008D810 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  int v0; // r8d
  int v1; // edx
  int v2; // eax
  __int64 v3; // rcx
  int Descriptor; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  void *ApiSetMap; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  const char *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  char v14; // r14
  unsigned __int16 v15; // ax
  wchar_t *Buffer; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v20[12]; // [rsp+50h] [rbp-18h] BYREF
  char v21; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v23 = 0LL;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v23);
  LOWORD(v0) = 13;
  LOBYTE(v1) = 1;
  v2 = RtlpImageDirectoryEntryToDataEx(v23, v1, v0, (unsigned int)&v22, (__int64)&v24);
  v3 = v24;
  if ( v2 < 0 )
    v3 = 0LL;
  v24 = v3;
  if ( !v3 )
    return 0LL;
  Descriptor = 0;
  v5 = v22 >> 5;
  v6 = 0;
  UnicodeString = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( !(v22 >> 5) )
    return (unsigned int)Descriptor;
  v8 = v24;
  while ( 1 )
  {
    v9 = v8 + 32LL * v6;
    if ( !*(_DWORD *)(v9 + 4) )
      goto LABEL_17;
    v10 = (const char *)(v23 + *(unsigned int *)(v9 + 4));
    if ( !strnicmp(v10, "EXT-", 4uLL) )
      break;
LABEL_16:
    if ( ++v6 >= v5 )
      goto LABEL_17;
  }
  RtlInitAnsiString(&DestinationString, v10);
  v11 = RtlxOemStringToUnicodeSize(&DestinationString.Length);
  v12 = v11;
  if ( v11 <= UnicodeString.MaximumLength )
  {
    UnicodeString.Length = 0;
LABEL_10:
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
    LdrpLogDllState(0LL, &UnicodeString, 5328LL);
    v13 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v21, (__int64)v20);
    v14 = v21;
    Descriptor = v13;
    if ( v13 >= 0 && v21 )
    {
      if ( v20[0] )
        v15 = 5329;
      else
        v15 = 5330;
    }
    else
    {
      v15 = 5331;
    }
    LdrpLogDllState(0LL, &UnicodeString, v15);
    if ( v14 && !(unsigned int)RtlCompareUnicodeString(LdrpKernel32DllName, v20, 1) )
    {
      Descriptor = LdrpResolveDelayLoadDescriptor(v23, v8 + 32LL * v6);
      if ( Descriptor < 0 )
        goto LABEL_17;
      Descriptor = 0;
    }
    goto LABEL_16;
  }
  if ( v11 >= 0xFFFE )
  {
    Descriptor = -1073741675;
LABEL_17:
    Buffer = UnicodeString.Buffer;
    goto LABEL_18;
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v12);
  UnicodeString.Buffer = Buffer;
  if ( Buffer )
  {
    UnicodeString.MaximumLength = v12;
    goto LABEL_10;
  }
  Descriptor = -1073741670;
LABEL_18:
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)Descriptor;
}
