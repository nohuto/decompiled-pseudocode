/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x1406EB4B0
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1402D99BC (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSnapDriverRange @ 0x140760B20 (MiSnapDriverRange.c)
 *     MiCompleteSecureDriverLoad @ 0x14080C354 (MiCompleteSecureDriverLoad.c)
 *     MiAcquireKernelCfgLock @ 0x14097F660 (MiAcquireKernelCfgLock.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14097F690 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x14097F8F8 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  int KernelCfgBitmapPageTables; // edi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // edx
  unsigned __int64 v9; // r8
  unsigned int v10; // [rsp+38h] [rbp-49h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h] BYREF
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v13[14]; // [rsp+58h] [rbp-29h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v10 = 0;
  if ( a2 )
  {
    MiAcquireKernelCfgLock();
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  *(_QWORD *)(a1 + 48),
                                  *(unsigned int *)(a1 + 64),
                                  1LL);
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      KernelCfgBitmapPageTables = MiCompleteSecureDriverLoad(a1);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        LOBYTE(v5) = 1;
        v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v5, 10, (int)&v10);
        v7 = v6;
        if ( v6 && v10 >= 0xB0 && *(_QWORD *)(v6 + 168) )
        {
          v8 = 0;
          while ( 1 )
          {
            v8 = MiSnapDriverRange(a1, v8, 2, 0, (__int64)&v11, (__int64)&v12);
            if ( v11 )
            {
              v9 = *(_QWORD *)(v7 + 160);
              if ( v9 >= v11 << 25 >> 16 && v9 <= ((v12 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v8 )
              return (unsigned int)KernelCfgBitmapPageTables;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (MiFlags & 0x4000) != 0 )
  {
    memset(v13, 0, 0x68uLL);
    v13[1] = *(_QWORD *)(a1 + 48);
    return (unsigned int)VslpEnterIumSecureMode(2u, 217, 0, (__int64)v13);
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
