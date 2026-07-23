/*
 * XREFs of SiGetSystemDeviceName @ 0x1406E0C38
 * Callers:
 *     SyspartDirectGetSystemPartition @ 0x1406E0C10 (SyspartDirectGetSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x140767470 (SyspartDirectGetSystemDisk.c)
 *     SyspartGetFirmwarePartition @ 0x140771808 (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x14077A1C0 (SyspartDirectGetFirmwareSystemPartition.c)
 *     IopFindSystemDevice @ 0x140896A74 (IopFindSystemDevice.c)
 *     SyspartGetSystemPartition @ 0x14096ED18 (SyspartGetSystemPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(
        __int64 (__fastcall *a1)(_QWORD, void **),
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // edi
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-60h]
  unsigned int *v15; // [rsp+30h] [rbp-58h]
  __int128 SystemInformation; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]

  v15 = a4;
  *a4 = 0;
  Src = 0LL;
  SystemInformation = 0LL;
  v17 = 0LL;
  v8 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v8 = 0;
    if ( (int)v17 < 3 )
      v8 = v17;
  }
  v9 = a1(v8, &Src);
  if ( v9 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)Src + v10) );
    v11 = 2 * v10 + 2;
    v14 = v11;
    if ( a2 && a3 >= v11 )
    {
      v9 = 0;
      memmove(a2, Src, v11);
    }
    else
    {
      v9 = -1073741789;
    }
    *a4 = v11;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}
