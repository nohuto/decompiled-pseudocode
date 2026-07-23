/*
 * XREFs of KeFlushTb @ 0x1402D4970
 * Callers:
 *     MiAttachSession @ 0x14022E650 (MiAttachSession.c)
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiInsertCachedPte @ 0x1402EA450 (MiInsertCachedPte.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCD40 (MiGetWsAndMakePageTablesNx.c)
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 * Callees:
 *     KxFlushNonGlobalTb @ 0x140230244 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     KiPreprocessFlushTb @ 0x1402D5F30 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403902FC (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390EB4 (KiFlushAffinity.c)
 *     KiFlushCurrentTbOnly @ 0x1403975CC (KiFlushCurrentTbOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VslFlushSecureAddressSpace @ 0x1404FC408 (VslFlushSecureAddressSpace.c)
 *     VmFlushTb @ 0x1405A297C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  int v2; // edi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  char v7; // bp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // di
  _DWORD *v19; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  char v24[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v26; // [rsp+70h] [rbp+18h] BYREF
  char v27; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v25[0] = 0LL;
  v27 = 0;
  v5 = a1;
  v24[0] = 0;
  v6 = a1;
  v26 = 0;
  LOBYTE(a1) = 1;
  v7 = 0;
  result = KiPreprocessFlushTb(a1, v6, a2, (unsigned int)&v27, (__int64)&v26);
  if ( (_BYTE)result )
  {
    KiFlushCurrentTbOnly(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v26;
      if ( v26 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = v26;
        v9 = -1LL << (v26 + 1);
        v16 = ~(unsigned __int16)v9;
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v12 = v26;
    }
    result = v12;
    __writecr8(v12);
    v7 = 1;
  }
  if ( v27 )
  {
    KiPrepareFlushParameters(v5, v25, v24);
    v10 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v25[0], v10, (unsigned __int8)v24[0], v11);
  }
  else if ( !v7 )
  {
    if ( KiKvaShadow )
    {
      if ( v5 != 1 && (!v5 || v5 == 2) )
      {
LABEL_23:
        result = KxFlushNonGlobalTb(a2);
        v2 = 1;
        goto LABEL_8;
      }
    }
    else if ( v5 && (int)v5 <= 2 )
    {
      goto LABEL_23;
    }
    result = KxFlushEntireTb(a2, v9);
    v2 = 1;
  }
LABEL_8:
  if ( v5 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 992LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( !v2 && v5 == 4 )
    result = KeFlushProcessWriteBuffers(1);
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v5);
  if ( ExTbFlushActive )
  {
    v18 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
    {
      v19 = KeGetCurrentPrcb()->SchedulerAssist;
      v19[5] |= (-1 << (v18 + 1)) & 0xFFFC;
    }
    ExFlushTb(0LL, 0LL, v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && v18 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (v18 + 1));
          v17 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    result = v18;
    __writecr8(v18);
  }
  return result;
}
