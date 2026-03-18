/*
 * XREFs of PopWatchdogWorker @ 0x140573A30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140275F20 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PopResolveWatchdogParam @ 0x14057392C (PopResolveWatchdogParam.c)
 *     MmQuitNextSession @ 0x1406D3050 (MmQuitNextSession.c)
 */

__int64 __fastcall PopWatchdogWorker(__int64 a1)
{
  bool v2; // r12
  unsigned __int64 v3; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  _KPROCESS *SessionById; // r14
  ULONG_PTR v10; // r13
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v12; // r13
  __int64 result; // rax
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  __int64 BugCheckParameter3; // [rsp+40h] [rbp-69h]
  __int64 BugCheckParameter2; // [rsp+48h] [rbp-61h]
  ULONG BugCheckCode[4]; // [rsp+50h] [rbp-59h]
  __int128 v22; // [rsp+60h] [rbp-49h]
  __int128 v23; // [rsp+70h] [rbp-39h]
  __int128 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-19h]
  _OWORD v26[3]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  memset(v26, 0, sizeof(v26));
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 224);
    v22 = *(_OWORD *)(a1 + 240);
    v23 = *(_OWORD *)(a1 + 256);
    v25 = *(_QWORD *)(a1 + 288);
    v24 = *(_OWORD *)(a1 + 272);
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    if ( BugCheckCode[1] == -1 )
      SessionById = 0LL;
    else
      SessionById = (_KPROCESS *)MmGetSessionById(BugCheckCode[1]);
    if ( SessionById )
      v2 = (int)MmAttachSession(SessionById, (__int64)v26) >= 0;
    v10 = PopResolveWatchdogParam(v22, v24);
    BugCheckParameter2 = PopResolveWatchdogParam(*((__int64 *)&v22 + 1), SBYTE1(v24));
    BugCheckParameter3 = PopResolveWatchdogParam(v23, SBYTE2(v24));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v23 + 1), SBYTE3(v24));
    if ( !*((_QWORD *)&v24 + 1) )
      KeBugCheckEx(BugCheckCode[2], v10, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, __int64, __int64, ULONG_PTR))&v24 + 1))(
      v25,
      BugCheckCode[2],
      v10,
      BugCheckParameter2,
      BugCheckParameter3,
      BugCheckParameter4);
    v12 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v16 = v15->SchedulerAssist;
          v8 = ((unsigned int)result & v16[5]) == 0;
          v16[5] &= result;
          if ( v8 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
    }
    __writecr8(v12);
    if ( v2 )
    {
      MmDetachSession((__int64)SessionById, (__int64)v26);
      return MmQuitNextSession(SessionById);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v8 = ((unsigned int)result & v18[5]) == 0;
          v18[5] &= result;
          if ( v8 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
