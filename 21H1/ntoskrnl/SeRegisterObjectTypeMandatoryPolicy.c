/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x1403A93F4
 * Callers:
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x140A61EE8 (SepTokenInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  char v13; // al
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // bp
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  $C774EFD68449142D8271B1EC1EB7FB26 *v27; // rcx
  int v29; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v6 = SepMandatoryObjectTypePolicyCount;
  v7 = 0LL;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  if ( (unsigned int)v7 < 0x20 )
  {
    if ( v3 )
    {
      v9 = (unsigned int)v7;
      goto LABEL_8;
    }
LABEL_7:
    v9 = (unsigned int)v7;
    v10 = 3 * v7;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicyCount = v6 + 1;
LABEL_8:
    v11 = 3 * v9;
    SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
    SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
    if ( (a2 & 1) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x100u;
    if ( (a2 & 2) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x200u;
    if ( (a2 & 4) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x400u;
    v12 = 0;
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&SepMandatoryObjectTypePolicyLock);
  v29 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&SepMandatoryObjectTypePolicyLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    if ( v18 )
      break;
    v20 = (__int64)&v14->LockEntries[v19];
    v17 &= ~(1 << v19);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == SessionId )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
      {
        if ( v20 )
        {
          *(_BYTE *)(v20 + 32) |= 2u;
          if ( *(__int64 *)(v20 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
          v21 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
          v22 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
          *(_BYTE *)(v20 + 25) &= ~1u;
          v29 = v21;
          *(_DWORD *)(v20 + 88) = v22;
          *(_QWORD *)(v20 + 32) = 0LL;
          v23 = (signed __int64)(v20 - (unsigned __int64)v14->LockEntries) / 96;
          if ( v16 == 1 )
            v14->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_30;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, SessionId, 0LL);
LABEL_30:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&SepMandatoryObjectTypePolicyLock, &v29);
  v18 = v14->SpecialApcDisable++ == -1;
  if ( v18 )
  {
    v27 = &v14->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != v27 )
      KiCheckForKernelApcDelivery((__int64)v27, v24, v25, v26);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, (__int64)v26);
  return v12;
}
