/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x140752F3C
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x140752DDC (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int RegistryValue; // ebx
  PVOID v7; // rcx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF
  __int16 *v9; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  v9 = 0LL;
  result = PnpUnicodeStringToWstr(&v9, 0LL, a1);
  if ( (int)result >= 0 )
  {
    RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
    PnpUnicodeStringToWstrFree(v9, (__int64)a1);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, P);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
      {
        v7 = P[0];
        if ( *((_DWORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 3) >= 4u )
          *a3 = *(_DWORD *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (unsigned int)RegistryValue;
  }
  return result;
}
