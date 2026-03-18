/*
 * XREFs of PspProcessDynamicEHContinuationTargets @ 0x140904934
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiHotPatchImageTreeCompare @ 0x1408C7038 (MiHotPatchImageTreeCompare.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409174D8 (RtlAddDynamicEHContinuationTarget.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspProcessDynamicEHContinuationTargets(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  unsigned int v4; // r15d
  char v5; // bl
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // rbp
  int v11; // esi
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // r15
  unsigned __int64 **v16; // r12
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-98h]
  unsigned int v22; // [rsp+24h] [rbp-94h]
  struct _KTHREAD *v23; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+38h] [rbp-80h]
  _OWORD v26[3]; // [rsp+48h] [rbp-70h] BYREF

  memset(v26, 0, sizeof(v26));
  v4 = 0;
  v5 = 0;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  v23 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    v12 = 0;
    v22 = v6;
    v5 = 2;
    if ( v6 )
    {
      v13 = a2;
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          goto LABEL_2;
        if ( (unsigned __int64)(*v13 - 0x10000LL) > 0x7FFFFFFDFFFFLL )
        {
          v11 = -1073741503;
          goto LABEL_38;
        }
        if ( (v13[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v11 = -1073741811;
          goto LABEL_38;
        }
        ++v12;
        v13 += 2;
        if ( v12 >= v6 )
          goto LABEL_10;
      }
      v11 = -1073741749;
    }
    else
    {
LABEL_10:
      if ( (_KPROCESS *)BugCheckParameter1 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v26);
        v5 = 3;
      }
      v5 |= 4u;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2568, 0LL);
      if ( v6 )
      {
        v14 = a2 + 1;
        while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v11 = -1073741558;
            goto LABEL_35;
          }
          v15 = *v14;
          v16 = (unsigned __int64 **)(BugCheckParameter1 + 2560);
          if ( (*v14 & 1) != 0 )
          {
            v11 = RtlAddDynamicEHContinuationTarget(BugCheckParameter1 + 2560, *(v14 - 1));
          }
          else
          {
            v17 = *v16;
            if ( !*v16 )
              goto LABEL_33;
            v18 = *(v14 - 1);
            do
            {
              v19 = MiHotPatchImageTreeCompare(v18, (__int64)v17);
              if ( v19 >= 0 )
              {
                if ( v19 <= 0 )
                  break;
                v17 = (unsigned __int64 *)v17[1];
              }
              else
              {
                v17 = (unsigned __int64 *)*v17;
              }
            }
            while ( v17 );
            if ( !v17 )
            {
LABEL_33:
              v11 = -1073741275;
LABEL_34:
              v4 = v21;
              goto LABEL_35;
            }
            RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 2560), v17);
            ExFreePoolWithTag(v17, 0);
            v11 = 0;
          }
          if ( v11 < 0 )
            goto LABEL_34;
          *v14 = v15 | 2;
          v14 += 2;
          v4 = v21 + 1;
          v21 = v4;
          if ( v4 >= v22 )
            goto LABEL_45;
          CurrentThread = v23;
        }
        v11 = -1073741749;
      }
      else
      {
LABEL_45:
        v11 = 0;
      }
LABEL_35:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2568), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 2568));
      KeAbPostRelease(BugCheckParameter1 + 2568);
    }
  }
  else
  {
LABEL_2:
    v11 = -1073741558;
  }
LABEL_38:
  if ( (v5 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v26, 0LL);
  if ( (v5 & 2) != 0 )
    ExReleaseRundownProtection_0(RunRef);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a4 = v4;
  return (unsigned int)v11;
}
