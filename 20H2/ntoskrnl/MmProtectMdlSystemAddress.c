/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1405306B0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLookupIoPageNode @ 0x14025F87C (MiLookupIoPageNode.c)
 *     MiIoSpaceIsConstant @ 0x140260EB0 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x140260F24 (MiMappingHasIoReferences.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiMappingHasIoTracker @ 0x140295480 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // r15
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  _KPROCESS *v8; // rdx
  __int64 v9; // rsi
  __int64 ByteCount; // r13
  __int16 v11; // cx
  unsigned __int64 v12; // r15
  int v13; // edi
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // r14
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v17; // rbx
  int v18; // r13d
  struct _LIST_ENTRY *Flink; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 TransitionPte; // rax
  __int64 v23; // rdi
  int v24; // r8d
  int v25; // r11d
  int v26; // r14d
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  unsigned __int64 v29; // r14
  bool v30; // zf
  int ProtectionPfnCompatible; // eax
  __int64 v32; // r9
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v35; // r10
  unsigned __int8 v36; // r11
  _QWORD *v37; // r14
  unsigned __int8 v38; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v40; // eax
  int v41; // ecx
  _QWORD *v42; // rax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v44; // rdi
  int v45; // r14d
  unsigned __int64 v46; // rbx
  __int64 v47; // r8
  int HasIoTracker; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  _QWORD v53[24]; // [rsp+60h] [rbp-A0h] BYREF

  BugCheckParameter2 = (ULONG_PTR)MemoryDescriptorList;
  memset(v53, 0, 0xB8uLL);
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v7 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v8 = (_KPROCESS *)(ProtectionMask >> 3);
  if ( (unsigned int)((_DWORD)v8 - 1) <= 1 || (_DWORD)v8 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v9 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v11 = MappedSystemVa;
  v53[3] = 0LL;
  v12 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v53[1]) = 20;
  v50 = v12;
  v13 = 0;
  v14 = (unsigned __int64 *)(v9 - 0x98000000000LL);
  v51 = ((unsigned __int64)(v11 & 0xFFF) + ByteCount + 4095) >> 12;
  v15 = v12;
  HasIoTracker = 0;
  if ( v51 )
  {
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v14);
      v49 = BugCheckParameter4;
      v17 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v18 = 1;
        if ( MiPteInShadowRange((unsigned __int64)&v49)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v20 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
          else
          {
            v17 = v49;
          }
        }
        v21 = (v17 >> 12) & 0xFFFFFFFFFLL;
        MiInsertTbFlushEntry((__int64)v53, v15, 1LL, 0);
        if ( v15 == v12 )
          HasIoTracker = MiMappingHasIoTracker(v12);
      }
      else
      {
        if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
          KeBugCheckEx(0x1Au, 0x1235uLL, BugCheckParameter2, (ULONG_PTR)v14, BugCheckParameter4);
        if ( qword_140C4DDC0 )
        {
          if ( (BugCheckParameter4 & 0x10) != 0 )
            v17 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v17 = BugCheckParameter4 & ~qword_140C4DDC0;
        }
        v21 = (v17 >> 12) & 0xFFFFFFFFFLL;
        v18 = 0;
        if ( v15 == v12 )
        {
          if ( (BugCheckParameter4 & 8) != 0 )
            v13 = 1;
          HasIoTracker = v13;
        }
      }
      if ( v7 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v21, 24);
        v49 = TransitionPte;
        v23 = TransitionPte;
        if ( v24 == v25 && v15 == v12 )
        {
          v23 = TransitionPte | 8;
          v49 = TransitionPte | 8;
        }
        v26 = 0;
        v27 = v23;
        if ( MiPteInShadowRange((unsigned __int64)v14) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v26 = 1;
            if ( !HIBYTE(word_140C4DE88) )
            {
LABEL_42:
              if ( (v23 & 1) != 0 )
                v27 = v23 | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_42;
          }
        }
        *v14 = v27;
        if ( v26 )
          MiWritePteShadow((__int64)v14, v27, v28);
        v13 = HasIoTracker;
        goto LABEL_48;
      }
      if ( (*(_QWORD *)(48 * v21 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v7, 48 * v21 - 0x58000000000LL);
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v37 = MiIoSpaceIsConstant(v21, 1LL);
        if ( KiIrqlFlags )
        {
          if ( ((unsigned __int8)KiIrqlFlags & v36) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= v35 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = (__int64)CurrentPrcb->SchedulerAssist;
              v40 = ~(unsigned __int16)(-1LL << (v36 + CurrentIrql));
              v30 = (v40 & *(_DWORD *)(v32 + 20)) == 0;
              *(_DWORD *)(v32 + 20) &= v40;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v37 )
        {
          v41 = *((_DWORD *)v37 + 10);
        }
        else
        {
          v42 = MiLookupIoPageNode(v21);
          if ( !v42 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v21, 1uLL, 0LL);
          v41 = *(unsigned __int16 *)(v42[6] + 2 * (v21 - v42[5])) >> 14;
        }
        ProtectionPfnCompatible = v7 & 7;
        if ( v41 )
        {
          if ( v41 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 8u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v14, v21, ProtectionPfnCompatible | 0xA0000000, v32);
      v49 = ValidPte;
      v44 = ValidPte;
      if ( v18 == 1 )
      {
        MiWriteValidPteNewProtection((unsigned __int64)v14, ValidPte);
        goto LABEL_83;
      }
      v45 = 0;
      v46 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v45 = 1;
          if ( !HIBYTE(word_140C4DE88) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( (v44 & 1) != 0 )
            v46 = v44 | 0x8000000000000000uLL;
        }
      }
      *v14 = v46;
      if ( v45 )
        MiWritePteShadow((__int64)v14, v46, v47);
LABEL_83:
      v13 = HasIoTracker;
      if ( HasIoTracker == 1 )
      {
        v29 = v50;
        if ( v50 == v12 )
          MiMappingHasIoReferences(v12);
        goto LABEL_49;
      }
LABEL_48:
      v29 = v50;
LABEL_49:
      v15 = v29 + 4096;
      ++v14;
      v30 = v51-- == 1;
      v50 = v15;
    }
    while ( !v30 );
  }
  MiFlushTbList((unsigned int *)v53, v8);
  return 0;
}
