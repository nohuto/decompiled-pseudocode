/*
 * XREFs of HalpIommuBlockDevice @ 0x14051A460
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpIommuDecreaseAliasTrack @ 0x14051A77C (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuLeaveDmaDomain @ 0x14051B4F4 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x14051B7E4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int128 **a1)
{
  __int64 result; // rax
  char v2; // si
  __int128 *v4; // rbx
  int v5; // eax
  __int128 *v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v12; // edx
  int v13; // r9d
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  result = 0LL;
  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 )
    return result;
  v4 = *a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    v5 = HalpIommuQueryAcpiDeviceMapping(*a1, &v14);
    v6 = &v14;
    if ( v5 < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_10;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
  v2 = 1;
  v8 = HalpIommuDecreaseAliasTrack(v4, &v16);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( *(__int64 *)(v16 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v7, *(_QWORD *)(v16 + 16));
LABEL_10:
    v8 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&HalpDeviceBlockUnblockPushLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v12 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v12;
      p_Process += 96LL;
      if ( v12 >= 6 )
        goto LABEL_23;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_23:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&HalpDeviceBlockUnblockPushLock, SessionId, 0LL);
      _enable();
      return (unsigned int)v8;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v13 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v13 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, v13);
  }
  return (unsigned int)v8;
}
