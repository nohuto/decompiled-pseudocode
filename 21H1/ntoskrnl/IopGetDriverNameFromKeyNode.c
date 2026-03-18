/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x140727F90
 * Callers:
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A54518 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x140A54634 (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A564C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x1403F25F0 (ZwQueryKey.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  int v6; // ecx
  unsigned int v7; // r15d
  unsigned __int16 *Pool; // rsi
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
      Pool = (unsigned __int16 *)IopVerifierExAllocatePool(NonPagedPoolNx, 0xA4uLL);
      if ( !Pool )
        goto LABEL_22;
      v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool, Length, &Length);
      v10 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        ExFreePoolWithTag(Pool, 0);
        Pool = (unsigned __int16 *)IopVerifierExAllocatePool(NonPagedPoolNx, Length);
        if ( !Pool )
          goto LABEL_22;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
        goto LABEL_27;
      }
      v11 = v7 + *((_DWORD *)Pool + 3);
      if ( v11 < v7 )
      {
        ExFreePoolWithTag(Pool, 0);
        v10 = -1073741675;
        goto LABEL_27;
      }
      v12 = (wchar_t *)IopVerifierExAllocatePool(NonPagedPoolNx, (unsigned __int16)(v7 + Pool[6]));
      Destination->Buffer = v12;
      if ( v12 )
      {
        Destination->Length = 0;
        Destination->MaximumLength = v11;
        RtlAppendUnicodeToString(Destination, v5);
        Source.Length = Pool[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = Pool + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(Pool, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(Pool, 0);
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
