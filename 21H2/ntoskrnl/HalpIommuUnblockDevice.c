/*
 * XREFs of HalpIommuUnblockDevice @ 0x14051BA00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuCheckExceptionList @ 0x140510B68 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCheckDpptException @ 0x14051A654 (HalpIommuCheckDpptException.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14051A670 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x14051B030 (HalpIommuGetAcpiDeviceMapCount.c)
 *     HalpIommuJoinDmaDomain @ 0x14051B384 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x14051B7E4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int128 *v5; // rdi
  char v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int AcpiDeviceMapping; // eax
  __int128 *v11; // rcx
  int Device; // eax
  __int64 v13; // rcx
  int v14; // ebx
  _QWORD *v15; // rdi
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]
  char v24; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp+48h]

  v24 = 0;
  *a3 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v5 = Src;
  v6 = 0;
  if ( !HalpIommuCheckDpptException(Src) && !HalpIommuCheckExceptionList(v7) )
  {
    if ( HalpHvIommu && !HalpHvIommuDeviceDomain )
      return 3221225659LL;
    if ( *v8 == 2 )
    {
      AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v8, (__int64)&v22);
      v11 = &v22;
      if ( AcpiDeviceMapping < 0 )
        v11 = v5;
      v5 = v11;
    }
    Device = HalpIommuCreateDevice(v5);
    v14 = Device;
    if ( Device >= 0 )
    {
      v16 = 1;
      if ( *(_DWORD *)v5 == 1
        && ((unsigned int)HalpIommuGetAcpiDeviceMapCount((__int64)v5) > 1 || (*((_BYTE *)v5 + 4) & 1) != 0) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
        v6 = 1;
        v14 = HalpIommuCreateIncreaseAliasTrack(v5, &v18);
        if ( v14 < 0 )
          goto LABEL_26;
        v3 = v18;
        if ( *(__int64 *)(v18 + 24) > 1 )
          goto LABEL_26;
      }
      v15 = v25;
      if ( HalpHvIommu )
      {
        v21 = 0LL;
        v19 = 0LL;
        *(_QWORD *)&v20 = 4LL;
        *((_QWORD *)&v20 + 1) = v25[4];
        v14 = ((__int64 (__fastcall *)(__int128 *, __int64 *))qword_140C4C5F8)(&v20, &v19);
      }
      else
      {
        v14 = HalpIommuJoinDmaDomain(v25, HalpIommuBypassDomain, &v24);
        if ( v14 == -1073741776 && (v24 & 1) != 0 )
        {
          v14 = 0;
          HalpIommuDeleteDevice(v15);
          v15 = 0LL;
          v25 = 0LL;
          v16 = 0;
        }
      }
      if ( v6 )
      {
LABEL_26:
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
        KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
        v3 = v18;
        v15 = v25;
      }
      if ( v14 >= 0 )
        goto LABEL_13;
      if ( v16 )
        HalpIommuDeleteDevice(v15);
    }
    else if ( Device == -1073741275 )
    {
      v15 = v25;
      v14 = 0;
LABEL_13:
      *a3 = v15;
      return (unsigned int)v14;
    }
    if ( v3 )
    {
      v17 = *(_QWORD *)(v3 + 16);
      if ( v17 )
        HalpMmAllocCtxFree(v13, v17);
      HalpMmAllocCtxFree(v13, v3);
    }
    return (unsigned int)v14;
  }
  return 0LL;
}
