/*
 * XREFs of DpiCreateSpbResourceRecord @ 0x1C0395D90
 * Callers:
 *     DpOpenSpbResource @ 0x1C03955F0 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCreateSpbResourceRecord(ULONG_PTR a1, ULONG_PTR a2, struct _EX_RUNDOWN_REF **a3)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  unsigned int v8; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  struct _EX_RUNDOWN_REF **v11; // rcx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    return v8;
  }
  LODWORD(PoolWithTag[2].Count) = 1953656900;
  HIDWORD(PoolWithTag[2].Ptr) = 12;
  PoolWithTag[4].Count = a1;
  PoolWithTag[5].Count = a2;
  LODWORD(PoolWithTag[6].Count) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)&PoolWithTag[7]);
  v7[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v8 = -1073741670;
    WdLogSingleEntry1(2LL, -1073741670LL);
    ExFreePoolWithTag(a3, 0);
    return v8;
  }
  ExInitializeRundownProtection(v7 + 3);
  v11 = *(struct _EX_RUNDOWN_REF ***)(a1 + 2712);
  if ( *v11 != (struct _EX_RUNDOWN_REF *)(a1 + 2704) )
    __fastfail(3u);
  v7->Count = a1 + 2704;
  v7[1].Count = (ULONG_PTR)v11;
  *v11 = v7;
  *(_QWORD *)(a1 + 2712) = v7;
  result = 0LL;
  *a3 = v7;
  return result;
}
