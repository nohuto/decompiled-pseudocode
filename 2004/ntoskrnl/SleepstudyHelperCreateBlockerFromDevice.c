/*
 * XREFs of SleepstudyHelperCreateBlockerFromDevice @ 0x1408F7C90
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1408F8170 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1408F8230 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x1408F8320 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140706370 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408F7D60 (SshpGenerateDeviceFriendlyName.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromDevice(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *PoolWithTag; // rax
  int DeviceFriendlyName; // edi
  __int128 v11; // xmm0

  v4 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, *(_DWORD *)(a1 + 24));
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x50uLL);
    *v4 = a1;
    v11 = *a2;
    v4[4] = a3;
    *((_BYTE *)v4 + 72) = 1;
    *((_OWORD *)v4 + 1) = v11;
    DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
    if ( DeviceFriendlyName >= 0 )
    {
      *a4 = v4;
      return 0;
    }
  }
  else
  {
    DeviceFriendlyName = -1073741811;
  }
  if ( v4 )
    SleepstudyHelperDestroyBlockerBuilder(v4);
  return (unsigned int)DeviceFriendlyName;
}
