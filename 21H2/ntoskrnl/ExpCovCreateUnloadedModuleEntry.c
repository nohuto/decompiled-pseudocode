/*
 * XREFs of ExpCovCreateUnloadedModuleEntry @ 0x1409572CC
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773800 (ExCovReadjustUnloadedModuleEntry.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1402FC190 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FD9C0 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1405EAFA0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1409575CC (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x14095801C (ExpCovReadFriendlyName.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpCovCreateUnloadedModuleEntry(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edi
  PVOID PoolWithTag; // rax
  __int64 v9; // rsi
  PVOID v10; // rax
  __int64 *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // r9
  UNICODE_STRING StringIn; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v1 = a1 + 72;
  v3 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  if ( (int)ExpCovReadFriendlyName(v3, v1, &StringIn) < 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
  if ( ExpCovCurrentPagedPoolInUse + 64 < (unsigned int)ExpCovCurrentPagedPoolInUse
    || (v5 = StringIn.Length + ExpCovCurrentPagedPoolInUse + 64, v5 < ExpCovCurrentPagedPoolInUse)
    || v5 == -1 )
  {
    v13 = a1 + 88;
  }
  else
  {
    v6 = StringIn.Length + v5;
    if ( v6 >= v5 )
    {
      v7 = *(_DWORD *)(a1 + 124) + v6;
      if ( v7 >= v5 && v7 != -1 )
      {
        if ( v7 <= ExCovMaxPagedPoolToUse )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
          v9 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_21;
          memset(PoolWithTag, 0, 0x40uLL);
          if ( RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v9 + 32)) < 0 )
            goto LABEL_21;
          if ( StringIn.Buffer )
            RtlFreeAnsiString(&StringIn);
          if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 88, &StringIn) >= 0
            && RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v9 + 16)) >= 0
            && (*(_DWORD *)(v9 + 48) = *(_DWORD *)(a1 + 124),
                v10 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 124), 0x72766F43u),
                (*(_QWORD *)(v9 + 56) = v10) != 0LL) )
          {
            memset(v10, 0, *(unsigned int *)(a1 + 124));
            memmove(*(void **)(v9 + 56), *(const void **)(a1 + 128), *(unsigned int *)(a1 + 124));
            v11 = (__int64 *)qword_140C16268;
            if ( *(__int64 **)qword_140C16268 != &ExpCovUnloadedModuleList )
              __fastfail(3u);
            *(_QWORD *)v9 = &ExpCovUnloadedModuleList;
            *(_QWORD *)(v9 + 8) = v11;
            *v11 = v9;
            qword_140C16268 = v9;
            v12 = *(_OWORD *)(a1 + 88);
            ExpCovCurrentPagedPoolInUse = v7;
            v15 = v12;
            DbgPrintEx(0x7Eu, 2u, "COV: Entry created for %wZ in ExpCovUnloadedModuleList\n", &v15);
          }
          else
          {
LABEL_21:
            DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
            ExpCovFreeUnloadedModuleEntry((PVOID)v9);
          }
        }
        else
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Max paged pool size (%u) reached, coverage lost for %wZ\n");
        }
        goto LABEL_25;
      }
    }
    v13 = v1;
  }
  DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating paged pool size for %wZ\n", v13);
LABEL_25:
  ExfReleasePushLock(&ExpCovPushLock);
  KeLeaveCriticalRegion();
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
}
