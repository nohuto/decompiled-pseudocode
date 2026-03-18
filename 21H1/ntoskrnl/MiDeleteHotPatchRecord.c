/*
 * XREFs of MiDeleteHotPatchRecord @ 0x1408C50AC
 * Callers:
 *     MiUnloadHotPatch @ 0x1408C9E78 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408C9FC4 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiCompareHotPatchNodes @ 0x1408C4EE0 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteHotPatchRecord(unsigned __int64 *a1, ULONG_PTR a2, int a3, int a4)
{
  unsigned __int64 *v4; // rbp
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]
  __int128 v19; // [rsp+40h] [rbp-28h]

  v4 = 0LL;
  v16 = 0LL;
  v17 = a3;
  v18 = a4;
  v5 = a2;
  v15 = 0LL;
  v19 = 0LL;
  if ( (_DWORD)a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, a2);
  }
  v8 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    do
    {
      v9 = MiCompareHotPatchNodes((__int64)&v15, (__int64)v8);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v8 = (unsigned __int64 *)v8[1];
      }
      else
      {
        v8 = (unsigned __int64 *)*v8;
      }
    }
    while ( v8 );
    if ( v8 )
    {
      v4 = v8;
      RtlAvlRemoveNode(a1, v8);
      v10 = 1;
      if ( MiHotPatchGeneration != -1 )
        v10 = MiHotPatchGeneration + 1;
      MiHotPatchGeneration = v10;
    }
  }
  if ( !v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  }
  if ( !v4 )
    return 0LL;
  ExFreePoolWithTag(v4, 0);
  return 1LL;
}
