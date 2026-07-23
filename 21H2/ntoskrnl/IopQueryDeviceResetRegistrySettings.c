/*
 * XREFs of IopQueryDeviceResetRegistrySettings @ 0x140A52260
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResetRegistrySettings(HANDLE KeyHandle)
{
  int v2; // edi
  int v3; // esi
  __int64 result; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v2 = 10;
  v3 = 3000;
  if ( IopGetRegistryValue(KeyHandle, L"DeviceResetRetryInterval", 0, &P) >= 0 && *((_DWORD *)P + 3) == 4 )
  {
    v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( (unsigned int)(v5 - 101) <= 0x74CB )
      v3 = v5;
  }
  if ( IopGetRegistryValue(KeyHandle, L"DeviceResetMaximumRetries", 0, &P) >= 0 && *((_DWORD *)P + 3) == 4 )
  {
    v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v6 <= 0x64 )
      v2 = v6;
  }
  result = v3;
  PnpResetMaximumRetryAttempts = v2;
  PnpResetRetryInterval = -10000LL * v3;
  return result;
}
