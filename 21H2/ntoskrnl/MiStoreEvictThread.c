/*
 * XREFs of MiStoreEvictThread @ 0x1403CDBF0
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreEvictPageFile @ 0x14024FDF0 (MiStoreEvictPageFile.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // r14d
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  _QWORD v19[2]; // [rsp+40h] [rbp-148h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v22[144]; // [rsp+C0h] [rbp-C8h] BYREF

  memset(v22, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    KiInitializeTimer2((__int64)v22, 0LL, 0LL, 8);
    v19[0] &= v4;
    v19[1] = -1LL;
    KeSetTimer2((__int64)v22, -600000000LL, 600000000LL, (__int64)v19);
    Object[1] = v22;
    Object[0] = (PVOID)(v3 + 1216);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1216));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1184);
        v6 = 0LL;
        v7 = *(_DWORD *)(v3 + 16728);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v3 + 8 * v6 + 16736);
            if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v6 + 16736));
              if ( *(_DWORD *)(v8 + 200) >= 0x100u )
                LODWORD(v6) = v6 - 1;
            }
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < v7 );
        }
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1200));
        if ( v5 == *(_DWORD *)(v3 + 1184) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1200));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v13 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1184) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1264), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1200));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v15 >= 2u )
          {
            v16 = KeGetCurrentPrcb();
            v17 = v16->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      __writecr8(v9);
    }
  }
}
