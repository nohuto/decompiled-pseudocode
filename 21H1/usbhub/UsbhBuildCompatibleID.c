/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C004F5D0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhBuildClassCompatibleID @ 0x1C004EADC (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C004FDCC (UsbhBuildDeviceCompatibleID.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rbx

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    v7 = v6 + 26;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v6 + 26), 0x42554855u);
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)PoolWithTag + 10) = aUsbUnknown[10];
      *(_QWORD *)(a3 + 8) = PoolWithTag;
      *(_DWORD *)(a3 + 4) = v7;
      return 0LL;
    }
    return 3221225626LL;
  }
  v11 = (unsigned int)PdoExt(a2)[355];
  if ( (v11 & 0x40) != 0 )
  {
    v12 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x44uLL);
      *v13 = xmmword_1C0064F70;
      v13[1] = xmmword_1C0064F80;
      v13[2] = xmmword_1C0064F90;
      v13[3] = xmmword_1C0064FA0;
      *((_DWORD *)v13 + 16) = 0;
      *(_QWORD *)(a3 + 8) = v13;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v11 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v11, v10, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
