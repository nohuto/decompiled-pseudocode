/*
 * XREFs of KeFlushTb @ 0x1402EA180
 * Callers:
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiAttachSession @ 0x1402E9E38 (MiAttachSession.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CC200 (MiGetWsAndMakePageTablesNx.c)
 *     MiSwitchToPfns @ 0x140A43FB8 (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x1402BFF00 (KiPreprocessFlushTb.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EA4D0 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KiFlushAddressSpaceTb @ 0x14038FCDC (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14039085C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390894 (KiFlushAffinity.c)
 *     KiFlushCurrentTbOnly @ 0x1403970AC (KiFlushCurrentTbOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     VslFlushSecureAddressSpace @ 0x1404FA8E8 (VslFlushSecureAddressSpace.c)
 *     VmFlushTb @ 0x1405A0D1C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B57E8 (ExFlushTb.c)
 */

char __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  int v2; // edi
  char v5; // bp
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // r10
  unsigned __int8 v10; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // di
  _DWORD *v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  char v23[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v25; // [rsp+70h] [rbp+18h] BYREF
  char v26; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v24[0] = 0LL;
  v26 = 0;
  v23[0] = 0;
  v25 = 0;
  v5 = 0;
  LOBYTE(CurrentThread) = KiPreprocessFlushTb(1, a1, a2, &v26, &v25);
  if ( (_BYTE)CurrentThread )
  {
    KiFlushCurrentTbOnly(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v10 = v25;
      if ( v25 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v25;
        Process = (_KPROCESS *)((unsigned int)v25 + 1);
        v14 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v10 = v25;
    }
    LOBYTE(CurrentThread) = v10;
    __writecr8(v10);
    v5 = 1;
  }
  if ( v26 )
  {
    KiPrepareFlushParameters(a1, v24, v23);
    v8 = KiFlushAffinity(a2);
    LOBYTE(CurrentThread) = KiFlushAddressSpaceTb(v24[0], v8, (unsigned __int8)v23[0], v9);
  }
  else if ( !v5 )
  {
    if ( KiKvaShadow )
    {
      if ( a1 != 1 && (!a1 || a1 == 2) )
      {
LABEL_23:
        LOBYTE(CurrentThread) = KxFlushNonGlobalTb(a2);
        v2 = 1;
        goto LABEL_8;
      }
    }
    else if ( a1 && (int)a1 <= 2 )
    {
      goto LABEL_23;
    }
    LOBYTE(CurrentThread) = KxFlushEntireTb(a2);
    v2 = 1;
  }
LABEL_8:
  if ( a1 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( Process->SecureState.SecureHandle )
      LOBYTE(CurrentThread) = VslFlushSecureAddressSpace();
  }
  if ( !v2 && a1 == 4 )
  {
    LOBYTE(Process) = 1;
    LOBYTE(CurrentThread) = KeFlushProcessWriteBuffers(Process);
  }
  if ( VmTbFlushEnabled )
    LOBYTE(CurrentThread) = VmFlushTb(0LL, 0LL, a1);
  if ( ExTbFlushActive )
  {
    v16 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
    {
      v17 = KeGetCurrentPrcb()->SchedulerAssist;
      v17[5] |= (-1 << (v16 + 1)) & 0xFFFC;
    }
    ExFlushTb(0LL, 0LL, a1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v16 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v16 + 1));
          v15 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    LOBYTE(CurrentThread) = v16;
    __writecr8(v16);
  }
  return (char)CurrentThread;
}
