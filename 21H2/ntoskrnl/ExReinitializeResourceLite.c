/*
 * XREFs of ExReinitializeResourceLite @ 0x140302670
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     ExpOwnerEntryToThread @ 0x1403027D8 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140357EF0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405AB0D0 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v3; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // ecx
  __int64 v7; // rdx
  unsigned int v9; // r15d
  POWNER_ENTRY v10; // r13
  unsigned int v11; // eax
  struct _KTHREAD *v12; // r12
  __int64 v13; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v14; // eax

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v9 = 1;
    v10 = Resource->OwnerTable;
    v11 = TableSize;
    if ( TableSize > 1 )
    {
      do
      {
        v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(++v10);
        if ( v12 )
        {
          ++v3;
          if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
            && (v10->TableSize & 2) == 0
            && v12 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 3uLL);
          }
          v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v10->TableSize;
          if ( (*(_BYTE *)&v14 & 1) != 0 )
          {
            LOBYTE(v13) = 1;
            PsBoostThreadIoEx(v12, v13, 0LL, 0LL);
            v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v10->TableSize;
          }
          if ( (*(_BYTE *)&v14 & 4) != 0 )
          {
            PsBoostThreadIoQoS((__int64)v12, 1);
            v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v10->TableSize;
          }
          if ( (*(_BYTE *)&v14 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
        }
        ++v9;
      }
      while ( v9 < TableSize );
      v11 = OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (v11 - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v3;
  }
  v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v7 = *(_BYTE *)&v6 & 2;
  if ( (*(_BYTE *)&v6 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_18;
  }
  if ( OwnerThread )
  {
    if ( ((Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (*(_BYTE *)&v6 & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      LOBYTE(v7) = 1;
      PsBoostThreadIoEx(OwnerThread, v7, 0LL, 0LL);
      v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v6 & 4) != 0 )
    {
      PsBoostThreadIoQoS(OwnerThread, 1);
      v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v6 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_18:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x865Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
