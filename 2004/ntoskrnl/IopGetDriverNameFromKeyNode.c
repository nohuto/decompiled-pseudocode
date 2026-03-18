/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x1407286BC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     PiGetDefaultMessageString @ 0x140758254 (PiGetDefaultMessageString.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A4B97C (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x140A4BA98 (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A4D924 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     ZwQueryKey @ 0x1403F3880 (ZwQueryKey.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  int v6; // ecx
  unsigned int v7; // r15d
  unsigned __int16 *Pool_0; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx
  wchar_t *v12; // rax
  _WORD *v14; // r10
  unsigned int v15; // ecx
  __int16 *v16; // r8
  unsigned int i; // r9d
  __int16 v18; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  P = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v14 = P;
      v15 = (unsigned __int16)(*((_WORD *)P + 6) - 2);
      Destination->Length = v15;
      Destination->MaximumLength = v4[6];
      v16 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v15 >> 1; i; --i )
      {
        v18 = *v16++;
        *v14++ = v18;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_27;
  }
  Source = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = L"\\Driver\\";
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v6 == 2 || (v7 = 16, v6 == 8) )
      {
        v5 = L"\\FileSystem\\";
        v7 = 24;
      }
      Length = 164;
      Pool_0 = (unsigned __int16 *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0xA4uLL);
      if ( !Pool_0 )
        goto LABEL_22;
      v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool_0, Length, &Length);
      v10 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        Pool_0 = (unsigned __int16 *)IopVerifierExAllocatePool_0(NonPagedPoolNx, Length);
        if ( !Pool_0 )
          goto LABEL_22;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool_0, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        goto LABEL_27;
      }
      v11 = v7 + *((_DWORD *)Pool_0 + 3);
      if ( v11 < v7 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        v10 = -1073741675;
        goto LABEL_27;
      }
      v12 = (wchar_t *)IopVerifierExAllocatePool_0(NonPagedPoolNx, (unsigned __int16)(v7 + Pool_0[6]));
      Destination->Buffer = v12;
      if ( v12 )
      {
        Destination->Length = 0;
        Destination->MaximumLength = v11;
        RtlAppendUnicodeToString(Destination, v5);
        Source.Length = Pool_0[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = Pool_0 + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(Pool_0, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(Pool_0, 0);
LABEL_22:
      v10 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)v10;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
