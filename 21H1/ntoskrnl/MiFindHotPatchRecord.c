/*
 * XREFs of MiFindHotPatchRecord @ 0x140746494
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x140745208 (MiApplyRequiredDriverHotPatches.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C53A0 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     RtlDuplicateUnicodeString @ 0x1406B0430 (RtlDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x1408C4EE0 (MiCompareHotPatchNodes.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+3Ch] [rbp-1Ch]
  __int128 v20; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v17 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v18 = a3;
  v19 = a4;
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
    v10 = MiCompareHotPatchNodes(&v16, v9);
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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  }
  return (unsigned int)v11;
}
