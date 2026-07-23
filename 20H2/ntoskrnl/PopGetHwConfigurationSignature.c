/*
 * XREFs of PopGetHwConfigurationSignature @ 0x140999CF4
 * Callers:
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     HalGetMemoryCachingRequirements @ 0x1403A3F10 (HalGetMemoryCachingRequirements.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 PopGetHwConfigurationSignature()
{
  void *v0; // rbx
  unsigned int v1; // r14d
  unsigned int v2; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rax
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-28h] BYREF

  v9 = 0;
  SystemInformation[4] = 0;
  v0 = 0LL;
  SystemInformation[1] = 1;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  v1 = 0;
  SystemInformation[0] = 1094930505;
  SystemInformation[2] = 1346584902;
  v2 = 4;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x206D654Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1094930505;
      PoolWithTag[1] = 1;
      PoolWithTag[2] = 1346584902;
      PoolWithTag[3] = ReturnLength - 16;
      if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0
        && *((_BYTE *)v4 + 24) >= 5u )
      {
        v5 = (unsigned int)v4[13];
        HalGetMemoryCachingRequirements(v5, 64LL, &v9);
        if ( v9 != 1 )
        {
          v2 = 516;
          if ( v9 == 2 )
            v2 = 1028;
        }
        v6 = (_DWORD *)MmMapIoSpaceEx(v5, 64LL, v2);
        v0 = v6;
        if ( *v6 == 1396916550 )
          v1 = v6[2];
      }
      ExFreePoolWithTag(v4, 0x206D654Du);
      if ( v0 )
        MmUnmapIoSpace(v0, 0x40uLL);
    }
  }
  return v1;
}
