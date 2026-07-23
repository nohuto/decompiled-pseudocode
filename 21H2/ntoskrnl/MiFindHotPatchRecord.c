/*
 * XREFs of MiFindHotPatchRecord @ 0x14075DC68
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x14075CA08 (MiApplyRequiredDriverHotPatches.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9E50 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlDuplicateUnicodeString @ 0x1405EAFA0 (RtlDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x1408C9990 (MiCompareHotPatchNodes.c)
 */

__int64 __fastcall MiFindHotPatchRecord(
        const UNICODE_STRING **a1,
        ULONG_PTR a2,
        int a3,
        int a4,
        PUNICODE_STRING StringOut,
        _DWORD *a6)
{
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rdi
  const UNICODE_STRING *v9; // rbx
  int v10; // eax
  NTSTATUS v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  __int128 v17; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v14 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = a3;
  v16 = a4;
  if ( !(_DWORD)a2 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, a2);
  }
  v9 = *a1;
  if ( !v9 )
  {
LABEL_8:
    v11 = -1073741275;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = MiCompareHotPatchNodes(&v13, v9);
    if ( v10 >= 0 )
      break;
    v9 = *(const UNICODE_STRING **)&v9->Length;
LABEL_6:
    if ( !v9 )
      goto LABEL_7;
  }
  if ( v10 > 0 )
  {
    v9 = (const UNICODE_STRING *)v9->Buffer;
    goto LABEL_6;
  }
LABEL_7:
  if ( !v9 )
    goto LABEL_8;
  if ( a6 )
    *a6 = MiHotPatchGeneration;
  if ( !StringOut || (v11 = RtlDuplicateUnicodeString(0, v9 + 2, StringOut), v11 >= 0) )
    v11 = 0;
LABEL_9:
  if ( !v6 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)v11;
}
