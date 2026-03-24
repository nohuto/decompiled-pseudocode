/*
 * XREFs of DpiCreateSpbResourceRecord @ 0x1C02D76C8
 * Callers:
 *     DpOpenSpbResource @ 0x1C02D6E10 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCreateSpbResourceRecord(ULONG_PTR a1, ULONG_PTR a2, struct _EX_RUNDOWN_REF **a3)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF **v19; // rcx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    v13 = -1073741801;
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
    return v13;
  }
  LODWORD(PoolWithTag[2].Count) = 1953656900;
  HIDWORD(PoolWithTag[2].Ptr) = 12;
  PoolWithTag[4].Count = a1;
  PoolWithTag[5].Count = a2;
  LODWORD(PoolWithTag[6].Count) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)&PoolWithTag[7]);
  v11[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v18 = WdLogNewEntry5_WdError(v17, v16);
    v13 = -1073741670;
    *(_QWORD *)(v18 + 24) = -1073741670LL;
    WdLogEvent5_WdError(v18);
    ExFreePoolWithTag(a3, 0);
    return v13;
  }
  ExInitializeRundownProtection(v11 + 3);
  v19 = *(struct _EX_RUNDOWN_REF ***)(a1 + 2712);
  if ( *v19 != (struct _EX_RUNDOWN_REF *)(a1 + 2704) )
    __fastfail(3u);
  v11->Count = a1 + 2704;
  v11[1].Count = (ULONG_PTR)v19;
  *v19 = v11;
  *(_QWORD *)(a1 + 2712) = v11;
  result = 0LL;
  *a3 = v11;
  return result;
}
