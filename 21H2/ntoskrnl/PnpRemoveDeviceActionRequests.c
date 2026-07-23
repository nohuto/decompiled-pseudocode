/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x14037EB2C
 * Callers:
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A02C (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x14037ECC4 (PnpDeleteDeviceActionRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 **v7; // rax
  _DWORD *v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // r15
  KIRQL v11; // al
  bool v12; // zf
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = *(__int64 **)v3;
      if ( *(_QWORD *)(v3 + 16) == a1 )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v5[1] != v3 || *v7 != (__int64 *)v3 )
          __fastfail(3u);
        *v7 = v5;
        v5[1] = (__int64)v7;
        v8 = *(_DWORD **)(v3 + 48);
        if ( v8 )
          *v8 = -1073741810;
        v9 = *(struct _KEVENT **)(v3 + 40);
        if ( v9 )
          KeSetEvent(v9, 0, 0);
        v10 = *(unsigned int *)(v3 + 24);
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C24EA8);
        v12 = dword_140C24EB0-- == 1;
        v13 = v11;
        if ( v12 )
          PopDirectedDripsClearDisengageReason(4);
        KxReleaseSpinLock(&qword_140C24EA8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v12 = (v18 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v18;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E9F0);
        if ( !--dword_140C1E9F8 && byte_140C1EA68 )
        {
          qword_140C1EA70 += MEMORY[0xFFFFF78000000008] - qword_140C1EA78;
          qword_140C1EA78 = 0LL;
        }
        --dword_140C1EA00[v10];
        KxReleaseSpinLock(&qword_140C1E9F0);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              v21 = v20->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v12 = (v22 & v21[5]) == 0;
              v21[5] &= v22;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
        }
        __writecr8(v14);
        ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 16), 0x746C6644u);
        PnpDeleteDeviceActionRequest(v3);
      }
      v3 = (__int64)v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = v23->SchedulerAssist;
        v12 = ((unsigned int)result & v24[5]) == 0;
        v24[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v4);
  return result;
}
